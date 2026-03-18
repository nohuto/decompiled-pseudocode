/*
 * XREFs of PnpStartDeviceNode @ 0x1405D5A08
 * Callers:
 *     PipProcessStartPhase1 @ 0x1405D5C5C (PipProcessStartPhase1.c)
 *     PnpReallocateResources @ 0x14073A4F4 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14073FE1C (PipProcessRestartPhase1.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1400C8D00 (PnpDiagnosticTraceObject.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1401463A0 (PpMarkDeviceStackExtensionFlag.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140146B20 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140146D3C (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpStartDevice @ 0x140146E98 (PnpStartDevice.c)
 *     PnpTraceStartDevice @ 0x14014BEB4 (PnpTraceStartDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x14014C824 (PipUpdatePostStartCharacteristics.c)
 *     PiSwProcessParentStartIrp @ 0x1405CA9E0 (PiSwProcessParentStartIrp.c)
 *     _PnpSetObjectProperty @ 0x1405D2000 (_PnpSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x1405D39C8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1405D3EF0 (PnpDeviceCompletionRequestCreate.c)
 *     IopGetSessionIdFromPDO @ 0x1405D5BE0 (IopGetSessionIdFromPDO.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  int v5; // esi
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rcx
  int started; // edi
  __int64 v11; // r8
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+70h] [rbp-18h]

  v5 = a2 != 0 ? 5 : 0;
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || InitSafeBootMode
    || (v6 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, v5 + 774)) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    v12 = 0LL;
    v14 = -1073741823;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)&v12);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      started = v14;
    }
    if ( started >= 0 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(a1 + 32));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v11 = v12;
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, (unsigned int)started, v11);
    PipSetDevNodeState(a1, v5 + 774);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    PipSetDevNodeState(a1, 773);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v7, v6);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v6);
    if ( started == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Pend, (unsigned __int16 *)(a1 + 40));
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v8, v6);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest(v6);
    }
  }
  return (unsigned int)started;
}
