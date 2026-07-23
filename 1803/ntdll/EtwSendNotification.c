/*
 * XREFs of EtwSendNotification @ 0x1800081C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     sub_1801076A4 @ 0x1801076A4 (sub_1801076A4.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  int v7; // r14d
  ULONG Timeout; // edi
  NTSTATUS v11; // eax
  int v12; // r8d
  ULONG v13; // ebx
  ULONG ReplyCount; // r9d
  ETW_NOTIFICATION_TYPE NotificationType; // r10d
  ULONG v17; // r11d
  void *Reserved2; // rbp
  char *v19; // rax
  PULONG ReturnLength; // [rsp+28h] [rbp-100h]
  ULONG v21; // [rsp+50h] [rbp-D8h] BYREF
  char v22; // [rsp+58h] [rbp-D0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  v7 = (int)ReceiveDataBlock;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 && !Timeout )
    Timeout = 60000;
  v11 = ZwTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &v21);
  if ( v11 )
    v13 = RtlNtStatusToDosError(v11);
  else
    v13 = 0;
  if ( ReplyRequested )
  {
    if ( !v13 )
    {
      ReplyCount = DataBlock->ReplyCount;
      if ( ReplyCount )
      {
        NotificationType = DataBlock->NotificationType;
        v17 = 120;
        Reserved2 = (void *)DataBlock->Reserved2;
        v19 = &v22;
        if ( DataBlock->NotificationType != EtwNotificationTypeEnable )
          v17 = ReceiveDataBlockSize;
        if ( NotificationType != EtwNotificationTypeEnable )
          LODWORD(v19) = v7;
        LODWORD(ReturnLength) = v17;
        LOBYTE(v12) = NotificationType == EtwNotificationTypeEnable;
        v13 = sub_1801076A4(
                (int)Reserved2,
                Timeout,
                v12,
                ReplyCount,
                (ULONG)v19,
                (SIZE_T)ReturnLength,
                (__int64)ReplyReceived,
                (__int64)ReplySizeNeeded,
                DataBlock->NotificationType);
        if ( Reserved2 )
          ZwClose(Reserved2);
      }
    }
  }
  return v13;
}
