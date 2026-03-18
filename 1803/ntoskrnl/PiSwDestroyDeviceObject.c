/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1405C3E28
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1405C53E0 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x14009F890 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1405C3E5C (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject(DeviceObject);
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
