/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x14004D4F0
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030A90 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140043FB0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x140049330 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiInsertProtectedStandbyPage @ 0x140051F60 (MiInsertProtectedStandbyPage.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140076C10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14007B8D0 (MmCheckCachedPageStates.c)
 *     MiWriteCompletePfn @ 0x1400A5320 (MiWriteCompletePfn.c)
 *     MiUnlockCodePage @ 0x1400BD400 (MiUnlockCodePage.c)
 *     MiFreeLargePageMemory @ 0x1400F43C0 (MiFreeLargePageMemory.c)
 *     MiDeleteClusterPage @ 0x140108CB0 (MiDeleteClusterPage.c)
 *     MiPurgeBadFileOnlyPages @ 0x140223684 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x14022B0B8 (MiNoPagesLastChance.c)
 *     MiConvertStandbyToProto @ 0x140231350 (MiConvertStandbyToProto.c)
 *     MiSwapHardFaultPage @ 0x140235F34 (MiSwapHardFaultPage.c)
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiReleasePageFileSpace @ 0x1400CB9A0 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rdx
  char v5; // al

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v5 = *(_BYTE *)(a1 + 35);
    if ( (v5 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v5 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL);
    return MiInsertPageInFreeOrZeroedList(a2, 2LL);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      v3 = 8LL;
    else
      v3 = 4LL;
    return MiInsertPageInList(a1, v3);
  }
}
