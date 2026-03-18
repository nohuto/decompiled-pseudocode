/*
 * XREFs of PiPnpRtlEndOperation @ 0x140488F04
 * Callers:
 *     PiDcHandleCustomDeviceEvent @ 0x140457A84 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqActionDataGetChangedProperties @ 0x14045AAE8 (PiDqActionDataGetChangedProperties.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     PiSwPropertySet @ 0x140460E50 (PiSwPropertySet.c)
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     PiProcessQueryDeviceState @ 0x1404A79A4 (PiProcessQueryDeviceState.c)
 *     PiDqQueryEvaluateFilter @ 0x1404B9CB0 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404BD990 (PiDqActionDataGetRequestedProperties.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1404D9E10 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpProcessTargetDeviceEvent @ 0x1404DA3D8 (PnpProcessTargetDeviceEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1404DA754 (PiDcUpdateDeviceContainerMembership.c)
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DEF00 (PiPnpRtlObjectEventWorker.c)
 *     PipEnumerateCompleted @ 0x1404DFDF8 (PipEnumerateCompleted.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14056FB58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140570490 (PipSetDevNodeProblem.c)
 *     IopRemoveDevice @ 0x140570978 (IopRemoveDevice.c)
 *     PiDqIrpPropertySet @ 0x1405959E0 (PiDqIrpPropertySet.c)
 *     PiProcessAddBootDevices @ 0x14059CE7C (PiProcessAddBootDevices.c)
 *     IoReportRootDevice @ 0x1405AFC40 (IoReportRootDevice.c)
 *     IoReportDetectedDevice @ 0x1405AFEA0 (IoReportDetectedDevice.c)
 *     PipMergeDependencyEdgeList @ 0x1406931B0 (PipMergeDependencyEdgeList.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1406969CC (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCreateDevice @ 0x1406A3D38 (PiCMCreateDevice.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 *     PiCMDeleteObject @ 0x1406A4D28 (PiCMDeleteObject.c)
 *     PiProcessClearDeviceProblem @ 0x1406A6AB4 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x1406A6D98 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14004CBB0 (RtlIsGenericTableEmptyAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140489038 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1404890C4 (PiPnpRtlObjectEventDispatch.c)
 */

void __fastcall PiPnpRtlEndOperation(char *P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  _QWORD *v5; // rdx
  PVOID *v6; // rax
  HANDLE *v7; // rcx
  __int64 **v8; // rdi
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
    v5 = *(_QWORD **)P;
    v6 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || *v6 != P )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    ExReleaseResourceLite(&PiPnpRtlActiveOperationsLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 24)) )
    {
      v7 = *(HANDLE **)(*((_QWORD *)P + 5) + 32LL);
      Buffer = v7;
      if ( v7[2] )
      {
        ZwClose(v7[2]);
        Buffer[2] = 0LL;
        v7 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v7);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 24), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v8 = (__int64 **)(P + 128);
    while ( *v8 != (__int64 *)v8 )
    {
      v9 = *v8;
      v10 = **v8;
      if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
        __fastfail(3u);
      *v8 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v8;
      Buffer = (HANDLE *)(v9 - 7);
      PiPnpRtlObjectEventRelease(v9 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
