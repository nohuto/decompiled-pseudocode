/*
 * XREFs of ZwSetBootOptions @ 0x140180880
 * Callers:
 *     BiSetBootOptions @ 0x14077CB04 (BiSetBootOptions.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(BootOptions, *(_QWORD *)&FieldsToChange, v2);
}
