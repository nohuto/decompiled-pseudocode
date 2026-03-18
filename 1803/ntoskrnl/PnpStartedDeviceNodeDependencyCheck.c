/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1405CC040
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1405C9A7C (PnpDeleteLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PipProcessRestartPhase2 @ 0x14073FEE4 (PipProcessRestartPhase2.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14050D26C (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1405CC078 (PipAttemptDependentsStart.c)
 */

void __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
