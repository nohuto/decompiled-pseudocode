/*
 * XREFs of ZwSetBootOptions @ 0x140180880
 * Callers:
 *     BiSetBootOptions @ 0x14077CB04 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
