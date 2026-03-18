/*
 * XREFs of PiPnpRtlEndOperation @ 0x140528D6C
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
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlIsGenericTableEmptyAvl @ 0x1400DFA40 (RtlIsGenericTableEmptyAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140528EA0 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140528F4C (PiPnpRtlObjectEventDispatch.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  HANDLE *v7; // rcx
  char *v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
    v4 = KeGetCurrentThread();
    --v4->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
    v5 = *P;
    if ( (*P)[1] != P || (v6 = P[1], *v6 != P) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v7 = (HANDLE *)P[5][4];
      Buffer = v7;
      if ( v7[2] )
      {
        ZwClose(v7[2]);
        Buffer[2] = 0LL;
        v7 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v7);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v8 = (char *)(P + 16);
    while ( *(char **)v8 != v8 )
    {
      v9 = *(__int64 **)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *v9, *(__int64 **)(*v9 + 8) != v9) )
        __fastfail(3u);
      *(_QWORD *)v8 = v10;
      *(_QWORD *)(v10 + 8) = v8;
      Buffer = (HANDLE *)(v9 - 7);
      PiPnpRtlObjectEventRelease(v9 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
