/*
 * XREFs of PipForDeviceNodeSubtree @ 0x1405CA500
 * Callers:
 *     PpProcessClearProblem @ 0x140163F9C (PpProcessClearProblem.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1405CA6C0 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpGetSystemPdoList @ 0x1405E3298 (PnpGetSystemPdoList.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x140726A40 (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140731B00 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x1407399A8 (PpResetProblemDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x1405CA540 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0);
  return (unsigned int)a1;
}
