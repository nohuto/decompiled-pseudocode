/*
 * XREFs of NtAddBootEntry @ 0x14075B8E8
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x140759AFC (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_14035E690 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
