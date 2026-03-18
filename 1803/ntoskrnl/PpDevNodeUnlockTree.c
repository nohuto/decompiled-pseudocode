/*
 * XREFs of PpDevNodeUnlockTree @ 0x14050BED8
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x1400C8910 (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x1400C89A8 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x140145DC0 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x14023AE10 (IoTranslateBusAddress.c)
 *     PiControlGetSetDeviceStatus @ 0x14050BD60 (PiControlGetSetDeviceStatus.c)
 *     IoGetLegacyVetoList @ 0x14051CFCC (IoGetLegacyVetoList.c)
 *     PiControlGetPropertyData @ 0x140525790 (PiControlGetPropertyData.c)
 *     PiGetRelatedDevice @ 0x140525AFC (PiGetRelatedDevice.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x1405263FC (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpDeleteAllDependencyRelations @ 0x140578104 (PnpDeleteAllDependencyRelations.c)
 *     PnpRequestDeviceRemoval @ 0x1405C75A4 (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x1405C80DC (IopSortRelationListForRemove.c)
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405C87FC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405C91F4 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessDependencyRelations @ 0x1405CA0BC (PnpProcessDependencyRelations.c)
 *     PipForDeviceNodeSubtree @ 0x1405CA500 (PipForDeviceNodeSubtree.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405CABD8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1405CC040 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405CC0D8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1405CC14C (PipNotifyDeviceDependencyList.c)
 *     PipProcessDevNodeTree @ 0x1405CDC7C (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x1405CE34C (PnpCheckForActiveDependencies.c)
 *     PiGetDeviceDepth @ 0x1405E5458 (PiGetDeviceDepth.c)
 *     PiQueryPowerRelations @ 0x140603784 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140603B68 (PiQueryPowerDependencyRelations.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     PnpReleaseDependencyRelationsLock @ 0x14063B958 (PnpReleaseDependencyRelationsLock.c)
 *     IopQueryInterfaceRecurseUp @ 0x140647E40 (IopQueryInterfaceRecurseUp.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PiPagePathSetState @ 0x14064FDDC (PiPagePathSetState.c)
 *     PnpRestartDeviceNode @ 0x140651E64 (PnpRestartDeviceNode.c)
 *     IoDuplicateDependency @ 0x140723570 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1407236A0 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140723730 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x140723F90 (PnpGetDeviceDependencyList.c)
 *     IopRetryDeviceRemovalForReset @ 0x140726440 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x140726A40 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x140727B00 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x140727D9C (PnpQueuePendingEject.c)
 *     PipSetDevNodeStateFlags @ 0x140727DF4 (PipSetDevNodeStateFlags.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140731B00 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x1407399A8 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x14073AF00 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14073B744 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x14073C044 (IopWarmEjectDevice.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x1400BB350 (ExConvertExclusiveToSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 */

void __fastcall PpDevNodeUnlockTree(int a1)
{
  struct _ERESOURCE *v1; // rcx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    v1 = &IopDeviceTreeLock;
LABEL_3:
    ExReleaseResourceLite(v1);
    goto LABEL_4;
  }
  v2 = a1 - 1;
  if ( !v2 || (v3 = v2 - 1) == 0 || (v4 = v3 - 1) == 0 )
  {
    ExReleaseResourceLite(&IopDeviceTreeLock);
    v1 = &PiEngineLock;
    goto LABEL_3;
  }
  if ( v4 == 1 )
    ExConvertExclusiveToSharedLite(&IopDeviceTreeLock);
LABEL_4:
  KeLeaveCriticalRegion();
}
