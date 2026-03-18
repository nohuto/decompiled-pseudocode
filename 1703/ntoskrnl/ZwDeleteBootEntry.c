/*
 * XREFs of ZwDeleteBootEntry @ 0x14017F840
 * Callers:
 *     BiDeleteBootEntry @ 0x140737354 (BiDeleteBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EntryName, EntryValue, v2);
}
