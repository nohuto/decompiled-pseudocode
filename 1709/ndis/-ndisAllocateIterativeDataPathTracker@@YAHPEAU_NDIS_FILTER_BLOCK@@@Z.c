/*
 * XREFs of ?ndisAllocateIterativeDataPathTracker@@YAHPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C001C724
 * Callers:
 *     ndisAllocOrFreeIterativeDataPathTrackerIfNeeded @ 0x1C001C6C0 (ndisAllocOrFreeIterativeDataPathTrackerIfNeeded.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 */

__int64 __fastcall ndisAllocateIterativeDataPathTracker(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *PoolWithTag; // rax

  PoolWithTag = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY *)ExAllocatePoolWithTag(
                                                             NonPagedPoolNxCacheAligned,
                                                             96LL * ndisMaxNumberOfProcessors,
                                                             0x2020444Eu);
  a1->IterativeDataPathTracker = (_NDIS_ITERATIVE_DATA_PATH_TRACKER_ENTRY (*)[4])PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 96LL * ndisMaxNumberOfProcessors);
  return 0LL;
}
