/*
 * XREFs of ZwQueryBootOptions @ 0x1401805C0
 * Callers:
 *     BiQueryBootOptions @ 0x1407382CC (BiQueryBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
