/*
 * XREFs of PpDevNodeLockTree @ 0x14048AC58
 * Callers:
 *     PnpLockDeviceActionQueue @ 0x140031DD4 (PnpLockDeviceActionQueue.c)
 *     PnpDeviceActionWorker @ 0x14003D340 (PnpDeviceActionWorker.c)
 *     IoTranslateBusAddress @ 0x1401F8330 (IoTranslateBusAddress.c)
 *     PiGetDeviceDepth @ 0x14044CAE8 (PiGetDeviceDepth.c)
 *     PipForDeviceNodeSubtree @ 0x1404601C4 (PipForDeviceNodeSubtree.c)
 *     PiControlGetSetDeviceStatus @ 0x14048A0B0 (PiControlGetSetDeviceStatus.c)
 *     PnpAcquireDependencyRelationsLock @ 0x14048AC20 (PnpAcquireDependencyRelationsLock.c)
 *     PipProcessDevNodeTree @ 0x14048B768 (PipProcessDevNodeTree.c)
 *     IoGetLegacyVetoList @ 0x1404C5C84 (IoGetLegacyVetoList.c)
 *     PiGetRelatedDevice @ 0x14055AAC8 (PiGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x14055AC30 (PiControlGetPropertyData.c)
 *     PpHotSwapGetDevnodeRemovalPolicy @ 0x14055B5E4 (PpHotSwapGetDevnodeRemovalPolicy.c)
 *     PnpDelayedRemoveWorker @ 0x14056D2C0 (PnpDelayedRemoveWorker.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PiQueryPowerRelations @ 0x1405C27A4 (PiQueryPowerRelations.c)
 *     IopQueryInterfaceRecurseUp @ 0x1405C7810 (IopQueryInterfaceRecurseUp.c)
 *     PiPagePathSetState @ 0x1405D3A60 (PiPagePathSetState.c)
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
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

char __fastcall PpDevNodeLockTree(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG IsResourceAcquiredSharedLite; // edi
  ULONG i; // esi

  CurrentThread = KeGetCurrentThread();
  v2 = 1;
  --CurrentThread->KernelApcDisable;
  if ( !a1 )
    goto LABEL_2;
  v4 = a1 - 1;
  if ( !v4 )
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
LABEL_2:
    ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
    return v2;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( !ExAcquireResourceExclusiveLite(&PiEngineLock, 0) )
    {
      v2 = 0;
      KeLeaveCriticalRegion();
      return v2;
    }
    goto LABEL_2;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(&IopDeviceTreeLock);
      for ( i = IsResourceAcquiredSharedLite; i; --i )
        ExReleaseResourceLite(&IopDeviceTreeLock);
      for ( ; IsResourceAcquiredSharedLite; --IsResourceAcquiredSharedLite )
        ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
    }
  }
  else
  {
    ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
    ExAcquireResourceExclusiveLite(&IopDeviceTreeLock, 1u);
  }
  return v2;
}
