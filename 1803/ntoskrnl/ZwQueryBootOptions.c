/*
 * XREFs of ZwQueryBootOptions @ 0x1401A9BC0
 * Callers:
 *     BiQueryBootOptions @ 0x1407E53CC (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x1407E6630 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
