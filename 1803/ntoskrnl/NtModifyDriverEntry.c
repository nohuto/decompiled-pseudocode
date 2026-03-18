/*
 * XREFs of NtModifyDriverEntry @ 0x1407C3A18
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x1407C11E8 (ExpSetDriverEntry.c)
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_1403A1C50 == 2 )
    return ExpSetDriverEntry(0, DriverEntry, 0LL);
  else
    return -1073741822;
}
