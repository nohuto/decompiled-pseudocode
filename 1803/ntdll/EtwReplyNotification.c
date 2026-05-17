/*
 * XREFs of EtwReplyNotification @ 0x180107660
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 EtwReplyNotification()
{
  ULONG v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  v1 = ZwTraceControl();
  if ( v1 )
    v0 = RtlNtStatusToDosError(v1);
  byte_18015A434 = 1;
  return v0;
}
