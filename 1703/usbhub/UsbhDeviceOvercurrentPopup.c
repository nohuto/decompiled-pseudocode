/*
 * XREFs of UsbhDeviceOvercurrentPopup @ 0x1C003D1F0
 * Callers:
 *     UsbhDriverOvercurrentResetWorker @ 0x1C003D2C0 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrent @ 0x1C004EFA0 (UsbhDeviceOvercurrent.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C003C8F0 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003D87C (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DBF4 (UsbhBuildWmiConnectionNotification.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrentPopup(PDEVICE_OBJECT DeviceObject, unsigned __int16 a2)
{
  _DWORD *v4; // rsi
  __int64 PortData; // rax
  _DWORD *EventData; // rax
  __int64 v8; // rax

  FdoExt((__int64)DeviceObject);
  v4 = FdoExt((__int64)DeviceObject);
  PortData = UsbhGetPortData((__int64)DeviceObject, a2);
  if ( PortData )
  {
    *(_DWORD *)(PortData + 2832) = 500;
    *(_WORD *)(PortData + 2836) = 256;
    UsbhDispatch_PindicatorEvent((__int64)DeviceObject, PortData, 4, (__int64)(v4 + 346));
  }
  EventData = (_DWORD *)UsbhBuildWmiConnectionNotification(DeviceObject, a2);
  if ( EventData )
  {
    *EventData = 3;
    return WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  else
  {
    v8 = UsbhGetPortData((__int64)DeviceObject, a2);
    return Usbh_OvercurrentDerefHubBusy(DeviceObject, v8, 0LL);
  }
}
