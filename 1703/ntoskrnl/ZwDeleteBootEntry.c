/*
 * XREFs of ZwDeleteBootEntry @ 0x14017F840
 * Callers:
 *     BiDeleteBootEntry @ 0x140737354 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
