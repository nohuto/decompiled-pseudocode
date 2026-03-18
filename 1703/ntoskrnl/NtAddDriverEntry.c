/*
 * XREFs of NtAddDriverEntry @ 0x14071C080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_140344B30 == 2 )
    return ExpSetDriverEntry(1, &BootEntry->Version, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
