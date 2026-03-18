/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1404A7520
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x14057015C (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1406AAFA8 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1404A7558 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
