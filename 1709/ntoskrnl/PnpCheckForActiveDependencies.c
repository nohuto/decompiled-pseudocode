/*
 * XREFs of PnpCheckForActiveDependencies @ 0x140527D10
 * Callers:
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PipIsDevNodeDNStarted @ 0x1400DF750 (PipIsDevNodeDNStarted.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x140527D68 (PipCheckForUnsatisfiedDependencies.c)
 */

char __fastcall PnpCheckForActiveDependencies(__int64 a1, unsigned int a2)
{
  char v4; // bl

  if ( PipIsDevNodeDNStarted(a1) )
    return 0;
  PnpAcquireDependencyRelationsLock(0);
  v4 = PipCheckForUnsatisfiedDependencies(a1, a2);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
  return v4;
}
