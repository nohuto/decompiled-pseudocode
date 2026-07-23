/*
 * XREFs of ZwSetBootOptions @ 0x1401AA4C0
 * Callers:
 *     BiSetBootOptions @ 0x1407E55C0 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions);
}
