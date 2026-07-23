/*
 * XREFs of ZwDeleteBootEntry @ 0x14017F1E0
 * Callers:
 *     BiDeleteBootEntry @ 0x14077B8DC (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
