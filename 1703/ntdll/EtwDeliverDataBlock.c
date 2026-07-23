/*
 * XREFs of EtwDeliverDataBlock @ 0x1800523B0
 * Callers:
 *     sub_18005203C @ 0x18005203C (sub_18005203C.c)
 *     sub_180052270 @ 0x180052270 (sub_180052270.c)
 * Callees:
 *     EtwReplyNotification @ 0x180004150 (EtwReplyNotification.c)
 *     sub_18001A6A8 @ 0x18001A6A8 (sub_18001A6A8.c)
 *     sub_18001B870 @ 0x18001B870 (sub_18001B870.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180052724 @ 0x180052724 (sub_180052724.c)
 *     sub_1800527EC @ 0x1800527EC (sub_1800527EC.c)
 *     sub_1800528A4 @ 0x1800528A4 (sub_1800528A4.c)
 *     sub_180052928 @ 0x180052928 (sub_180052928.c)
 *     sub_180052A74 @ 0x180052A74 (sub_180052A74.c)
 *     sub_180052A9C @ 0x180052A9C (sub_180052A9C.c)
 */

__int64 __fastcall EtwDeliverDataBlock(PETW_NOTIFICATION_HEADER Notification)
{
  BOOLEAN ReplyRequested; // al
  ULONG v3; // r14d
  char v4; // r12
  ULONG Timeout; // eax
  char v6; // r13
  char v7; // si
  char v8; // r15
  bool v9; // zf
  _RTL_SRWLOCK *v10; // rax
  __int64 v11; // rdi
  char v12; // r15
  ULONGLONG v13; // r13
  __int64 v15; // rax
  _QWORD *v16; // rsi
  char v17; // dl
  _BYTE *v18; // rax
  int v19; // r9d
  unsigned int v20; // ecx
  ULONGLONG *v21; // r8
  __int64 v22; // rax
  _BYTE *v23; // rcx
  _QWORD *v24; // r8
  ULONG v25; // [rsp+30h] [rbp-18h]
  _QWORD v26[2]; // [rsp+38h] [rbp-10h] BYREF
  char v27; // [rsp+90h] [rbp+48h]
  char v28; // [rsp+98h] [rbp+50h] BYREF
  BOOLEAN v29; // [rsp+A0h] [rbp+58h]
  ULONG v30; // [rsp+A8h] [rbp+60h] BYREF

  ReplyRequested = Notification->ReplyRequested;
  v26[0] = 0LL;
  v3 = 0;
  v4 = 0;
  v29 = ReplyRequested;
  Timeout = Notification->Timeout;
  v6 = 0;
  v7 = 0;
  v30 = 0;
  v28 = 0;
  v8 = 0;
  v27 = 0;
  v9 = Notification->NotificationType == EtwNotificationTypeEnable;
  v25 = Timeout;
  byte_1801593D4 = 0;
  if ( v9 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v8 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    v10 = sub_18001A6A8((__int64)&Notification->DestinationGuid, Notification->Reserved2);
    v11 = (__int64)v10;
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(v10 + 8);
      v12 = 1;
      *(_DWORD *)(v11 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      sub_1800527EC(v11, Notification, v26, &v30, &v28);
      v13 = v26[0];
      v3 = v30;
      v4 = v28;
      goto LABEL_7;
    }
    v12 = 0;
LABEL_13:
    v3 = 4201;
    goto LABEL_9;
  }
  v11 = sub_180052724(0LL);
  if ( !v11 )
    goto LABEL_61;
  do
  {
    v15 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(v11 + 32);
    if ( !v15 )
      v15 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(v11 + 40);
    if ( v15 )
      goto LABEL_18;
    if ( *(_DWORD *)(v11 + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v11 + 64));
      v6 = 1;
      *(_DWORD *)(v11 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)sub_1800527EC(v11, Notification, v26, &v30, &v28) )
      break;
    if ( v6 )
    {
      *(_DWORD *)(v11 + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v11 + 64));
      v6 = 0;
    }
LABEL_18:
    v11 = sub_180052724(v11);
  }
  while ( v11 );
  v4 = v28;
  v3 = v30;
  v27 = v6;
  if ( !v28 )
  {
LABEL_61:
    if ( !v8
      || (v13 = *(_QWORD *)(qword_1801593B0 + 88), Notification[1].NotificationType == EtwNotificationTypeLegacyEnable)
      || (v16 = sub_18001B870(&Notification->DestinationGuid.Data1)) == 0LL
      && (!Notification[1].NotificationType || (v16 = (_QWORD *)sub_180052A9C(&Notification->DestinationGuid)) == 0LL) )
    {
      v12 = v27;
      goto LABEL_13;
    }
    sub_180052A74(v16);
    v17 = BYTE2(Notification[1].NotificationSize);
    v18 = (char *)v16 + 78;
    v19 = 0;
    v20 = 0;
    while ( !*(v18 - 2) || *v18 != v17 )
    {
      ++v20;
      v18 += 24;
      if ( v20 >= 4 )
      {
        v21 = 0LL;
        goto LABEL_35;
      }
    }
    v21 = &v16[2 * v20 + 7 + v20];
LABEL_35:
    if ( !v21 )
    {
      if ( !Notification[1].NotificationType )
        goto LABEL_43;
      v22 = 0LL;
      v23 = (char *)v16 + 76;
      do
      {
        if ( !*v23 )
        {
          v24 = &v16[2 * v22 + 7 + v22];
          goto LABEL_40;
        }
        v22 = (unsigned int)(v22 + 1);
        v23 += 24;
      }
      while ( (unsigned int)v22 < 4 );
      v24 = 0LL;
LABEL_40:
      if ( !v24 )
        goto LABEL_43;
      *((_BYTE *)v24 + 22) = v17;
      sub_180052928(v16);
    }
    *v21 = Notification[1].Reserved2;
    v21[1] = *(_QWORD *)&Notification[1].Timeout;
    *((_BYTE *)v21 + 21) = Notification[1].NotificationSize;
    *((_DWORD *)v21 + 4) = Notification[1].Offset;
    *((_BYTE *)v21 + 20) = Notification[1].NotificationType != v19;
LABEL_43:
    if ( HIBYTE(Notification[1].TargetPID) == 1 )
    {
      v16[19] = *(_QWORD *)&Notification[1].TargetPID;
      *((_DWORD *)v16 + 40) = Notification[1].NotificationType;
    }
    *((_DWORD *)v16 + 12) = v19;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v16 + 5);
    sub_1800528A4((PRTL_BALANCED_NODE)v16);
    v12 = v27;
    v7 = 1;
LABEL_7:
    if ( v4 || v7 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v13 = v26[0];
  v12 = v27;
LABEL_8:
  if ( v29 == 1 && !byte_1801593D4 )
  {
    if ( v3 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
      Notification->NotificationSize = 72;
    }
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
      Notification->NotificationSize = 72;
    Notification->Timeout = v25;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v13;
    v3 = EtwReplyNotification(Notification);
  }
LABEL_9:
  if ( v12 )
  {
    *(_DWORD *)(v11 + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v11 + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(v11 + 72));
  }
  return v3;
}
