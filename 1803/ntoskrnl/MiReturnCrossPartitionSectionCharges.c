/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1402682E4
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140016E90 (MiDeleteSubsectionPages.c)
 *     MmUnmapViewInSystemCache @ 0x140018AE0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140048408 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCreatePrototypePtes @ 0x14004AB9C (MiCreatePrototypePtes.c)
 *     MiDeleteControlArea @ 0x14004B068 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x14004D030 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiDecrementSubsection @ 0x1400833A4 (MiDecrementSubsection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x1400C7D70 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x1400CD7A0 (MiUpdateLastSubsectionSize.c)
 *     MiFlushRelease @ 0x1400E4B40 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiAddViewsForSection @ 0x1400E5550 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1400E5D50 (MiReferenceActiveSubsection.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiRemoveMappedPtes @ 0x14012ADA0 (MiRemoveMappedPtes.c)
 *     MiUpControlAreaRefs @ 0x140142EB4 (MiUpControlAreaRefs.c)
 *     MiCleanSection @ 0x14015E0C0 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14024EC98 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14024F768 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14024F838 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14024FFD8 (MiSetDeleteOnClose.c)
 *     MiRemoveSystemCacheReferences @ 0x1402569F0 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x14025B23C (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x1404BC75C (MiSegmentDelete.c)
 *     MiExtendSection @ 0x1404BE298 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1404D7760 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x14026FC54 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( a2 )
    MiReturnCommit(a1, a3);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a3);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7104), a3);
  return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
}
