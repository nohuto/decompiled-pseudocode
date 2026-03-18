/*
 * XREFs of IoStartNextPacketByKey @ 0x140236EF0
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacketByKeyEx @ 0x14000104C (IopStartNextPacketByKeyEx.c)
 *     IopStartNextPacketByKey @ 0x140237380 (IopStartNextPacketByKey.c)
 */

void __stdcall IoStartNextPacketByKey(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable, ULONG Key)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx((__int64)DeviceObject, Key, Cancelable != 0 ? 192 : 64);
  else
    IopStartNextPacketByKey(DeviceObject, Cancelable, Key);
}
