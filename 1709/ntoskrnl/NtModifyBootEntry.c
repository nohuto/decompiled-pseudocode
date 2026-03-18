/*
 * XREFs of NtModifyBootEntry @ 0x14075C9CC
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_14035E690 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
