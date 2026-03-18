/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x140221484
 * Callers:
 *     MiDecrementSubsection @ 0x1400151F8 (MiDecrementSubsection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiReleaseFaultCharges @ 0x1400322C4 (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140034330 (MiUpdateLastSubsectionSize.c)
 *     MiAppendSubsectionChain @ 0x14005E4A0 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiAddViewsForSection @ 0x140099930 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14009A070 (MiReferenceActiveSubsection.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400A8BD8 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 *     MiDeleteSubsectionPages @ 0x1400C4590 (MiDeleteSubsectionPages.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiRemoveMappedPtes @ 0x1400FD140 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiCleanSection @ 0x140149074 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14020A348 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x14020A790 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14020AC6C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14020AD08 (MiSetDeleteOnClose.c)
 *     MiRemoveSystemCacheReferences @ 0x1402125C0 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x1402161AC (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x140492FCC (MiExtendSection.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    MiReturnResidentAvailable(a3);
  else
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5824), a3);
  return MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
