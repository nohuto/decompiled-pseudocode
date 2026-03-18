/*
 * XREFs of MmEnforceWorkingSetLimit @ 0x14008A9B8
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x14053154C (PspApplyWorkingSetLimitsToProcess.c)
 *     PspSetQuotaLimits @ 0x14057899C (PspSetQuotaLimits.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14077B3B8 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x14077B47C (PspApplyWorkingSetLimits.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MmEnforceWorkingSetLimit(_KPROCESS *BugCheckParameter1, char a2)
{
  unsigned __int16 *v2; // rsi
  int v3; // r12d
  unsigned int v4; // r15d
  char v5; // r9
  char v6; // di
  char v7; // r14
  __int64 SharedVm; // rbx
  KIRQL v9; // al
  KIRQL v10; // r13
  unsigned int v11; // ecx
  BOOL v12; // r9d
  unsigned __int8 v13; // r8
  char v14; // cl
  char v15; // dl
  char v16; // al
  char v17; // cl
  char v18; // dl
  __int64 v19; // rdx
  unsigned __int16 v21; // [rsp+24h] [rbp-5Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-58h] BYREF
  _BYTE v23[48]; // [rsp+40h] [rbp-40h] BYREF

  v2 = &BugCheckParameter1[1].IdealNode[12];
  v3 = 0;
  v4 = 0;
  v5 = a2 & 0xF7;
  if ( (a2 & 4) == 0 )
    v5 = a2;
  v6 = v5 & 0xFD;
  if ( (v5 & 1) == 0 )
    v6 = v5;
  v7 = ((a2 & 4) != 0 ? 0x80 : 0) | 0x40;
  if ( (v5 & 1) == 0 )
    v7 = (a2 & 4) != 0 ? 0x80 : 0;
  if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
  {
    v3 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v23);
  }
  SharedVm = MiGetSharedVm(v2);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = &qword_1403CC4C0;
  v10 = v9;
  KxAcquireQueuedSpinLock(&LockHandle, &qword_1403CC4C0);
  v11 = *((_DWORD *)v2 + 46);
  v21 = v11;
  if ( (v6 & 8) != 0 )
  {
    LOBYTE(v11) = v11 & 0x7F;
    LOBYTE(v21) = v11;
  }
  v12 = (v6 & 8) != 0;
  if ( (v6 & 2) != 0 )
  {
    v12 = 1;
    LOBYTE(v21) = v11 & 0xBF;
  }
  v13 = v11 & 0xBF;
  if ( (v6 & 2) == 0 )
    v13 = v11;
  v14 = v7 | 0x80;
  if ( v13 >> 7 != 1 )
    v14 = v7;
  v15 = v14 | 0x40;
  v16 = v14;
  v17 = v6;
  if ( (v13 & 0x40) == 0 )
    v15 = v16;
  if ( v15 < 0 && (v15 & 0x40) != 0 && (unsigned __int64)(*((_QWORD *)v2 + 14) + 6LL) >= *((_QWORD *)v2 + 19) )
  {
    v17 = -6;
    v4 = -1073741748;
  }
  if ( (v17 & 4) != 0 )
  {
    v12 = 1;
    LOBYTE(v21) = v13 | 0x80;
  }
  v18 = v13 | 0x80;
  if ( (v17 & 4) == 0 )
    v18 = v13;
  if ( (v17 & 1) != 0 )
  {
    v12 = 1;
    LOBYTE(v21) = v18 | 0x40;
  }
  if ( v12 )
    v2[92] = v21;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v19) = v10;
  MiUnlockWorkingSetExclusive(v2, v19);
  if ( v3 )
    KiUnstackDetachProcess((__int64)v23, 0LL);
  return v4;
}
