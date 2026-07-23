/*
 * XREFs of EtwDeliverDataBlock @ 0x180005750
 * Callers:
 *     sub_180005554 @ 0x180005554 (sub_180005554.c)
 *     sub_180005610 @ 0x180005610 (sub_180005610.c)
 * Callees:
 *     sub_180005A98 @ 0x180005A98 (sub_180005A98.c)
 *     sub_180005BC4 @ 0x180005BC4 (sub_180005BC4.c)
 *     sub_180005CCC @ 0x180005CCC (sub_180005CCC.c)
 *     sub_180005D90 @ 0x180005D90 (sub_180005D90.c)
 *     sub_180005DB0 @ 0x180005DB0 (sub_180005DB0.c)
 *     sub_180005DCC @ 0x180005DCC (sub_180005DCC.c)
 *     sub_180005DF4 @ 0x180005DF4 (sub_180005DF4.c)
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     sub_180024300 @ 0x180024300 (sub_180024300.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     EtwReplyNotification @ 0x180107660 (EtwReplyNotification.c)
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
  __int64 v16; // rsi
  char v17; // dl
  _BYTE *v18; // rax
  int v19; // r9d
  unsigned int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // rax
  _BYTE *v23; // rcx
  __int64 v24; // r8
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
  byte_18015A434 = 0;
  if ( v9 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v8 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    v10 = (_RTL_SRWLOCK *)sub_180005BC4(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    v11 = (__int64)v10;
    if ( v10 )
    {
      RtlAcquireSRWLockExclusive(v10 + 8);
      v12 = 1;
      *(_DWORD *)(v11 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      sub_180005CCC(v11, Notification, v26, &v30, &v28);
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
  v11 = sub_180005A98(0LL);
  if ( !v11 )
  {
LABEL_20:
    if ( !v8
      || !qword_18015A418
      || (v13 = *(_QWORD *)(qword_18015A418 + 88), Notification[1].NotificationType == EtwNotificationTypeLegacyEnable)
      || (v16 = sub_180024300(&Notification->DestinationGuid)) == 0
      && (!Notification[1].NotificationType || (v16 = sub_180005DF4(&Notification->DestinationGuid)) == 0) )
    {
      v12 = v27;
      goto LABEL_13;
    }
    sub_180005DCC(v16);
    v17 = BYTE2(Notification[1].NotificationSize);
    v18 = (_BYTE *)(v16 + 78);
    v19 = 0;
    v20 = 0;
    while ( !*(v18 - 2) || *v18 != v17 )
    {
      ++v20;
      v18 += 24;
      if ( v20 >= 4 )
      {
        v21 = 0LL;
        goto LABEL_30;
      }
    }
    v21 = v16 + 8 * (v20 + 2LL * v20 + 7);
LABEL_30:
    if ( !v21 )
    {
      if ( !Notification[1].NotificationType )
        goto LABEL_38;
      v22 = 0LL;
      v23 = (_BYTE *)(v16 + 76);
      do
      {
        if ( !*v23 )
        {
          v24 = v16 + 8 * (v22 + 2 * v22 + 7);
          goto LABEL_35;
        }
        v22 = (unsigned int)(v22 + 1);
        v23 += 24;
      }
      while ( (unsigned int)v22 < 4 );
      v24 = 0LL;
LABEL_35:
      if ( !v24 )
        goto LABEL_38;
      *(_BYTE *)(v24 + 22) = v17;
      sub_180005DB0(v16);
    }
    *(_QWORD *)v21 = Notification[1].Reserved2;
    *(_QWORD *)(v21 + 8) = *(_QWORD *)&Notification[1].Timeout;
    *(_BYTE *)(v21 + 21) = Notification[1].NotificationSize;
    *(_DWORD *)(v21 + 16) = Notification[1].Offset;
    *(_BYTE *)(v21 + 20) = Notification[1].NotificationType != v19;
LABEL_38:
    if ( HIBYTE(Notification[1].TargetPID) == 1 )
    {
      *(_QWORD *)(v16 + 152) = *(_QWORD *)&Notification[1].TargetPID;
      *(_DWORD *)(v16 + 160) = Notification[1].NotificationType;
    }
    *(_DWORD *)(v16 + 48) = v19;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v16 + 40));
    sub_180005D90((PVOID)v16);
    v12 = v27;
    v7 = 1;
LABEL_7:
    if ( v4 || v7 )
      goto LABEL_8;
    goto LABEL_13;
  }
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
    if ( (unsigned __int8)sub_180005CCC(v11, Notification, v26, &v30, &v28) )
      break;
    if ( v6 )
    {
      *(_DWORD *)(v11 + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v11 + 64));
      v6 = 0;
    }
LABEL_18:
    v11 = sub_180005A98(v11);
  }
  while ( v11 );
  v4 = v28;
  v3 = v30;
  v27 = v6;
  if ( !v28 )
    goto LABEL_20;
  v13 = v26[0];
  v12 = v27;
LABEL_8:
  if ( v29 == 1 && !byte_18015A434 )
  {
    if ( v3 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
      goto LABEL_58;
    }
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
LABEL_58:
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
