/*
 * XREFs of NtAddDriverEntry @ 0x14075B918
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_14035E690 == 2 )
    return ExpSetDriverEntry(1, &BootEntry->Version, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
