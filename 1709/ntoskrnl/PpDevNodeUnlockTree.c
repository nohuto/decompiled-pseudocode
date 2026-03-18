/*
 * XREFs of PpDevNodeUnlockTree @ 0x1405270EC
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400FF730 (PnpDeviceActionWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x14012916C (PnpUnlockDeviceActionQueue.c)
 *     PnpLockDeviceActionQueue @ 0x140129204 (PnpLockDeviceActionQueue.c)
 *     IoTranslateBusAddress @ 0x1401FE440 (IoTranslateBusAddress.c)
 *     PnpRestartDeviceNode @ 0x14045077C (PnpRestartDeviceNode.c)
 *     IoGetLegacyVetoList @ 0x1404E8A2C (IoGetLegacyVetoList.c)
 *     PiControlGetSetDeviceStatus @ 0x140526EE0 (PiControlGetSetDeviceStatus.c)
 *     PipProcessDevNodeTree @ 0x140527614 (PipProcessDevNodeTree.c)
 *     PnpCheckForActiveDependencies @ 0x140527D10 (PnpCheckForActiveDependencies.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x14055285C (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405528C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PipNotifyDeviceDependencyList @ 0x14055293C (PipNotifyDeviceDependencyList.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1405529D8 (PipProcessRebuildPowerRelationsQueue.c)
 *     PiGetRelatedDevice @ 0x140556A98 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x140556C60 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055761C (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     IopSortRelationListForRemove @ 0x14055C1D0 (IopSortRelationListForRemove.c)
 *     PnpProcessDependencyRelations @ 0x14055C6B8 (PnpProcessDependencyRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14055CA4C (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiQueryPowerRelations @ 0x14055EFD0 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14055F3B0 (PiQueryPowerDependencyRelations.c)
 *     PipForDeviceNodeSubtree @ 0x14055F440 (PipForDeviceNodeSubtree.c)
 *     PnpDeleteAllDependencyRelations @ 0x1405888B0 (PnpDeleteAllDependencyRelations.c)
 *     PiGetDeviceDepth @ 0x14058B5B8 (PiGetDeviceDepth.c)
 *     IopQueryInterfaceRecurseUp @ 0x14059C284 (IopQueryInterfaceRecurseUp.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1405D2344 (PnpReleaseDependencyRelationsLock.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     PnpDelayedRemoveWorker @ 0x1405E4580 (PnpDelayedRemoveWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405E9D90 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1405EAA48 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpRequestDeviceRemoval @ 0x1405EDBB0 (PnpRequestDeviceRemoval.c)
 *     PiPagePathSetState @ 0x1405F037C (PiPagePathSetState.c)
 *     IoDuplicateDependency @ 0x1406BE4F0 (IoDuplicateDependency.c)
 *     IoReserveDependency @ 0x1406BE620 (IoReserveDependency.c)
 *     IoSetDependency @ 0x1406BE6B0 (IoSetDependency.c)
 *     PnpGetDeviceDependencyList @ 0x1406BF19C (PnpGetDeviceDependencyList.c)
 *     IopRetryDeviceRemovalForReset @ 0x1406C0A00 (IopRetryDeviceRemovalForReset.c)
 *     PnpDiagRundownRegisterCallback @ 0x1406C0D60 (PnpDiagRundownRegisterCallback.c)
 *     PnpProcessCompletedEject @ 0x1406C1CC0 (PnpProcessCompletedEject.c)
 *     PnpQueuePendingEject @ 0x1406C1DFC (PnpQueuePendingEject.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1406CA4C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PpResetProblemDevices @ 0x1406D1E9C (PpResetProblemDevices.c)
 *     PiControlQueryConflictList @ 0x1406D3010 (PiControlQueryConflictList.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x1406D3858 (PiQueryDeviceRelations.c)
 *     IopWarmEjectDevice @ 0x1406D3C00 (IopWarmEjectDevice.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExConvertExclusiveToSharedLite @ 0x14011BA60 (ExConvertExclusiveToSharedLite.c)
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
