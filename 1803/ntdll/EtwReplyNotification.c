/*
 * XREFs of EtwReplyNotification @ 0x180107660
 * Callers:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

ULONG __cdecl EtwReplyNotification(PETW_NOTIFICATION_HEADER Notification)
{
  ULONG v1; // ebx
  NTSTATUS v2; // eax
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = ZwTraceControl(EtwSendReplyDataBlock, Notification, Notification->NotificationSize, 0LL, 0, &ReturnLength);
  if ( v2 )
    v1 = RtlNtStatusToDosError(v2);
  byte_18015A434 = 1;
  return v1;
}
