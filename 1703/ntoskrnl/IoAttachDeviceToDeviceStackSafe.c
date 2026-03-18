/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x140072B90
 * Callers:
 *     IoAttachDevice @ 0x14068B200 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, AttachedToDeviceObject) == 0LL
       ? 0xC000000E
       : 0;
}
