/*
 * XREFs of ZwRenameKey @ 0x1401AA200
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1407071BC (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
