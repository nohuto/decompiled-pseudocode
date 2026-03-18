/*
 * XREFs of NtModifyBootEntry @ 0x1407C39EC
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 */

NTSTATUS __stdcall NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  if ( dword_1403A1C50 == 2 )
    return ExpSetBootEntry(0, BootEntry, 0LL);
  else
    return -1073741822;
}
