/*
 * XREFs of MiReleaseFreshPage @ 0x1400C538C
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocateKernelStackPages @ 0x140029AB0 (MiAllocateKernelStackPages.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiGetPage @ 0x1400489F0 (MiGetPage.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1400BCA50 (MiLockCode.c)
 *     MiFreeLargeZeroPages @ 0x1400C5300 (MiFreeLargeZeroPages.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x1400CB06C (MiTradeTransitionPage.c)
 *     MiPrivateFixup @ 0x1400CD7E0 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x1400CE138 (MiSwapStackPage.c)
 *     MiDeleteUltraMapContext @ 0x1400CF098 (MiDeleteUltraMapContext.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400CF880 (MiCreateUltraThreadContextHelper.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiAllocateMdlPagesByLists @ 0x140128900 (MiAllocateMdlPagesByLists.c)
 *     MiFreePageChain @ 0x14012903C (MiFreePageChain.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     MiClaimPhysicalRun @ 0x1402168A0 (MiClaimPhysicalRun.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14021FEC0 (MiReplaceLockedPage.c)
 *     MmAllocateSpecialPool @ 0x140220868 (MmAllocateSpecialPool.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 *     MiResolvePageFileFault @ 0x140234CE8 (MiResolvePageFileFault.c)
 *     MiFreeReadListPages @ 0x1404D1E58 (MiFreeReadListPages.c)
 *     MiInitializeCacheFlushing @ 0x140829A64 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x1400CABF0 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiReturnFreeZeroPage(a1, 0LL);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
