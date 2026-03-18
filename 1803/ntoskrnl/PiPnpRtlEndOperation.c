/*
 * XREFs of PiPnpRtlEndOperation @ 0x140509BA8
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
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14006E530 (RtlIsGenericTableEmptyAvl.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140509B1C (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlObjectEventDispatch @ 0x140509CE4 (PiPnpRtlObjectEventDispatch.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rax
  PVOID *v5; // rdx
  PVOID *v6; // rax
  char **v7; // rdi
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // rax
  char *Buffer; // [rsp+30h] [rbp+8h] BYREF

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
      v9 = (char *)P[5][4];
      Buffer = v9;
      if ( *((_QWORD *)v9 + 2) )
      {
        ZwClose(*((HANDLE *)v9 + 2));
        *((_QWORD *)Buffer + 2) = 0LL;
        v9 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v9);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = (char **)(P + 16);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == (char *)v7 )
        break;
      if ( *((char ***)v8 + 1) != v7 || (v10 = *(char **)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
        __fastfail(3u);
      *v7 = v10;
      *((_QWORD *)v10 + 1) = v7;
      Buffer = v8 - 56;
      PiPnpRtlObjectEventRelease(v8 - 56);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
