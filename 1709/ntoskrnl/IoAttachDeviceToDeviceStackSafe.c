/*
 * XREFs of IoAttachDeviceToDeviceStackSafe @ 0x140127C60
 * Callers:
 *     IoAttachDevice @ 0x1406B6EA0 (IoAttachDevice.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceToDeviceStackSafe(
        PDEVICE_OBJECT SourceDevice,
        PDEVICE_OBJECT TargetDevice,
        PDEVICE_OBJECT *AttachedToDeviceObject)
{
  return IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, AttachedToDeviceObject) == 0 ? 0xC000000E : 0;
}
