/*
 * XREFs of PpResetProblemDevices @ 0x1406D1E9C
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x1406C14A0 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x14055F440 (PipForDeviceNodeSubtree.c)
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
