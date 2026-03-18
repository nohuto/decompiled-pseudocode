/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x14055285C
 * Callers:
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x14055D620 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1406D6218 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140527148 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x140552894 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
