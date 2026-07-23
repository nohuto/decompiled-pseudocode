/*
 * XREFs of ZwModifyBootEntry @ 0x14017FA40
 * Callers:
 *     BiModifyBootEntry @ 0x14077C840 (BiModifyBootEntry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootEntry);
}
