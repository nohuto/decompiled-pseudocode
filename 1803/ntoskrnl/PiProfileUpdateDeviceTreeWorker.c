/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x140731B00
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1405CA500 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(PVOID P)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(P, 0);
}
