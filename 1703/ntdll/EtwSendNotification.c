/*
 * XREFs of EtwSendNotification @ 0x18005F750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000359C @ 0x18000359C (sub_18000359C.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  ULONG Timeout; // esi
  NTSTATUS v11; // eax
  ULONG v12; // ebx
  ULONG ReplyCount; // r9d
  char v15; // r8
  void *Reserved2; // rbp
  ULONG ReturnLength; // [rsp+50h] [rbp-D8h] BYREF
  char v18; // [rsp+58h] [rbp-D0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 && !Timeout )
    Timeout = 60000;
  v11 = ZwTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &ReturnLength);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( ReplyRequested )
  {
    ReplyCount = DataBlock->ReplyCount;
    if ( !v12 )
    {
      if ( ReplyCount )
      {
        v15 = 0;
        Reserved2 = (void *)DataBlock->Reserved2;
        if ( DataBlock->NotificationType == EtwNotificationTypeEnable )
        {
          v15 = 1;
          ReceiveDataBlock = &v18;
          ReceiveDataBlockSize = 120;
        }
        v12 = sub_18000359C(
                (int)Reserved2,
                Timeout,
                v15,
                ReplyCount,
                (char *)ReceiveDataBlock,
                ReceiveDataBlockSize,
                ReplyReceived,
                ReplySizeNeeded,
                DataBlock->NotificationType);
        if ( Reserved2 )
          ZwClose(Reserved2);
      }
    }
  }
  return v12;
}
