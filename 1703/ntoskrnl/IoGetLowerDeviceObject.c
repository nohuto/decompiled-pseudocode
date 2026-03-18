/*
 * XREFs of IoGetLowerDeviceObject @ 0x140039200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetLowerDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetLowerDeviceObjectWithTag(DeviceObject, 1953261124LL);
}
