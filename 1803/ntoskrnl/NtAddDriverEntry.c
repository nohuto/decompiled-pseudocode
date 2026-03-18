/*
 * XREFs of NtAddDriverEntry @ 0x1407C2900
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1403A1C50 == 2 )
    return ExpSetDriverEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
