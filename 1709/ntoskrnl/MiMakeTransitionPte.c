/*
 * XREFs of MiMakeTransitionPte @ 0x14017C848
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140025E00 (MiInitializeTransitionPfn.c)
 *     MiInitializeReadInProgressPfn @ 0x140026A90 (MiInitializeReadInProgressPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x140028510 (MiBuildMdlForMappedFileFault.c)
 *     MiCompletePrivateZeroFault @ 0x140046F90 (MiCompletePrivateZeroFault.c)
 *     MiPfnShareCountIsZero @ 0x14004F450 (MiPfnShareCountIsZero.c)
 *     MiInsertProtectedStandbyPage @ 0x140051F60 (MiInsertProtectedStandbyPage.c)
 *     MiWsleFlush @ 0x140052AC0 (MiWsleFlush.c)
 *     MiProtectPool @ 0x140065070 (MiProtectPool.c)
 *     MiBuildForkPageTable @ 0x1400CEA74 (MiBuildForkPageTable.c)
 *     MiTrimSystemImagePages @ 0x1400DDEAC (MiTrimSystemImagePages.c)
 *     MiOutPageSingleKernelStack @ 0x1400EAD50 (MiOutPageSingleKernelStack.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140102A40 (MiDecrementAndInsertStandbyPages.c)
 *     MmOutSwapProcess @ 0x140111FF0 (MmOutSwapProcess.c)
 *     MiDeleteParentDecayNode @ 0x140115354 (MiDeleteParentDecayNode.c)
 *     MiCreateDecayPfn @ 0x140115CFC (MiCreateDecayPfn.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x140217160 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x14021C340 (MiSwitchToTransition.c)
 *     MiInitializeFileOnlyPfn @ 0x140223308 (MiInitializeFileOnlyPfn.c)
 *     MiDuplicateCloneLeaf @ 0x14022FED0 (MiDuplicateCloneLeaf.c)
 *     MmFreeLoaderBlock @ 0x1408383C8 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14017C938 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  return MiSwizzleInvalidPte(32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40));
}
