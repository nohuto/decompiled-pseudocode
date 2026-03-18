/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x14045876C
 * Callers:
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140446800 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x140457570 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotUpdate @ 0x140457AC0 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1404582E4 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanup @ 0x1407086A8 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140458834 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140458864 (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  v3 = a1[1];
  if ( v3 )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56, v3);
    a1[1] = 0LL;
  }
  return result;
}
