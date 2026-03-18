/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140535008
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x1405326C0 (PopEtProcessSnapshotCreate.c)
 *     PopEtAggregateGet @ 0x140537744 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotUpdate @ 0x140537D50 (PopEtProcessSnapshotUpdate.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x140567CA4 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtEnergyTrackerCleanup @ 0x14076C658 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1405350DC (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140535108 (RtlInternEntryDereference.c)
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
