/*
 * XREFs of PnpReleaseDependencyRelationsLock @ 0x14063B958
 * Callers:
 *     IoResolveDependency @ 0x14017D9C0 (IoResolveDependency.c)
 *     PiDeviceDependencyInit @ 0x1408BBDBC (PiDeviceDependencyInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 */

void PnpReleaseDependencyRelationsLock()
{
  ExReleaseResourceLite(&PiDependencyRelationsLock);
  PpDevNodeUnlockTree(0);
}
