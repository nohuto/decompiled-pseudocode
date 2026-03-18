/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x1405BF130
 * Callers:
 *     IoResolveDependency @ 0x14015F160 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x140819A3C (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
