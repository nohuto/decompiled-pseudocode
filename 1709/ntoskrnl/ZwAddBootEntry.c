/*
 * XREFs of ZwAddBootEntry @ 0x14017E5E0
 * Callers:
 *     BiAddBootEntry @ 0x14077A2D0 (BiAddBootEntry.c)
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
