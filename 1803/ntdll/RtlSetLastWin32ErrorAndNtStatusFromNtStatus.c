/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x180008370
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 */

void __cdecl RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS Status)
{
  LONG v1; // eax

  v1 = RtlNtStatusToDosError(Status);
  RtlSetLastWin32Error(v1);
}
