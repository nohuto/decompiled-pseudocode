/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x1406D26C4
 * Callers:
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x1406D0F54 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406D171C (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtGetNextEnergyTracker @ 0x1406D2724 (PopEtGetNextEnergyTracker.c)
 */

__int64 __fastcall PopEtEnumEnergyTrackers(__int64 a1, __int64 a2)
{
  void *i; // rcx
  int v4; // edi
  __int64 NextEnergyTracker; // rax
  void *v6; // rbx

  for ( i = 0LL; ; i = v6 )
  {
    NextEnergyTracker = PopEtGetNextEnergyTracker(i);
    v6 = (void *)NextEnergyTracker;
    if ( !NextEnergyTracker )
      break;
    v4 = PopEtEnergyTrackerEnumSnapshotCallback(NextEnergyTracker, a2);
    if ( v4 < 0 )
      goto LABEL_6;
  }
  v4 = 0;
LABEL_6:
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v4;
}
