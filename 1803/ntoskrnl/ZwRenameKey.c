/*
 * XREFs of ZwRenameKey @ 0x1401AA200
 * Callers:
 *     CmpDoReDoRenameKey @ 0x1407071BC (CmpDoReDoRenameKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRenameKey(HANDLE KeyHandle, PUNICODE_STRING NewName)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, NewName, v2);
}
