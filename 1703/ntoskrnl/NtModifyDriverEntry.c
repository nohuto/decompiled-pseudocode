/*
 * XREFs of NtModifyDriverEntry @ 0x14071D0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtModifyDriverEntry(PEFI_DRIVER_ENTRY DriverEntry)
{
  if ( dword_140344B30 == 2 )
    return ExpSetDriverEntry(0, &DriverEntry->Version, 0LL);
  else
    return -1073741822;
}
