/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1400309A0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiUnlockCodePage @ 0x1400A19C0 (MiUnlockCodePage.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MiResolveTransitionFault @ 0x140119A70 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiFreeLargePageMemory @ 0x1401363B0 (MiFreeLargePageMemory.c)
 *     MiConvertStandbyToProto @ 0x1401433FC (MiConvertStandbyToProto.c)
 *     MiMirrorPerformBrownWrites @ 0x14015649C (MiMirrorPerformBrownWrites.c)
 *     MiPurgeBadFileOnlyPages @ 0x14025E2E0 (MiPurgeBadFileOnlyPages.c)
 *     MiNoPagesLastChance @ 0x140265B58 (MiNoPagesLastChance.c)
 *     MiDeleteClusterPage @ 0x1402694A8 (MiDeleteClusterPage.c)
 *     MiSwapHardFaultPage @ 0x14026D914 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiReleasePageFileSpace @ 0x140051890 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall MiPfnReferenceCountIsZero(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  char v5; // al

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v5 = *(_BYTE *)(a1 + 35);
    if ( (v5 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v5 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_1403CBD88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL);
    MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = -9LL;
    if ( (v3 & 0x400) != 0 )
      v4 = -2049LL;
    *(_QWORD *)(a1 + 16) = v3 & v4;
    if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
      MiInsertPageInList(a1, 8u);
    else
      MiInsertPageInList(a1, 4u);
  }
}
