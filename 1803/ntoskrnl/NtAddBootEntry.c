/*
 * XREFs of NtAddBootEntry @ 0x1407C28D0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetBootEntry @ 0x1407C0A28 (ExpSetBootEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddBootEntry(PBOOT_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1403A1C50 == 2 )
    return ExpSetBootEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
