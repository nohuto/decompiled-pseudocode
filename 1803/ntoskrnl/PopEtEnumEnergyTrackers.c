/*
 * XREFs of PopEtEnumEnergyTrackers @ 0x14052F9D8
 * Callers:
 *     PoEnergyContextCleanup @ 0x140511194 (PoEnergyContextCleanup.c)
 *     PopEtEnergyContextProcessStateUpdate @ 0x14052F950 (PopEtEnergyContextProcessStateUpdate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopEtGetNextEnergyTracker @ 0x14052FA34 (PopEtGetNextEnergyTracker.c)
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x14052FAD8 (PopEtEnergyTrackerEnumSnapshotCallback.c)
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
      goto LABEL_4;
  }
  v6 = 0;
LABEL_4:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x74456F50u);
  return (unsigned int)v6;
}
