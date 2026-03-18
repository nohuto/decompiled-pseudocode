/*
 * XREFs of MiMakeTransitionPte @ 0x1401A669C
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140014310 (MiCompletePrivateZeroFault.c)
 *     MiWsleFlush @ 0x140027EB0 (MiWsleFlush.c)
 *     MiPfnShareCountIsZero @ 0x14002B7A0 (MiPfnShareCountIsZero.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14002E730 (MiDecrementAndInsertStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MmProtectPool @ 0x14004B80C (MmProtectPool.c)
 *     MiCreateDecayPfn @ 0x14004DB30 (MiCreateDecayPfn.c)
 *     MiInitializeTransitionPfn @ 0x14004EEF0 (MiInitializeTransitionPfn.c)
 *     MiOutPageSingleKernelStack @ 0x1400520A0 (MiOutPageSingleKernelStack.c)
 *     MiBuildMdlForMappedFileFault @ 0x140056680 (MiBuildMdlForMappedFileFault.c)
 *     MiDeleteParentDecayNode @ 0x1400B77E4 (MiDeleteParentDecayNode.c)
 *     MmOutSwapProcess @ 0x1400EB550 (MmOutSwapProcess.c)
 *     MiTrimSystemImagePages @ 0x14013FAEC (MiTrimSystemImagePages.c)
 *     MiBuildForkPageTable @ 0x1401422DC (MiBuildForkPageTable.c)
 *     MiMakeOutswappedPageResident @ 0x140250B10 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x140254B70 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x140258498 (MiSwitchToTransition.c)
 *     MiInitializeFileOnlyPfns @ 0x14025DF18 (MiInitializeFileOnlyPfns.c)
 *     MiDuplicateCloneLeaf @ 0x14026AB9C (MiDuplicateCloneLeaf.c)
 *     MmFreeLoaderBlock @ 0x1408B2894 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1401A673C (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  return MiSwizzleInvalidPte(32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40));
}
