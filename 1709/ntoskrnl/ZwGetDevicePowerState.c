/*
 * XREFs of ZwGetDevicePowerState @ 0x14017F660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetDevicePowerState(HANDLE Device, PDEVICE_POWER_STATE PowerState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Device);
}
