/*
 * XREFs of MiProtectAweRegion @ 0x14026271C
 * Callers:
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140007E50 (ExAcquireAutoExpandPushLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400B5B90 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiUnlockPageTableInternal @ 0x140123AD0 (MiUnlockPageTableInternal.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall MiProtectAweRegion(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rsi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int8 v18; // r13
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int8 v23; // [rsp+20h] [rbp-E0h]
  __int64 Process; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-D0h]
  struct _KTHREAD *v26; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h]
  int v28; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v29; // [rsp+54h] [rbp-ACh]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]

  *a4 = 24;
  v5 = a3;
  if ( (unsigned int)a3 > 0x18 )
    return 3221225496LL;
  v6 = 16777234;
  if ( !_bittest(&v6, a3) )
    return 3221225496LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentThread = KeGetCurrentThread();
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v7;
  v26 = CurrentThread;
  Process = (__int64)CurrentThread->ApcState.Process;
  v10 = Process + 1280;
  if ( (_DWORD)a3 == 24 )
    a3 = 1LL;
  LODWORD(a3) = a3 | 0x80000000;
  ValidPte = MiMakeValidPte(v7, -1LL, a3, (__int64)a4);
  v12 = ValidPte;
  if ( v5 == 24 )
    v12 = ValidPte & 0xFFFFFFFFFFFFFFFBuLL;
  v13 = 0LL;
  v30 = 20LL;
  v28 = 1;
  v29 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v14 = *(_QWORD *)(Process + 1032);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v14 + 16;
  ExAcquireAutoExpandPushLockExclusive(v14 + 16, 0LL);
  v15 = MiLockWorkingSetShared(v10);
  v23 = v15;
  if ( v7 <= v9 )
  {
    v18 = v15;
    do
    {
      if ( !v13 || (v7 & 0xFFF) == 0 )
      {
        MiFlushTbList((__int64)&v28, v16, v17);
        if ( v13 )
        {
          MiUnlockPageTableInternal(v10, v13);
          MiUnlockWorkingSetShared(v10, v18, v19);
          MiLockWorkingSetShared(v10);
        }
        v13 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiLockPageTableInternal(v10, v13, 0LL);
      }
      v20 = MI_READ_PTE_LOCK_FREE(v7);
      Process = v20;
      if ( (v20 & 1) != 0 )
      {
        if ( v7 == v25 && (v20 & 4) != 0 )
          *a4 = (v20 & 0x800) != 0 ? 4 : 1;
        v12 ^= (v12 ^ MI_READ_PTE_LOCK_FREE((unsigned __int64)&Process)) & 0xFFFFFFFFF000LL;
        MiInsertTbFlushEntry((__int64)&v28, (__int64)(v7 << 25) >> 16, 1LL, 0);
        MiWriteValidPteNewProtection(v7, v12);
      }
      v7 += 8LL;
    }
    while ( v7 <= v9 );
    CurrentThread = v26;
  }
  MiFlushTbList((__int64)&v28, v16, v17);
  if ( v13 )
    MiUnlockPageTableInternal(v10, v13);
  MiUnlockWorkingSetShared(v10, v23, v21);
  ExReleaseAutoExpandPushLockExclusive(BugCheckParameter2, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return 0LL;
}
