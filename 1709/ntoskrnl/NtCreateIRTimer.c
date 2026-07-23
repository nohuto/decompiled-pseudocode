/*
 * XREFs of NtCreateIRTimer @ 0x1405F2CC8
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTimer2 @ 0x1404EB824 (NtCreateTimer2.c)
 */

NTSTATUS __cdecl NtCreateIRTimer(PHANDLE TimerHandle, PVOID Reserved, ACCESS_MASK DesiredAccess)
{
  return NtCreateTimer2(TimerHandle, Reserved, 0LL, 2u, DesiredAccess);
}
