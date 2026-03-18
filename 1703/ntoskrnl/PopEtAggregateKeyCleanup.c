/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1406D0BBC
 * Callers:
 *     PopEtAggregateGet @ 0x1406D07DC (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanup @ 0x1406D1100 (PopEtEnergyTrackerCleanup.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406D12B8 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D2CD8 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1406D0D30 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1406EF188 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
