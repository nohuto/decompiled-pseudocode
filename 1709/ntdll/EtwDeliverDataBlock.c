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

__int64 __fastcall EtwDeliverDataBlock(__int64 a1)
{
  char v1; // al
  unsigned int v3; // r14d
  char v4; // r12
  int v5; // eax
  char v6; // r13
  char v7; // si
  char v8; // r15
  bool v9; // zf
  __int64 Registration; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  __int64 NextRegistration; // rdi
  char v15; // r15
  __int64 v16; // r13
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *GuidEntry; // rsi
  char v24; // dl
  _BYTE *v25; // rax
  int v26; // r9d
  unsigned int v27; // ecx
  _QWORD *v28; // r8
  __int64 v29; // rax
  _BYTE *v30; // rcx
  _QWORD *v31; // r8
  int v32; // [rsp+30h] [rbp-18h]
  _QWORD v33[2]; // [rsp+38h] [rbp-10h] BYREF
  char v34; // [rsp+90h] [rbp+48h]
  char v35; // [rsp+98h] [rbp+50h] BYREF
  char v36; // [rsp+A0h] [rbp+58h]
  unsigned int v37; // [rsp+A8h] [rbp+60h] BYREF

  v1 = *(_BYTE *)(a1 + 12);
  v33[0] = 0LL;
  v3 = 0;
  v4 = 0;
  v36 = v1;
  v5 = *(_DWORD *)(a1 + 16);
  v6 = 0;
  v7 = 0;
  v37 = 0;
  v35 = 0;
  v8 = 0;
  v34 = 0;
  v9 = *(_DWORD *)a1 == 3;
  v32 = v5;
  EtwpReplySend = 0;
  if ( v9 && *(__int16 *)(a1 + 78) < 0 )
  {
    v8 = 1;
    *(_DWORD *)(a1 + 24) = -1;
  }
  if ( *(_DWORD *)(a1 + 24) != -1 )
  {
    Registration = EtwpFindRegistration(a1 + 40, *(unsigned __int16 *)(a1 + 24));
    NextRegistration = Registration;
    if ( Registration )
    {
      RtlAcquireSRWLockExclusive(Registration + 64, v11, v12, v13);
      v15 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      EtwpProcessNotification(NextRegistration, a1, v33, &v37, &v35);
      v16 = v33[0];
      v3 = v37;
      v4 = v35;
      goto LABEL_7;
    }
    v15 = 0;
LABEL_13:
    v3 = 4201;
    goto LABEL_9;
  }
  NextRegistration = EtwpGetNextRegistration(0LL);
  if ( !NextRegistration )
    goto LABEL_61;
  do
  {
    v21 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(NextRegistration + 32);
    if ( !v21 )
      v21 = *(_QWORD *)(a1 + 48) - *(_QWORD *)(NextRegistration + 40);
    if ( v21 )
      goto LABEL_18;
    if ( *(_DWORD *)(NextRegistration + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    {
      RtlAcquireSRWLockExclusive(NextRegistration + 64, v18, v19, v20);
      v6 = 1;
      *(_DWORD *)(NextRegistration + 80) = NtCurrentTeb()->ClientId.UniqueThread;
    }
    if ( (unsigned __int8)EtwpProcessNotification(NextRegistration, a1, v33, &v37, &v35) )
      break;
    if ( v6 )
    {
      *(_DWORD *)(NextRegistration + 80) = 0;
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
      v6 = 0;
    }
LABEL_18:
    NextRegistration = EtwpGetNextRegistration(NextRegistration);
  }
  while ( NextRegistration );
  v4 = v35;
  v3 = v37;
  v34 = v6;
  if ( !v35 )
  {
LABEL_61:
    if ( !v8
      || (v16 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88), *(_DWORD *)(a1 + 72) == 2)
      || (GuidEntry = EtwpFindGuidEntry((_QWORD *)(a1 + 40))) == 0LL
      && (!*(_DWORD *)(a1 + 72) || (GuidEntry = (_QWORD *)EtwpAllocateUmGuidEntry(a1 + 40)) == 0LL) )
    {
      v15 = v34;
      goto LABEL_13;
    }
    EtwpAcquireGuidEntryExclusive(GuidEntry, v22);
    v24 = *(_BYTE *)(a1 + 78);
    v25 = (char *)GuidEntry + 78;
    v26 = 0;
    v27 = 0;
    while ( !*(v25 - 2) || *v25 != v24 )
    {
      ++v27;
      v25 += 24;
      if ( v27 >= 4 )
      {
        v28 = 0LL;
        goto LABEL_35;
      }
    }
    v28 = &GuidEntry[2 * v27 + 7 + v27];
LABEL_35:
    if ( !v28 )
    {
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_43;
      v29 = 0LL;
      v30 = (char *)GuidEntry + 76;
      do
      {
        if ( !*v30 )
        {
          v31 = &GuidEntry[2 * v29 + 7 + v29];
          goto LABEL_40;
        }
        v29 = (unsigned int)(v29 + 1);
        v30 += 24;
      }
      while ( (unsigned int)v29 < 4 );
      v31 = 0LL;
LABEL_40:
      if ( !v31 )
        goto LABEL_43;
      *((_BYTE *)v31 + 22) = v24;
      EtwpReferenceUmGuidEntry(GuidEntry);
    }
    *v28 = *(_QWORD *)(a1 + 96);
    v28[1] = *(_QWORD *)(a1 + 88);
    *((_BYTE *)v28 + 21) = *(_BYTE *)(a1 + 76);
    *((_DWORD *)v28 + 4) = *(_DWORD *)(a1 + 80);
    *((_BYTE *)v28 + 20) = *(_DWORD *)(a1 + 72) != v26;
LABEL_43:
    if ( *(_BYTE *)(a1 + 107) == 1 )
    {
      GuidEntry[19] = *(_QWORD *)(a1 + 104);
      *((_DWORD *)GuidEntry + 40) = *(_DWORD *)(a1 + 72);
    }
    *((_DWORD *)GuidEntry + 12) = v26;
    RtlReleaseSRWLockExclusive(GuidEntry + 5);
    EtwpDereferenceUmGuidEntry(GuidEntry);
    v15 = v34;
    v7 = 1;
LABEL_7:
    if ( v4 || v7 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v16 = v33[0];
  v15 = v34;
LABEL_8:
  if ( v36 == 1 && !EtwpReplySend )
  {
    if ( v3 )
    {
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 72;
    }
    if ( *(_DWORD *)a1 == 3 )
      *(_DWORD *)(a1 + 4) = 72;
    *(_DWORD *)(a1 + 16) = v32;
    *(_BYTE *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 24) = v16;
    v3 = EtwReplyNotification(a1);
  }
LABEL_9:
  if ( v15 )
  {
    *(_DWORD *)(NextRegistration + 80) = 0;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(NextRegistration + 64));
    RtlReleaseSRWLockShared((volatile signed __int64 *)(NextRegistration + 72));
  }
  return v3;
}
