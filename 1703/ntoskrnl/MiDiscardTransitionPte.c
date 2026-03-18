/*
 * XREFs of MiDiscardTransitionPte @ 0x14013B9CC
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x140028268 (MiUnlinkStandbyPfn.c)
 *     MiActOnPte @ 0x14007B8E8 (MiActOnPte.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiResolveProtoCombine @ 0x140105DB0 (MiResolveProtoCombine.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiMakeOutswappedPageResident @ 0x14020B6DC (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x14020C030 (MiReleaseCommitForResetPageCallback.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140075C3C (MiSetPfnBlink.c)
 *     MiRestoreTransitionPte @ 0x140104D70 (MiRestoreTransitionPte.c)
 */

PSLIST_ENTRY __fastcall MiDiscardTransitionPte(__int64 a1)
{
  MiRestoreTransitionPte(a1, 0);
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
}
