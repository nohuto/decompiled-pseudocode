/*
 * XREFs of NtModifyDriverEntry @ 0x14075C9F8
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14075A2BC (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_14035E690 == 2 )
    return ExpSetDriverEntry(0, &DriverEntry->Version, 0LL);
  else
    return -1073741822;
}
