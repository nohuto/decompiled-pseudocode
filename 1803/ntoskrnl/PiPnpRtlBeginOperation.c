/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1405097B4
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x14050AAEC (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14050D84C (PiDqActionDataGetRequestedProperties.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14051FDD4 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqIrpPropertySet @ 0x1405C24A0 (PiDqIrpPropertySet.c)
 *     PiSwPropertySet @ 0x1405C6324 (PiSwPropertySet.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x1405C8B00 (IopRemoveDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1405C9074 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PnpProcessTargetDeviceEvent @ 0x1405CB290 (PnpProcessTargetDeviceEvent.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405CC0D8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1405D1930 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1405D2B70 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x1405D4790 (PiProcessQueryDeviceState.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1405D5280 (PiDcUpdateDeviceContainerMembership.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E8B2C (PiDqActionDataGetChangedProperties.c)
 *     IopRegisterDeviceInterface @ 0x1405F5474 (IopRegisterDeviceInterface.c)
 *     PpDevCfgProcessDevices @ 0x1406246C4 (PpDevCfgProcessDevices.c)
 *     PiProcessAddBootDevices @ 0x140646334 (PiProcessAddBootDevices.c)
 *     IoReportDetectedDevice @ 0x1406482A0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14064B860 (IoReportRootDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140651D94 (PiProcessClearDeviceProblem.c)
 *     PipMergeDependencyEdgeList @ 0x140723C40 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407285CC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x140735F78 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x140736FBC (PiCMDeleteObject.c)
 *     PiProcessSetDeviceProblem @ 0x1407397B8 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14006E4D0 (RtlInitializeGenericTableAvl.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlGetCurrentOperation @ 0x14050834C (PiPnpRtlGetCurrentOperation.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // ebx
  __int64 *v5; // rax
  char *PoolWithTag; // rax
  char *v7; // rdi
  struct _KTHREAD *v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v12 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v12);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = v12;
  if ( v12 )
  {
    ++*((_DWORD *)v12 + 36);
  }
  else
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x98uLL, 0x41706E50u);
    v12 = (__int64 *)PoolWithTag;
    v7 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    *((_DWORD *)PoolWithTag + 36) = 1;
    *((_QWORD *)PoolWithTag + 2) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(PoolWithTag + 24),
      (PRTL_AVL_COMPARE_ROUTINE)PiPnpRtlObjectEventCompareObjects,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiPnpRtlOperationAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    *((_QWORD *)v7 + 17) = v7 + 128;
    *((_QWORD *)v7 + 16) = v7 + 128;
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v9 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    v10 = v12;
    *v12 = PiPnpRtlActiveOperations;
    v10[1] = (__int64)&PiPnpRtlActiveOperations;
    *(_QWORD *)(v9 + 8) = v10;
    PiPnpRtlActiveOperations = (__int64)v10;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = v12;
  }
  *a1 = v5;
  return v4;
}
