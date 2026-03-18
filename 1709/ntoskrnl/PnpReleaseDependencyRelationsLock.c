/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x1405D2344
 * Callers:
 *     IoResolveDependency @ 0x14014E140 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x140849EFC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
