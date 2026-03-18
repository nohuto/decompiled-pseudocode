/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14069FBA0
 * Callers:
 *     <none>
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(void *a1)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(a1, 0);
}
