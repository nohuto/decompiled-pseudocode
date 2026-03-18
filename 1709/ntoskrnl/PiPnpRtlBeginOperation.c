/*
 * XREFs of PiPnpRtlBeginOperation @ 0x140526B30
 * Callers:
 *     PiProcessClearDeviceProblem @ 0x14045069C (PiProcessClearDeviceProblem.c)
 *     IopRegisterDeviceInterface @ 0x140517BAC (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x140528A70 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryEvaluateFilter @ 0x14052969C (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14052E168 (PiDqActionDataGetRequestedProperties.c)
 *     PiProcessNewDeviceNode @ 0x14052E48C (PiProcessNewDeviceNode.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14054D954 (PiDcHandleCustomDeviceEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x14054DF70 (PnpProcessTargetDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14054E090 (PiDcUpdateDeviceContainerMembership.c)
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1405528C8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PiProcessQueryDeviceState @ 0x140552C70 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14055CF88 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x14055DF68 (PipClearDevNodeProblem.c)
 *     IopRemoveDevice @ 0x14055E2F8 (IopRemoveDevice.c)
 *     PiSwPropertySet @ 0x1405997C8 (PiSwPropertySet.c)
 *     PiProcessAddBootDevices @ 0x1405DAED8 (PiProcessAddBootDevices.c)
 *     IoReportDetectedDevice @ 0x1405DF730 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1405E3820 (IoReportRootDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405E6D68 (PiDqActionDataGetChangedProperties.c)
 *     PipMergeDependencyEdgeList @ 0x1406BEE64 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406C259C (PiPnpRtlEnsureObjectCached.c)
 *     PiDqIrpPropertySet @ 0x1406C42C0 (PiDqIrpPropertySet.c)
 *     PiCMCreateDevice @ 0x1406CF00C (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406CF9C8 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1406D0000 (PiCMDeleteObject.c)
 *     PiProcessSetDeviceProblem @ 0x1406D1CAC (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x1400DF9E0 (RtlInitializeGenericTableAvl.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlGetCurrentOperation @ 0x140524598 (PiPnpRtlGetCurrentOperation.c)
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
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
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
