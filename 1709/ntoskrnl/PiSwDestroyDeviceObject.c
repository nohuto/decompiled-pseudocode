/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1406CDAA0
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x14055E648 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x1405BA930 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1406CE854 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
