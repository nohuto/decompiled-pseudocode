/*
 * XREFs of EtwDeliverDataBlock @ 0x180063BC0
 * Callers:
 *     EtwpSendSessionNotification @ 0x18006384C (EtwpSendSessionNotification.c)
 *     EtwpNotificationThread @ 0x180063910 (EtwpNotificationThread.c)
 * Callees:
 *     EtwpFindGuidEntry @ 0x180036B44 (EtwpFindGuidEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     EtwpGetNextRegistration @ 0x180063EF4 (EtwpGetNextRegistration.c)
 *     EtwpFindRegistration @ 0x180063FBC (EtwpFindRegistration.c)
 *     EtwpProcessNotification @ 0x180064060 (EtwpProcessNotification.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180064118 (EtwpDereferenceUmGuidEntry.c)
 *     EtwpReferenceUmGuidEntry @ 0x18006419C (EtwpReferenceUmGuidEntry.c)
 *     EtwpAcquireGuidEntryExclusive @ 0x1800642DC (EtwpAcquireGuidEntryExclusive.c)
 *     EtwpAllocateUmGuidEntry @ 0x180064304 (EtwpAllocateUmGuidEntry.c)
 *     EtwReplyNotification @ 0x180109EF0 (EtwReplyNotification.c)
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
  _RTL_SRWLOCK *Registration; // rax
  __int64 NextRegistration; // rdi
  char v12; // r15
  ULONGLONG v13; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *GuidEntry; // rsi
  char v18; // dl
  _BYTE *v19; // rax
  int v20; // r9d
  unsigned int v21; // ecx
  ULONGLONG *v22; // r8
  __int64 v23; // rax
  _BYTE *v24; // rcx
  _QWORD *v25; // r8
  ULONG v26; // [rsp+30h] [rbp-18h]
  _QWORD v27[2]; // [rsp+38h] [rbp-10h] BYREF
  char v28; // [rsp+90h] [rbp+48h]
  char v29; // [rsp+98h] [rbp+50h] BYREF
  BOOLEAN v30; // [rsp+A0h] [rbp+58h]
  ULONG v31; // [rsp+A8h] [rbp+60h] BYREF

  ReplyRequested = Notification->ReplyRequested;
  v27[0] = 0LL;
  v3 = 0;
  v4 = 0;
  v30 = ReplyRequested;
  Timeout = Notification->Timeout;
  v6 = 0;
  v7 = 0;
  v31 = 0;
  v29 = 0;
  v8 = 0;
  v28 = 0;
  v9 = Notification->NotificationType == EtwNotificationTypeEnable;
  v26 = Timeout;
  EtwpReplySend = 0;
  if ( v9 && (Notification[1].NotificationSize & 0x80000000) != 0 )
  {
    v8 = 1;
    LODWORD(Notification->Reserved2) = -1;
  }
  if ( LODWORD(Notification->Reserved2) != -1 )
  {
    Registration = (_RTL_SRWLOCK *)EtwpFindRegistration(&Notification->DestinationGuid, LOWORD(Notification->Reserved2));
    NextRegistration = (__int64)Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 8);
      v12 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, Notification, v27, &v31, &v29);
      v13 = v27[0];
      v3 = v31;
      v4 = v29;
      goto LABEL_7;
    }
    v12 = 0;
LABEL_13:
    v3 = 4201;
    goto LABEL_9;
  }
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
    goto LABEL_61;
  do
  {
    v15 = *(_QWORD *)&Notification->DestinationGuid.Data1 - *(_QWORD *)(NextRegistration + 32);
    if ( !v15 )
      v15 = *(_QWORD *)Notification->DestinationGuid.Data4 - *(_QWORD *)(NextRegistration + 40);
    if ( v15 )
      goto LABEL_18;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v6 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, Notification, v27, &v31, &v29) )
      break;
    if ( v6 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
      v6 = 0;
    }
LABEL_18:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v4 = v29;
  v3 = v31;
  v28 = v6;
  if ( !v29 )
  {
LABEL_61:
    if ( !v8
      || (v13 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88),
          Notification[1].NotificationType == EtwNotificationTypeLegacyEnable)
      || (GuidEntry = EtwpFindGuidEntry(&Notification->DestinationGuid.Data1)) == 0LL
      && (!Notification[1].NotificationType
       || (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(&Notification->DestinationGuid)) == 0LL) )
    {
      v12 = v28;
      goto LABEL_13;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry, v16);
    v18 = BYTE2(Notification[1].NotificationSize);
    v19 = (char *)GuidEntry + 78;
    v20 = 0;
    v21 = 0;
    while ( !*(v19 - 2) || *v19 != v18 )
    {
      ++v21;
      v19 += 24;
      if ( v21 >= 4 )
      {
        v22 = 0LL;
        goto LABEL_35;
      }
    }
    v22 = &GuidEntry[2 * v21 + 7 + v21];
LABEL_35:
    if ( !v22 )
    {
      if ( !Notification[1].NotificationType )
        goto LABEL_43;
      v23 = 0LL;
      v24 = (char *)GuidEntry + 76;
      do
      {
        if ( !*v24 )
        {
          v25 = &GuidEntry[2 * v23 + 7 + v23];
          goto LABEL_40;
        }
        v23 = (unsigned int)(v23 + 1);
        v24 += 24;
      }
      while ( (unsigned int)v23 < 4 );
      v25 = 0LL;
LABEL_40:
      if ( !v25 )
        goto LABEL_43;
      *((_BYTE *)v25 + 22) = v18;
      EtwpReferenceUmGuidEntry(GuidEntry);
    }
    *v22 = Notification[1].Reserved2;
    v22[1] = *(_QWORD *)&Notification[1].Timeout;
    *((_BYTE *)v22 + 21) = Notification[1].NotificationSize;
    *((_DWORD *)v22 + 4) = Notification[1].Offset;
    *((_BYTE *)v22 + 20) = Notification[1].NotificationType != v20;
LABEL_43:
    if ( HIBYTE(Notification[1].TargetPID) == 1 )
    {
      GuidEntry[19] = *(_QWORD *)&Notification[1].TargetPID;
      *((_DWORD *)GuidEntry + 40) = Notification[1].NotificationType;
    }
    *((_DWORD *)GuidEntry + 12) = v20;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)GuidEntry + 5);
    EtwpDereferenceUmGuidEntry((PRTL_BALANCED_NODE)GuidEntry);
    v12 = v28;
    v7 = 1;
LABEL_7:
    if ( v4 || v7 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v13 = v27[0];
  v12 = v28;
LABEL_8:
  if ( v30 == 1 && !EtwpReplySend )
  {
    if ( v3 )
    {
      Notification->NotificationType = EtwNotificationTypeNoReply;
      Notification->NotificationSize = 72;
    }
    if ( Notification->NotificationType == EtwNotificationTypeEnable )
      Notification->NotificationSize = 72;
    Notification->Timeout = v26;
    Notification->ReplyRequested = 0;
    Notification->Reserved2 = v13;
    v3 = EtwReplyNotification(Notification);
  }
LABEL_9:
  if ( v12 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(NextRegistration + 64));
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(NextRegistration + 72));
  }
  return v3;
}
