/*
 * XREFs of IoStartNextPacket @ 0x1401F9C20
 * Callers:
 *     <none>
 * Callees:
 *     IopStartNextPacket @ 0x1401FA2A0 (IopStartNextPacket.c)
 *     IopStartNextPacketByKeyEx @ 0x1401FA424 (IopStartNextPacketByKeyEx.c)
 */

void __stdcall IoStartNextPacket(PDEVICE_OBJECT DeviceObject, BOOLEAN Cancelable)
{
  if ( (DeviceObject->DeviceObjectExtension->StartIoFlags & 0x100) != 0 )
    IopStartNextPacketByKeyEx(DeviceObject, 0LL, Cancelable != 0 ? 160 : 32);
  else
    IopStartNextPacket(DeviceObject, Cancelable);
}
