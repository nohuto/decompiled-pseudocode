/*
 * XREFs of ZwModifyBootEntry @ 0x1401800A0
 * Callers:
 *     BiModifyBootEntry @ 0x1407381C8 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
