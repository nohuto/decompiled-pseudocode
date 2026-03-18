/*
 * XREFs of DpiPdoHandleStartDevice @ 0x1C01236C0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000F314 (DpiCheckForOutstandingD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStartDevice(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceExtension; // rbx
  POWER_STATE v3; // r8d
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 483) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v3.SystemState = *(SYSTEM_POWER_STATE *)(*((_QWORD *)DeviceExtension + 117) + 68LL);
  *((POWER_STATE *)DeviceExtension + 71) = v3;
  *((_DWORD *)DeviceExtension + 70) = 1;
  PoSetPowerState(DeviceObject, DevicePowerState, v3);
  *((_DWORD *)DeviceExtension + (*((_DWORD *)DeviceExtension + 69) & 7) + 61) = *((_DWORD *)DeviceExtension + 60);
  v4 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v5 = *((_BYTE *)DeviceExtension + 483) == 0;
  *((_DWORD *)DeviceExtension + 60) = v4;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( !v5 )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  v10 = WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v10);
  return 0LL;
}
