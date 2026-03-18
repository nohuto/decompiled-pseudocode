/*
 * XREFs of CmpReferenceHive @ 0x140084160
 * Callers:
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140472DD0 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x140478770 (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x140478D78 (CmpLockHashEntryExclusive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14047BEE8 (CmpDoQueueLateUnloadWorker.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpGetNextHive @ 0x1404E1EC8 (CmpGetNextHive.c)
 *     CmpGetLastHive @ 0x1404E3C44 (CmpGetLastHive.c)
 *     CmpLockHashEntryShared @ 0x140562B08 (CmpLockHashEntryShared.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405704E4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1405958F4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x14068F0F0 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x14068F1A8 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x140694A9C (CmpLockHashEntryByIndexExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 5496));
  v1 = *(_DWORD *)(a1 + 5496);
  if ( !v1 )
    return 0;
  while ( 1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 5496), v1 + 1, v1);
    if ( v2 == v1 )
      break;
    if ( !v1 )
      return 0;
  }
  return 1;
}
