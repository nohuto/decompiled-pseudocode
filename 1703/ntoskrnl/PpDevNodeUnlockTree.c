/*
 * XREFs of PpDevNodeUnlockTree @ 0x14048A228
 * Callers:
 *     PnpUnlockDeviceActionQueue @ 0x140031D3C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140031DD4 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1401F8330 (IoTranslateBusAddress.c)
 *     PnpDeleteAllDependencyRelations @ 0x14044C29C (PnpDeleteAllDependencyRelations.c)
 *     PiGetDeviceDepth @ 0x14044CAE8 (PiGetDeviceDepth.c)
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x14048BE70 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x1404A7520 (PnpStartedDeviceNodeDependencyCheck.c)
 *     IoGetLegacyVetoList @ 0x1404C5C84 (IoGetLegacyVetoList.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404D9E10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x1404D9E84 (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1404D9F20 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetRelatedDevice @ 0x14055AAC8 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x14055AC30 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055B5E4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpDelayedRemoveWorker @ 0x14056D2C0 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14056D768 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14056D958 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x14056DB8C (PnpRequestDeviceRemoval.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     IopSortRelationListForRemove @ 0x14056F378 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14056F7E0 (PnpProcessDependencyRelations.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1405BF130 (PnpReleaseDependencyRelationsLock.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1405C2B80 (PiQueryPowerDependencyRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405C7810 (IopQueryInterfaceRecurseUp.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x140692840 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x140692970 (IoReserveDependency.c)
 *     IoSetDependency @ 0x140692A00 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1406934F8 (PnpGetDeviceDependencyList.c)
 *     IopRetryDeviceRemovalForReset @ 0x140694C30 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x140694F90 (PnpDiagRundownRegisterCallback.c)
 *     PnpRestartDeviceNode @ 0x140695D4C (PnpRestartDeviceNode.c)
 *     PnpProcessCompletedEject @ 0x140696080 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1406961BC (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14069FBA0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x1406A7080 (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x1406A8350 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1406A8B98 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1406A9064 (IopWarmEjectDevice.c)
 * Callees:
 *     ExConvertExclusiveToSharedLite @ 0x140025A40 (ExConvertExclusiveToSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
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
