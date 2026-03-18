/*
 * XREFs of PiUEventHandleRegistration @ 0x1405486E8
 * Callers:
 *     PiUEventHandleIoctl @ 0x1405482BC (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     RtlStringCchLengthW @ 0x1400DF440 (RtlStringCchLengthW.c)
 *     PiUEventHashStringIntoBucket @ 0x1400FB37C (PiUEventHashStringIntoBucket.c)
 *     PiUEventHashGuidIntoBucket @ 0x14012B5E8 (PiUEventHashGuidIntoBucket.c)
 *     SeCaptureSubjectContext @ 0x14049D010 (SeCaptureSubjectContext.c)
 *     PiDmGetObject @ 0x140523950 (PiDmGetObject.c)
 *     PiUEventInitClientRegistrationContext @ 0x140548A48 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1405943CC (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14059576C (PiUEventFreeClientRegistrationContext.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  char **inited; // rdi
  int Object; // ebx
  int v9; // ecx
  int v10; // eax
  size_t v11; // r11
  int v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // eax
  char *v16; // rcx
  char **v17; // rax
  int v19; // ecx
  int v20; // ecx
  char *v21; // rax
  char **v22; // rcx
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  unsigned int v27; // eax
  char *v28; // rdx
  char **v29; // rax
  __int64 v30[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v30[0] = 0LL;
  inited = 0LL;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    Object = -1073741811;
    goto LABEL_25;
  }
  inited = (char **)PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    Object = -1073741670;
LABEL_58:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)Object;
  }
  inited[6] = (char *)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(inited + 7));
  Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( Object < 0 )
    goto LABEL_55;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_55;
  v9 = *(_DWORD *)(a2 + 528);
  if ( v9 >= 4 )
    goto LABEL_55;
  v10 = *(_DWORD *)(a2 + 524);
  if ( (v10 & 0xFFFFFFFC) != 0 || (v10 & 1) != 0 && v9 )
    goto LABEL_55;
  if ( (v10 & 2) != 0 && (unsigned int)(v9 - 2) > 1 )
    goto LABEL_55;
  v11 = 200LL;
  if ( v9 == 1 )
  {
    if ( ((*(_QWORD *)(a2 + 536) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
      goto LABEL_55;
  }
  else if ( v9 == 2 )
  {
    Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( Object < 0 )
      goto LABEL_55;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v11, &pcchLength);
    if ( Object < 0 )
      goto LABEL_55;
  }
  *((_DWORD *)inited + 33) = *(_DWORD *)(a2 + 528);
  v12 = *(_DWORD *)(a2 + 528);
  if ( !v12 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)(inited + 3) = *(_OWORD *)(a2 + 536);
    goto LABEL_17;
  }
  v19 = v12 - 1;
  if ( !v19 )
  {
    if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*(_QWORD *)(a2 + 536), v30, &pcchLength) >= 0 )
    {
      Object = PiDmGetObject(1LL, *(_QWORD *)(v30[0] + 8), (__int64 *)inited + 3);
      if ( Object < 0 )
        goto LABEL_56;
      inited[4] = (char *)pcchLength;
      *((_BYTE *)inited + 40) = 0;
      goto LABEL_17;
    }
LABEL_55:
    Object = -1073741811;
    goto LABEL_56;
  }
  v23 = v19 - 1;
  if ( v23 && v23 != 1 )
    goto LABEL_55;
  if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
  {
    v26 = PiDmGetObject(1LL, a2 + 536, (__int64 *)inited + 3);
    Object = v26;
    if ( v26 < 0 )
    {
LABEL_56:
      if ( inited )
        PiUEventFreeClientRegistrationContext(inited);
      goto LABEL_58;
    }
  }
LABEL_17:
  v13 = a5;
  *(_QWORD *)a2 = inited[11];
  *(_QWORD *)(v13 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v14 = *(_DWORD *)(a2 + 528);
  if ( v14 )
  {
    v20 = v14 - 1;
    if ( !v20 )
    {
      v21 = (char *)&PiUEventDevHandleClientList
          + 16 * (unsigned int)PiUEventHashStringIntoBucket(*((PCWSTR *)inited[3] + 2));
      v22 = (char **)*((_QWORD *)v21 + 1);
      if ( *v22 != v21 )
        __fastfail(3u);
      ++PiUEventDevHandleClientCount;
      *inited = v21;
      inited[1] = (char *)v22;
      *v22 = (char *)inited;
      *((_QWORD *)v21 + 1) = inited;
      goto LABEL_23;
    }
    v24 = v20 - 1;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
          v27 = 13;
        else
          v27 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
        v28 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v27;
        v29 = (char **)*((_QWORD *)v28 + 1);
        if ( *v29 != v28 )
          __fastfail(3u);
        ++PiUEventDevInstancePropertyClientCount;
        *inited = v28;
        inited[1] = (char *)v29;
        *v29 = (char *)inited;
        *((_QWORD *)v28 + 1) = inited;
      }
      else
      {
        Object = -1073741811;
      }
      goto LABEL_23;
    }
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v25 = 13;
    else
      v25 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
    v16 = (char *)&PiUEventDevInstanceClientList + 16 * v25;
    v17 = (char **)*((_QWORD *)v16 + 1);
    if ( *v17 != v16 )
      __fastfail(3u);
    ++PiUEventDevInstanceClientCount;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v15 = 13;
    else
      v15 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
    v16 = (char *)&PiUEventDevInterfaceClientList + 16 * v15;
    v17 = (char **)*((_QWORD *)v16 + 1);
    if ( *v17 != v16 )
      __fastfail(3u);
    ++PiUEventDevInterfaceClientCount;
  }
  *inited = v16;
  inited[1] = (char *)v17;
  *v17 = (char *)inited;
  *((_QWORD *)v16 + 1) = inited;
LABEL_23:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( Object < 0 )
    goto LABEL_56;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_25:
  if ( Object < 0 )
    goto LABEL_56;
  return (unsigned int)Object;
}
