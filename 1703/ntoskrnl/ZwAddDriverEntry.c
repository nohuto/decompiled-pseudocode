/*
 * XREFs of ZwAddDriverEntry @ 0x14017EC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DriverEntry);
}
