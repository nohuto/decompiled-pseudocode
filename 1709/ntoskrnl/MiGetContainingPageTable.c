/*
 * XREFs of MiGetContainingPageTable @ 0x14017C61C
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiInitializeReadInProgressPfn @ 0x140026A90 (MiInitializeReadInProgressPfn.c)
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x14004BDB0 (MiCreateSharedZeroPages.c)
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiWsleFree @ 0x140052660 (MiWsleFree.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiInitializeSystemPageTable @ 0x1400C42AC (MiInitializeSystemPageTable.c)
 *     MiMakeLargePageTable @ 0x1400C46E8 (MiMakeLargePageTable.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiConvertPrivateToProto @ 0x1400EA3B8 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiInitializeFileOnlyPfn @ 0x140223308 (MiInitializeFileOnlyPfn.c)
 *     MxZeroPageTablePfns @ 0x14082C984 (MxZeroPageTablePfns.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 *v1; // rcx
  unsigned __int64 v2; // r10
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v2 = 0xFFFFF6FB7DBED000uLL;
  PteShadow = *v1;
  v4 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v6 = PteShadow;
  if ( (unsigned __int64)&v6 >= v2 && (unsigned __int64)&v6 <= v4 )
    PteShadow = MiReadPteShadow();
  return (PteShadow >> 12) & 0xFFFFFFFFFLL;
}
