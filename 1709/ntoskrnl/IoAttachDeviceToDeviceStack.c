/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140127C80
 * Callers:
 *     VfFilterAttach @ 0x1407C2A44 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return (PDEVICE_OBJECT)IopAttachDeviceToDeviceStackSafe(SourceDevice, TargetDevice, 0LL);
}
