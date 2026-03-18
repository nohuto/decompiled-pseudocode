/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14022E13C
 * Callers:
 *     MiDeleteControlArea @ 0x14001F4A4 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiDeleteSubsectionPages @ 0x14004C770 (MiDeleteSubsectionPages.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiRemoveMappedPtes @ 0x14005C210 (MiRemoveMappedPtes.c)
 *     MiAddViewsForSection @ 0x1400A0BF0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1400A1320 (MiReferenceActiveSubsection.c)
 *     MiFlushRelease @ 0x1400A2708 (MiFlushRelease.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A4E10 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCleanSection @ 0x14010A810 (MiCleanSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x140110780 (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x1401109B8 (MiUpdateLastSubsectionSize.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiUpControlAreaRefs @ 0x140120C6C (MiUpControlAreaRefs.c)
 *     MiReleaseFaultCharges @ 0x1401286F4 (MiReleaseFaultCharges.c)
 *     MiDecrementSubsection @ 0x14012AE30 (MiDecrementSubsection.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140211B84 (MiSetDeleteOnClose.c)
 *     MiRemoveSystemCacheReferences @ 0x14021A05C (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x14021F954 (MiUpdateActiveSubsection.c)
 *     MiChargeSegmentCommit @ 0x140460540 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiExtendSection @ 0x14056BC80 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiReturnCrossPartitionCharges @ 0x14023804C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  if ( a2 )
    MiReturnCommit(a1, a3);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a3);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6016), a3);
  return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
}
