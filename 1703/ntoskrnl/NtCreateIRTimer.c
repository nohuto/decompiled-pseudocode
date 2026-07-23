/*
 * XREFs of NtCreateIRTimer @ 0x140586670
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x14055DBA0 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
