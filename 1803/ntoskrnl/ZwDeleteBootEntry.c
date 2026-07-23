/*
 * XREFs of ZwDeleteBootEntry @ 0x1401A8E00
 * Callers:
 *     BiDeleteBootEntry @ 0x1407E42EC (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
