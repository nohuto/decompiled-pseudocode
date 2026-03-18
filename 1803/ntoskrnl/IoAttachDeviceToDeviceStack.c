/*
 * XREFs of IoAttachDeviceToDeviceStack @ 0x140163D90
 * Callers:
 *     VfFilterAttach @ 0x14082FFB4 (VfFilterAttach.c)
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 */

PDEVICE_OBJECT __stdcall IoAttachDeviceToDeviceStack(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL);
}
