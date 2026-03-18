/*
 * XREFs of CmpReferenceHive @ 0x14049D1FC
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x14049BB4C (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetLastHive @ 0x14049BD04 (CmpGetLastHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14049C1C8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x14049CD7C (CmpGetNextHive.c)
 *     CmpLockHashEntryExclusive @ 0x14049D108 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14049D18C (CmpLockHashEntrySharedByKcb.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14057D4EC (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x1405C0380 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1405C041C (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryShared @ 0x1405E2210 (CmpLockHashEntryShared.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1406FA660 (CmpLockHashEntryByIndexExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4288));
  v1 = *(_DWORD *)(a1 + 4288);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4288), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
