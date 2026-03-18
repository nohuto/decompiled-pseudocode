/*
 * XREFs of UsbhNotEnoughBandwidth_Popup @ 0x1C0050760
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004E8E4 (UsbhBuildWmiConnectionNotification.c)
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
