/*
 * XREFs of PipForDeviceNodeSubtree @ 0x1404601C4
 * Callers:
 *     PpProcessClearProblem @ 0x14016632C (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x14045F064 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140460174 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpBootPhaseComplete @ 0x1405D518C (PnpBootPhaseComplete.c)
 *     PnpDiagRundownRegisterCallback @ 0x140694F90 (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14069FBA0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x1406A7080 (PpResetProblemDevices.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x140460204 (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x14048A228 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14048AC58 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0LL);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0LL);
  return (unsigned int)a1;
}
