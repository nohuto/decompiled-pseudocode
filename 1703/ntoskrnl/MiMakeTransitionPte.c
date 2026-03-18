/*
 * XREFs of MiMakeTransitionPte @ 0x14017CFB4
 * Callers:
 *     MiBuildForkPageTable @ 0x140002C30 (MiBuildForkPageTable.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14000BC90 (MiDecrementAndInsertStandbyPages.c)
 *     MiDeleteParentDecayNode @ 0x14001683C (MiDeleteParentDecayNode.c)
 *     MiCreateDecayPfn @ 0x14001B2A0 (MiCreateDecayPfn.c)
 *     MmOutSwapProcess @ 0x140040CE4 (MmOutSwapProcess.c)
 *     MiTrimSystemImagePages @ 0x14006D3FC (MiTrimSystemImagePages.c)
 *     MiOutPageSingleKernelStack @ 0x14007C8D0 (MiOutPageSingleKernelStack.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     MiCompletePrivateZeroFault @ 0x1400BC2F0 (MiCompletePrivateZeroFault.c)
 *     MiPfnShareCountIsZero @ 0x1400C6560 (MiPfnShareCountIsZero.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiInitializeTransitionPfn @ 0x140105864 (MiInitializeTransitionPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x140107600 (MiBuildMdlForMappedFileFault.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x14020FE00 (MmProtectMdlSystemAddress.c)
 *     MiSwitchToTransition @ 0x14021430C (MiSwitchToTransition.c)
 *     MiInitializeFileOnlyPfn @ 0x140219044 (MiInitializeFileOnlyPfn.c)
 *     MiDuplicateCloneLeaf @ 0x140223024 (MiDuplicateCloneLeaf.c)
 *     MmFreeLoaderBlock @ 0x140817414 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  return MiSwizzleInvalidPte(32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFLL) << 7) | 0x40));
}
