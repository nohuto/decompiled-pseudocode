/*
 * XREFs of MiGetContainingPageTable @ 0x14017CDC0
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiTrimSystemImagePages @ 0x14006D3FC (MiTrimSystemImagePages.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x1400D6AB0 (MiWsleFree.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiConvertPrivateToProto @ 0x140102200 (MiConvertPrivateToProto.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiAllocateKernelStackPages @ 0x1401059E0 (MiAllocateKernelStackPages.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiInitializeSystemPageTable @ 0x14010A470 (MiInitializeSystemPageTable.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x140217008 (MmAllocateSpecialPool.c)
 *     MiInitializeFileOnlyPfn @ 0x140219044 (MiInitializeFileOnlyPfn.c)
 *     MxZeroPageTablePfns @ 0x140802930 (MxZeroPageTablePfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v2) >> 12) & 0xFFFFFFFFFLL;
}
