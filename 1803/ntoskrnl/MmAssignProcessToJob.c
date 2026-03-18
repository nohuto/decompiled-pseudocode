/*
 * XREFs of MmAssignProcessToJob @ 0x140531714
 * Callers:
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140531810 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE70 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE94 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiUnlockVadRange @ 0x1404BFFA8 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404C010C (MiLockVadRange.c)
 *     PsChangeJobMemoryUsage @ 0x14077B2A0 (PsChangeJobMemoryUsage.c)
 */

__int64 __fastcall MmAssignProcessToJob(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r14
  int v4; // esi
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // di
  _BYTE v11[48]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( CurrentThread->ApcState.Process != (_KPROCESS *)a1 )
  {
    v4 = 1;
    KiStackAttachProcess((_KPROCESS *)a1, 0, (__int64)v11);
  }
  v7 = MiLockVadRange(a1, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, 0xFFFFFFFFFFFFFFFFuLL, 0);
  if ( v7 || (*(_DWORD *)(a1 + 1740) & 1) != 0 )
  {
    LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
    v8 = *(_QWORD *)(a1 + 1264);
    *(_QWORD *)(a1 + 904) = *(_QWORD *)(a1 + 944);
    v9 = PsChangeJobMemoryUsage(a3 | 3u, v8, a1);
    _InterlockedOr((volatile signed __int32 *)(a1 + 768), 0x10u);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1);
  }
  else
  {
    v9 = 0;
  }
  MiUnlockVadRange(a1, -1LL, v7, 0);
  if ( v4 )
    KiUnstackDetachProcess((__int64)v11, 0LL);
  return v9;
}
