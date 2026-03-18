/*
 * XREFs of PopDripsWatchdogFetchDeviceBlockers @ 0x14070A778
 * Callers:
 *     PopDripsCallbackTakeAction @ 0x14070A6BC (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14070A8CC (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopFxDeviceAccountingWatchdog @ 0x14023DC74 (PopFxDeviceAccountingWatchdog.c)
 *     IoGetDevicePropertyData @ 0x14054F460 (IoGetDevicePropertyData.c)
 *     PopFxChildDevicesActive @ 0x1406F8134 (PopFxChildDevicesActive.c)
 */

int __fastcall PopDripsWatchdogFetchDeviceBlockers(
        unsigned __int64 a1,
        ULONG_PTR *a2,
        unsigned int *a3,
        SIZE_T *a4,
        _DWORD *a5)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  ULONG Type; // [rsp+40h] [rbp-38h] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-34h] BYREF
  _QWORD Data[2]; // [rsp+48h] [rbp-30h] BYREF

  LODWORD(v7) = PopFxDeviceAccountingWatchdog(a1, a2, a3);
  v8 = *a2;
  if ( v8 )
  {
    LODWORD(v7) = IoGetDevicePropertyData(
                    *(PDEVICE_OBJECT *)(*(_QWORD *)(v8 + 48) + 32LL),
                    &DEVPKEY_Device_ClassGuid,
                    0,
                    0,
                    0x10u,
                    Data,
                    &RequiredSize,
                    &Type);
    if ( (int)v7 >= 0 && Type == 13 && RequiredSize == 16 )
    {
      v7 = *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 - Data[0];
      if ( *(_QWORD *)&GUID_DEVICE_CLASS_USB_CONTROLLER.Data1 == Data[0] )
        v7 = *(_QWORD *)GUID_DEVICE_CLASS_USB_CONTROLLER.Data4 - Data[1];
      if ( !v7 )
        LODWORD(v7) = PopFxChildDevicesActive(v8, a4, a5);
    }
  }
  return v7;
}
