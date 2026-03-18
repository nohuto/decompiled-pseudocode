/*
 * XREFs of PipForDeviceNodeSubtree @ 0x14055F440
 * Callers:
 *     PpProcessClearProblem @ 0x1400FFDC0 (PpProcessClearProblem.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140554D44 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpGetSystemPdoList @ 0x14055EBD8 (PnpGetSystemPdoList.c)
 *     PnpBootPhaseComplete @ 0x1405C4A2C (PnpBootPhaseComplete.c)
 *     PnpDiagRundownRegisterCallback @ 0x1406C0D60 (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1406CA4C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x1406D1E9C (PpResetProblemDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x14055F480 (PipForAllChildDeviceNodes.c)
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
