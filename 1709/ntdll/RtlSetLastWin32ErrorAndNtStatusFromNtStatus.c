/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x18001ACD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 */

void __cdecl RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS Status)
{
  LONG v1; // eax

  v1 = RtlNtStatusToDosError(Status);
  RtlSetLastWin32Error(v1);
}
