/*
 * XREFs of EtwReplyNotification @ 0x180004150
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall EtwReplyNotification(__int64 a1)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = ZwTraceControl(18LL, a1, *(unsigned int *)(a1 + 4), 0LL, 0, &v4);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  byte_1801593D4 = 1;
  return v1;
}
