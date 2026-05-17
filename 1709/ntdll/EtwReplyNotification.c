/*
 * XREFs of EtwReplyNotification @ 0x180109EF0
 * Callers:
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 */

__int64 EtwReplyNotification()
{
  ULONG v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  v1 = NtTraceControl();
  if ( v1 )
    v0 = RtlNtStatusToDosError(v1);
  EtwpReplySend = 1;
  return v0;
}
