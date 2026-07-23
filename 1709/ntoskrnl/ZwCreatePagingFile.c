/*
 * XREFs of ZwCreatePagingFile @ 0x14017EEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreatePagingFile(
        PUNICODE_STRING FileName,
        PLARGE_INTEGER InitialSize,
        PLARGE_INTEGER MaxiumSize,
        ULONG Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileName);
}
