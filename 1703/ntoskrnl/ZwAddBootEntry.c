/*
 * XREFs of ZwAddBootEntry @ 0x14017EC60
 * Callers:
 *     BiAddBootEntry @ 0x140735E8C (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EntryName, EntryValue, v2);
}
