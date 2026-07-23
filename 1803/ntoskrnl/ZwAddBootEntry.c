/*
 * XREFs of ZwAddBootEntry @ 0x1401A81E0
 * Callers:
 *     BiAddBootEntry @ 0x1407E2CA0 (BiAddBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAddBootEntry(PUNICODE_STRING EntryName, PUNICODE_STRING EntryValue)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EntryName);
}
