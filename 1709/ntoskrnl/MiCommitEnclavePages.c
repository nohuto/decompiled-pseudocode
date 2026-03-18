/*
 * XREFs of MiCommitEnclavePages @ 0x1406E7A90
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1404965C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiGetVmPartition @ 0x140120738 (MiGetVmPartition.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiAddPagesToEnclave @ 0x1406E74B8 (MiAddPagesToEnclave.c)
 */

__int64 __fastcall MiCommitEnclavePages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned __int64 PteAddress; // r14
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rbp
  __int64 *v12; // r9
  __int64 PteShadow; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rcx
  ULONG_PTR v16; // rdi
  _QWORD *VmPartition; // rax
  unsigned int v18; // ebx

  if ( a5 != 4096 )
    return 3221225715LL;
  if ( (a6 & 7) == 0 || a6 > 7 || (a6 & 5) == 5 )
    return 3221225714LL;
  PteAddress = MiGetPteAddress(a3);
  v11 = MiGetPteAddress(v10);
  v12 = (__int64 *)PteAddress;
  if ( PteAddress > v11 )
  {
LABEL_12:
    CurrentThread = KeGetCurrentThread();
    v15 = *(_QWORD *)(a1 + 1032);
    --CurrentThread->SpecialApcDisable;
    v16 = ExAcquireAutoExpandPushLockShared(v15 + 16, 0LL);
    VmPartition = (_QWORD *)MiGetVmPartition(a1 + 1280);
    v18 = MiAddPagesToEnclave(a2, VmPartition, PteAddress, v11, a6);
    ExReleaseAutoExpandPushLockShared(v16, 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return v18;
  }
  else
  {
    while ( 1 )
    {
      PteShadow = *v12;
      if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      if ( PteShadow )
        return 3221225496LL;
      if ( (unsigned __int64)++v12 > v11 )
        goto LABEL_12;
    }
  }
}
