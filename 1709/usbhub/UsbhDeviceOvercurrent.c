/*
 * XREFs of UsbhDeviceOvercurrent @ 0x1C004FC90
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C003E0A0 (UsbhDeviceOvercurrentPopup.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrent(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  FdoExt((__int64)DeviceObject);
  return UsbhDeviceOvercurrentPopup(DeviceObject, *(_WORD *)(a2 + 20));
}
