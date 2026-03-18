/*
 * XREFs of IoGetLowerDeviceObject @ 0x14012D190
 * Callers:
 *     <none>
 * Callees:
 *     IoGetLowerDeviceObjectWithTag @ 0x14012D1AC (IoGetLowerDeviceObjectWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetLowerDeviceObjectWithTag(DeviceObject, 1953261124LL);
}
