/*
 * XREFs of MiIsPrototypePteVadLookup @ 0x14017CEE4
 * Callers:
 *     MiIsCfgBitMapPageShared @ 0x1400637A0 (MiIsCfgBitMapPageShared.c)
 *     MiSharedVaToPartition @ 0x1400739A4 (MiSharedVaToPartition.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPteEvaluated @ 0x14007682C (MiIsPteEvaluated.c)
 *     MiGetWorkingSetInfoList @ 0x140077410 (MiGetWorkingSetInfoList.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiCreateSharedZeroPages @ 0x1400B79A0 (MiCreateSharedZeroPages.c)
 *     MiCompleteProtoPteFault @ 0x1400B9890 (MiCompleteProtoPteFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C0C90 (MiResolveProtoPteFault.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1400D2870 (MiGetPageProtection.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400FA3B0 (MiSetReadOnlyOnSectionView.c)
 *     MiComputePageCommitment @ 0x1401085E0 (MiComputePageCommitment.c)
 *     MiIsPteDecommittedPage @ 0x1401087FC (MiIsPteDecommittedPage.c)
 *     MiInitializeReadInProgressPfn @ 0x140109270 (MiInitializeReadInProgressPfn.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140118380 (MiFindActualFaultingPte.c)
 *     MiCheckCommitReleaseFromVad @ 0x14020ADC8 (MiCheckCommitReleaseFromVad.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiReverseSwizzleInvalidPte @ 0x14017D030 (MiReverseSwizzleInvalidPte.c)
 */

_BOOL8 __fastcall MiIsPrototypePteVadLookup(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return (a1 & 0x400) != 0 && (unsigned __int64)MiReverseSwizzleInvalidPte(a1, a2, a3, a4) >> 32 == 0xFFFFFFFF;
}
