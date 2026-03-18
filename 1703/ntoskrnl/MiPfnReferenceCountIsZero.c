/*
 * XREFs of MiPfnReferenceCountIsZero @ 0x1400C9020
 * Callers:
 *     MiDeleteClusterPage @ 0x14000D020 (MiDeleteClusterPage.c)
 *     MiCopyDataPageToImagePage @ 0x140095B10 (MiCopyDataPageToImagePage.c)
 *     MiMakePageAvoidRead @ 0x1400A08D0 (MiMakePageAvoidRead.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MiUnlockProtoPoolPage @ 0x1400A3920 (MiUnlockProtoPoolPage.c)
 *     MiInsertProtectedStandbyPage @ 0x1400AA270 (MiInsertProtectedStandbyPage.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1400C2260 (MiResolveTransitionFault.c)
 *     MiMigratePfn @ 0x1400C3D80 (MiMigratePfn.c)
 *     MiWalkEntireImage @ 0x1400C9D50 (MiWalkEntireImage.c)
 *     MiWriteCompletePfn @ 0x1400CB520 (MiWriteCompletePfn.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiFreeLargePageMemory @ 0x140126770 (MiFreeLargePageMemory.c)
 *     MiConvertStandbyToProto @ 0x140130148 (MiConvertStandbyToProto.c)
 *     MiNoPagesLastChance @ 0x14021F600 (MiNoPagesLastChance.c)
 *     MiSwapHardFaultPage @ 0x140225E74 (MiSwapHardFaultPage.c)
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 * Callees:
 *     MiReleasePageFileSpace @ 0x14010AE90 (MiReleasePageFileSpace.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall MiPfnReferenceCountIsZero(__int64 a1, ULONG_PTR a2)
{
  char v3; // al

  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
    KeBugCheckEx(0x4Eu, 7uLL, a2, *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
  {
    v3 = *(_BYTE *)(a1 + 35);
    if ( (v3 & 0x10) != 0 )
      *(_BYTE *)(a1 + 35) = v3 & 0xEF;
    MiReleasePageFileSpace(
      *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)),
      *(_QWORD *)(a1 + 16),
      1LL);
    MiInsertPageInFreeOrZeroedList(a2, 2);
  }
  else if ( (*(_BYTE *)(a1 + 34) & 0x10) != 0 )
  {
    MiInsertPageInList(a1, 8u);
  }
  else
  {
    MiInsertPageInList(a1, *(_DWORD *)(a1 + 24) + 4);
  }
}
