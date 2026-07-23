/*
 * XREFs of ZwRenameKey @ 0x1401805C0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1406A1FF0 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
