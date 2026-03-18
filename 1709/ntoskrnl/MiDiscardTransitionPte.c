/*
 * XREFs of MiDiscardTransitionPte @ 0x14022AE0C
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x14001E98C (MiUnlinkStandbyPfn.c)
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiActOnPte @ 0x1400EC4F0 (MiActOnPte.c)
 *     MiResolveProtoCombine @ 0x1400EDBF4 (MiResolveProtoCombine.c)
 *     MiMakeImagePageOk @ 0x14015AE38 (MiMakeImagePageOk.c)
 *     MiMakeOutswappedPageResident @ 0x1402125D4 (MiMakeOutswappedPageResident.c)
 *     MiReleaseCommitForResetPageCallback @ 0x140212FA0 (MiReleaseCommitForResetPageCallback.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x1400352D0 (MiRestoreTransitionPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x1400C7514 (MiSetPfnBlink.c)
 */

void __fastcall MiDiscardTransitionPte(__int64 a1)
{
  MiRestoreTransitionPte(a1, 0);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
}
