/*
 * XREFs of CmpReferenceHive @ 0x1400F0030
 * Callers:
 *     CmpLockHashEntrySharedByKcb @ 0x14043D1E4 (CmpLockHashEntrySharedByKcb.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140456CB4 (CmpTryToLockHashEntryExclusive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14048D310 (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockHashEntryExclusive @ 0x140491704 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntryExclusiveByKcb @ 0x1404D001C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1404D0244 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpBlockHiveWrites @ 0x1404D5900 (CmpBlockHiveWrites.c)
 *     CmpGetNextHive @ 0x1404D64B4 (CmpGetNextHive.c)
 *     CmpBlockTwoHiveWrites @ 0x1404D83B0 (CmpBlockTwoHiveWrites.c)
 *     CmpGetLastHive @ 0x1404D861C (CmpGetLastHive.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpLockHashEntryShared @ 0x1405726E4 (CmpLockHashEntryShared.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x14066A3D4 (CmpLockHashEntryByIndexExclusive.c)
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
