/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x1404578B0
 * Callers:
 *     PopEtEnergyContextProcessStateUpdate @ 0x1404574E8 (PopEtEnergyContextProcessStateUpdate.c)
 *     PoEnergyContextCleanup @ 0x1404FC9BC (PoEnergyContextCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     PopEtGetNextEnergyTracker @ 0x14045790C (PopEtGetNextEnergyTracker.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1404579A8 (PopEtEnergyTrackerEnumSnapshotCallback.c)
 */

__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *i; // rcx
  __int64 NextEnergyTracker; // rax
  void *v5; // rbx
  int v6; // edi

  for ( i = 0LL; ; i = v5 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(i);
    v5 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      break;
    v6 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    if ( v6 < 0 )
      goto LABEL_6;
  }
  v6 = 0;
LABEL_6:
  if ( v5 )
    ObfDereferenceObject(v5);
  return (unsigned int)v6;
}
