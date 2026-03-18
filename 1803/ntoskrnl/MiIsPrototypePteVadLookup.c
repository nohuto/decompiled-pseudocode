/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x1401A6594
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x140011580 (MiDeleteVa.c)
 *     MiResolveProtoPteFault @ 0x140015220 (MiResolveProtoPteFault.c)
 *     MiCompleteProtoPteFault @ 0x140019F00 (MiCompleteProtoPteFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiComputePageCommitment @ 0x14003D030 (MiComputePageCommitment.c)
 *     MiIsCfgBitMapPageShared @ 0x14003DC60 (MiIsCfgBitMapPageShared.c)
 *     MiInitializeReadInProgressPfn @ 0x140047D40 (MiInitializeReadInProgressPfn.c)
 *     MiWalkVaRange @ 0x14004FC40 (MiWalkVaRange.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140059BC4 (MiFindActualFaultingPte.c)
 *     MiCreateSharedZeroPages @ 0x1400A2810 (MiCreateSharedZeroPages.c)
 *     MiCountSharedPages @ 0x1400A6330 (MiCountSharedPages.c)
 *     MiGetWorkingSetInfoList @ 0x1400B3CD0 (MiGetWorkingSetInfoList.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiIsPteEvaluated @ 0x14013C64C (MiIsPteEvaluated.c)
 *     MiSharedVaToPartition @ 0x1401528B0 (MiSharedVaToPartition.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 *     MiCheckCommitReleaseFromVad @ 0x14025018C (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x1401A66D4 (MiReverseSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (a1 & 0x400) != 0 && (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32 == 0xFFFFFFFF;
}
