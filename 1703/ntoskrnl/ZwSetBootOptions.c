/*
 * XREFs of ZwSetBootOptions @ 0x140180EA0
 * Callers:
 *     BiSetBootOptions @ 0x1407383E0 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
