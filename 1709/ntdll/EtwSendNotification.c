/*
 * XREFs of EtwSendNotification @ 0x1800192A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 *     EtwpReceiveReplyDataBlock @ 0x180109F34 (EtwpReceiveReplyDataBlock.c)
 */

ULONG __cdecl EtwSendNotification(
        PETW_NOTIFICATION_HEADER DataBlock,
        ULONG ReceiveDataBlockSize,
        PVOID ReceiveDataBlock,
        PULONG ReplyReceived,
        PULONG ReplySizeNeeded)
{
  BOOLEAN ReplyRequested; // bp
  char *v7; // r15
  ULONG Timeout; // esi
  NTSTATUS v11; // eax
  int v12; // r8d
  ULONG v13; // ebx
  ULONG ReplyCount; // r9d
  void *Reserved2; // rbp
  PULONG ReturnLength; // [rsp+28h] [rbp-100h]
  ULONG v18; // [rsp+50h] [rbp-D8h] BYREF
  char v19; // [rsp+58h] [rbp-D0h] BYREF

  ReplyRequested = DataBlock->ReplyRequested;
  LODWORD(v7) = (_DWORD)ReceiveDataBlock;
  Timeout = DataBlock->Timeout;
  if ( ReplyRequested == 1 && !Timeout )
    Timeout = 60000;
  v11 = NtTraceControl(EtwSendDataBlock, DataBlock, DataBlock->NotificationSize, DataBlock, 0x48u, &v18);
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
        LOBYTE(v12) = 0;
        Reserved2 = (void *)DataBlock->Reserved2;
        if ( DataBlock->NotificationType == EtwNotificationTypeEnable )
        {
          LOBYTE(v12) = 1;
          v7 = &v19;
          ReceiveDataBlockSize = 120;
        }
        LODWORD(ReturnLength) = ReceiveDataBlockSize;
        v13 = EtwpReceiveReplyDataBlock(
                (int)Reserved2,
                Timeout,
                v12,
                ReplyCount,
                (ULONG)v7,
                (SIZE_T)ReturnLength,
                (__int64)ReplyReceived,
                (__int64)ReplySizeNeeded,
                DataBlock->NotificationType);
        if ( Reserved2 )
          NtClose(Reserved2);
      }
    }
  }
  return v13;
}
