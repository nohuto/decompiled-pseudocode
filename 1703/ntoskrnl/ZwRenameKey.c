/*
 * XREFs of ZwRenameKey @ 0x140180BE0
 * Callers:
 *     CmpDoReDoRenameKey @ 0x140677AB4 (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
