/*
 * XREFs of PnpCheckForActiveDependencies @ 0x1405CE34C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x1405D4790 (PiProcessQueryDeviceState.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x14006EB18 (PipIsDevNodeDNStarted.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1405CE3A4 (PipCheckForUnsatisfiedDependencies.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned int a2)
{
  char v5; // bl

  if ( PipIsDevNodeDNStarted(a1) )
    return 0;
  PnpAcquireDependencyRelationsLock(0);
  v5 = PipCheckForUnsatisfiedDependencies(a1, a2);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v5;
}
