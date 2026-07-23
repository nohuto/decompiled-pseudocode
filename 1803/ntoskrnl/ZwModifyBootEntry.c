/*
 * XREFs of ZwModifyBootEntry @ 0x1401A9680
 * Callers:
 *     BiModifyBootEntry @ 0x1407E5290 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
