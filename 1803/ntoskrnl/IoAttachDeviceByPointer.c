/*
 * XREFs of IoAttachDeviceByPointer @ 0x140236610
 * Callers:
 *     <none>
 * Callees:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 */

NTSTATUS __stdcall IoAttachDeviceByPointer(PDEVICE_OBJECT SourceDevice, PDEVICE_OBJECT TargetDevice)
{
  return IopAttachDeviceToDeviceStackSafe((__int64)SourceDevice, TargetDevice, 0LL) == 0LL ? 0xC000000E : 0;
}
