/*
 * XREFs of PiUEventHandleRegistration @ 0x14058C23C
 * Callers:
 *     PiUEventHandleIoctl @ 0x14058BDEC (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     RtlStringCchLengthW @ 0x14006D220 (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x140075370 (PiUEventHashStringIntoBucket.c)
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     PiUEventHashGuidIntoBucket @ 0x1400D3D00 (PiUEventHashGuidIntoBucket.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     SeCaptureSubjectContext @ 0x1404C8F50 (SeCaptureSubjectContext.c)
 *     PiDmGetObject @ 0x1405074E8 (PiDmGetObject.c)
 *     PiUEventInitClientRegistrationContext @ 0x140542C18 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x14058A0FC (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14058BC18 (PiUEventFreeClientRegistrationContext.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _QWORD *inited; // rdi
  char v6; // bp
  __int64 v7; // rsi
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  void **v12; // r14
  size_t v13; // r11
  int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // eax
  char *v18; // rcx
  char **v19; // rax
  int v21; // ecx
  int v22; // ecx
  char *v23; // rax
  char **v24; // rcx
  int v25; // ecx
  int v26; // ecx
  unsigned int v27; // eax
  int Object; // eax
  unsigned int v29; // eax
  char *v30; // rdx
  char **v31; // rax
  _QWORD v32[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v32[0] = 0LL;
  inited = 0LL;
  v6 = 0;
  v7 = a2;
  if ( !a2 || (_DWORD)a3 != 936 || a4 != 8 )
  {
    v9 = -1073741811;
    goto LABEL_26;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    v9 = -1073741670;
LABEL_56:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)v9;
  }
  inited[6] = PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)v7, 0x104uLL, &pcchLength);
  if ( v9 < 0 )
    goto LABEL_53;
  if ( *(_DWORD *)(v7 + 520) != 416 )
    goto LABEL_53;
  v10 = *(_DWORD *)(v7 + 528);
  if ( v10 >= 4 )
    goto LABEL_53;
  v11 = *(_DWORD *)(v7 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_53;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_53;
  v12 = (void **)(v7 + 536);
  if ( v10 == 1 && (((unsigned __int64)*v12 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_53;
  v13 = 200LL;
  if ( v10 == 2 )
  {
    v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(v7 + 536), 0xC8uLL, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_53;
  }
  if ( *(_DWORD *)(v7 + 528) == 3 )
  {
    v9 = RtlStringCchLengthW((STRSAFE_PCNZWCH)(v7 + 536), v13, &pcchLength);
    if ( v9 < 0 )
      goto LABEL_53;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(v7 + 528);
  v14 = *(_DWORD *)(v7 + 528);
  if ( v14 )
  {
    v21 = v14 - 1;
    if ( v21 )
    {
      v25 = v21 - 1;
      if ( !v25 || v25 == 1 )
      {
        if ( (*(_DWORD *)(v7 + 524) & 2) != 0 )
          goto LABEL_17;
        Object = PiDmGetObject(1LL, v7 + 536, inited + 3);
        v9 = Object;
        if ( Object >= 0 )
          goto LABEL_17;
LABEL_54:
        if ( inited )
        {
          LOBYTE(a2) = v6;
          PiUEventFreeClientRegistrationContext((char *)inited, a2, a3);
        }
        goto LABEL_56;
      }
    }
    else if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*v12, v32, &pcchLength) >= 0 )
    {
      v9 = PiDmGetObject(1LL, *(_QWORD *)(v32[0] + 8LL), inited + 3);
      if ( v9 >= 0 )
      {
        inited[4] = pcchLength;
        *((_BYTE *)inited + 40) = 0;
        goto LABEL_17;
      }
      goto LABEL_54;
    }
LABEL_53:
    v9 = -1073741811;
    goto LABEL_54;
  }
  if ( (*(_DWORD *)(v7 + 524) & 1) == 0 )
    *(_OWORD *)(inited + 3) = *(_OWORD *)v12;
LABEL_17:
  v15 = a5;
  *(_QWORD *)v7 = inited[11];
  *(_QWORD *)(v15 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v16 = *(_DWORD *)(v7 + 528);
  if ( !v16 )
  {
    if ( (*(_DWORD *)(v7 + 524) & 1) != 0 )
      v17 = 13;
    else
      v17 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(v7 + 536));
    v18 = (char *)&PiUEventDevInterfaceClientList + 16 * v17;
    v19 = (char **)*((_QWORD *)v18 + 1);
    if ( *v19 != v18 )
      __fastfail(3u);
    ++PiUEventDevInterfaceClientCount;
LABEL_22:
    *inited = v18;
    inited[1] = v19;
    *v19 = (char *)inited;
    *((_QWORD *)v18 + 1) = inited;
    goto LABEL_23;
  }
  v22 = v16 - 1;
  if ( !v22 )
  {
    v23 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(inited[3] + 16LL));
    v24 = (char **)*((_QWORD *)v23 + 1);
    if ( *v24 != v23 )
      __fastfail(3u);
    ++PiUEventDevHandleClientCount;
    *inited = v23;
    inited[1] = v24;
    *v24 = (char *)inited;
    *((_QWORD *)v23 + 1) = inited;
    goto LABEL_23;
  }
  v26 = v22 - 1;
  if ( !v26 )
  {
    if ( (*(_DWORD *)(v7 + 524) & 2) != 0 )
      v27 = 13;
    else
      v27 = PiUEventHashStringIntoBucket((PCWSTR)(v7 + 536));
    v18 = (char *)&PiUEventDevInstanceClientList + 16 * v27;
    v19 = (char **)*((_QWORD *)v18 + 1);
    if ( *v19 != v18 )
      __fastfail(3u);
    ++PiUEventDevInstanceClientCount;
    goto LABEL_22;
  }
  if ( v26 != 1 )
  {
    v9 = -1073741811;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v7 + 524) & 2) != 0 )
    v29 = 13;
  else
    v29 = PiUEventHashStringIntoBucket((PCWSTR)(v7 + 536));
  v30 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v29;
  v31 = (char **)*((_QWORD *)v30 + 1);
  if ( *v31 != v30 )
    __fastfail(3u);
  ++PiUEventDevInstancePropertyClientCount;
  *inited = v30;
  inited[1] = v31;
  *v31 = (char *)inited;
  *((_QWORD *)v30 + 1) = inited;
LABEL_23:
  v6 = 1;
LABEL_24:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( v9 < 0 )
    goto LABEL_54;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_26:
  if ( v9 < 0 )
    goto LABEL_54;
  return (unsigned int)v9;
}
