/*
 * XREFs of UsbhNestedHubsPopup @ 0x1C00506C0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C004E8E4 (UsbhBuildWmiConnectionNotification.c)
 */

int __fastcall UsbhNestedHubsPopup(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _QWORD *v4; // rax
  PVOID EventData; // r10

  Log((__int64)DeviceObject, 128, 1817531202, a2, 0LL);
  FdoExt((__int64)DeviceObject);
  v4 = UsbhBuildWmiConnectionNotification((__int64)DeviceObject, *(_WORD *)(a2 + 20));
  if ( v4 )
  {
    *(_DWORD *)v4 = 10;
    Log((__int64)DeviceObject, 128, 2003659084, a2, (__int64)v4);
    LODWORD(v4) = WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  return (int)v4;
}
