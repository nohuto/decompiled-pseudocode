/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C003E170
 * Callers:
 *     <none>
 * Callees:
 *     UsbhGetPortData @ 0x1C000A320 (UsbhGetPortData.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0023280 (Usbh__TestPoint__Ulong.c)
 *     UsbhReferenceListAdd @ 0x1C0023920 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C00262E4 (UsbhReferenceListRemove.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E0A0 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003E72C (Usbh_OvercurrentDerefHubBusy.c)
 */

void __fastcall UsbhDriverOvercurrentResetWorker(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  __int64 PortData; // rax

  FdoExt((__int64)DeviceObject);
  if ( (int)Usbh__TestPoint__Ulong((__int64)DeviceObject, 8u, 0, a2) < 0
    || (int)UsbhReferenceListAdd((__int64)DeviceObject, a3, 1466196847) < 0 )
  {
    PortData = UsbhGetPortData((__int64)DeviceObject, a2);
    Usbh_OvercurrentDerefHubBusy(DeviceObject, PortData, 0LL);
  }
  else
  {
    UsbhDeviceOvercurrentPopup(DeviceObject, a2);
    UsbhReferenceListRemove((__int64)DeviceObject, a3);
  }
}
