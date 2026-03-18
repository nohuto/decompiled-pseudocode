/*
 * XREFs of MiCommitEnclavePages @ 0x1407514F0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14007BE70 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400A4CF0 (ExReleaseAutoExpandPushLockShared.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAddPagesToEnclave @ 0x140750E84 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 PteAddress; // r15
  unsigned __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r14
  char v14; // al
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // rcx
  ULONG_PTR v20; // rbx

  if ( a5 != 4096 )
    return 3221225715LL;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  PteAddress = MiGetPteAddress(a3);
  v10 = 0;
  v11 = MiGetPteAddress(v9);
  v12 = PteAddress;
  v13 = 0LL;
  if ( PteAddress <= v11 )
  {
    do
    {
      v14 = MI_READ_PTE_LOCK_FREE(v12);
      v17 = v13 + 1;
      if ( (v14 & 1) != 0 )
        v17 = v13;
      v12 = v15 + 8;
      v13 = v17;
    }
    while ( v12 <= v11 );
    if ( v17 )
    {
      CurrentThread = KeGetCurrentThread();
      v19 = *(_QWORD *)(v16 + 1032);
      --CurrentThread->SpecialApcDisable;
      v20 = ExAcquireAutoExpandPushLockShared(v19 + 16, 0LL);
      v10 = MiAddPagesToEnclave(a2, v13, PteAddress, v11, a6);
      ExReleaseAutoExpandPushLockShared(v20, 0LL);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return v10;
}
