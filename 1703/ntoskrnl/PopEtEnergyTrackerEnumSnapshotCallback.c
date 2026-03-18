/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406D171C
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1406D26C4 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x1406D30EC (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 8) = a1;
  PopEtProcessSnapshotUpdate(a2);
  *(_QWORD *)(a2 + 8) = 0LL;
  return 0LL;
}
