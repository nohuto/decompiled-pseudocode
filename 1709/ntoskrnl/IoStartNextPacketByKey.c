/*
 * XREFs of IoStartNextPacketByKey @ 0x1401F9C60
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKey @ 0x1401FA360 (IopStartNextPacketByKey.c)
 *     IopStartNextPacketByKeyEx @ 0x1401FA424 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable);
}
