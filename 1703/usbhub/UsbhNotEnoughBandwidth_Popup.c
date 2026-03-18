/*
 * XREFs of UsbhNotEnoughBandwidth_Popup @ 0x1C004FA90
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004DBF4 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNotEnoughBandwidth_Popup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _QWORD *v4; // rax
  _DWORD *EventData; // rbx
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject);
  v4 = UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  EventData = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 1;
    PortData = UsbhGetPortData((__int64)DeviceObject, *(_WORD *)(a2 + 20));
    if ( PortData )
      EventData[2] = *(_DWORD *)(PortData + 436);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v4;
}
