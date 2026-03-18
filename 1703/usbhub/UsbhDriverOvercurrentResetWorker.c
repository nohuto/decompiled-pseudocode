/*
 * XREFs of UsbhDriverOvercurrentResetWorker @ 0x1C003D2C0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     UsbhReferenceListAdd @ 0x1C001BF40 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x1C0021BB0 (UsbhReferenceListRemove.c)
 *     Usbh__TestPoint__Ulong @ 0x1C0022170 (Usbh__TestPoint__Ulong.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003D1F0 (UsbhDeviceOvercurrentPopup.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x1C003D87C (Usbh_OvercurrentDerefHubBusy.c)
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
