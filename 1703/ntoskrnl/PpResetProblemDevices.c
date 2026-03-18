/*
 * XREFs of PpResetProblemDevices @ 0x1406A7080
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x1406956E0 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

void PpResetProblemDevices()
{
  __int64 v0; // rbx
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = IopRootDeviceNode;
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = 49;
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(v0, (__int64)PiResetProblemDevicesWorker, (__int64)v1);
  PpDevNodeUnlockTree(1);
}
