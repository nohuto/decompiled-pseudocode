/*
 * XREFs of ZwQueryBootOptions @ 0x14017FF80
 * Callers:
 *     BiQueryBootOptions @ 0x14077C944 (BiQueryBootOptions.c)
 *     SiGetEspFromFirmware @ 0x14077DC34 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
