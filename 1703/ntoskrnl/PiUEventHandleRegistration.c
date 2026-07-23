/*
 * XREFs of PiUEventHandleRegistration @ 0x1404A4F10
 * Callers:
 *     PiUEventHandleIoctl @ 0x1404A539C (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     PiUEventHashStringIntoBucket @ 0x14003DC1C (PiUEventHashStringIntoBucket.c)
 *     PiUEventHashGuidIntoBucket @ 0x14003DC9C (PiUEventHashGuidIntoBucket.c)
 *     RtlStringCchLengthW @ 0x14004C7E8 (RtlStringCchLengthW.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     PiUEventGetDeviceInstanceIdFromUserHandle @ 0x140422530 (PiUEventGetDeviceInstanceIdFromUserHandle.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140457B18 (PiUEventFreeClientRegistrationContext.c)
 *     PiDmGetObject @ 0x140487390 (PiDmGetObject.c)
 *     PiUEventInitClientRegistrationContext @ 0x1404A4498 (PiUEventInitClientRegistrationContext.c)
 *     SeCaptureSubjectContext @ 0x14050C4F0 (SeCaptureSubjectContext.c)
 */

__int64 __fastcall PiUEventHandleRegistration(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  _WNF_STATE_NAME *inited; // rdi
  char v6; // bp
  int Object; // ebx
  int v10; // ecx
  int v11; // eax
  size_t v12; // r11
  int v13; // ecx
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // rcx
  _WNF_STATE_NAME **v18; // rax
  int v20; // ecx
  int v21; // ecx
  char *v22; // rax
  _WNF_STATE_NAME **v23; // rcx
  int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  char *v27; // rdx
  _WNF_STATE_NAME **v28; // rax
  int v29; // eax
  _QWORD v30[7]; // [rsp+20h] [rbp-38h] BYREF
  size_t pcchLength; // [rsp+68h] [rbp+10h] BYREF

  v30[0] = 0LL;
  inited = 0LL;
  v6 = 0;
  if ( !a2 || a3 != 936 || a4 != 8 )
  {
    Object = -1073741811;
    goto LABEL_26;
  }
  inited = PiUEventInitClientRegistrationContext();
  if ( !inited )
  {
    Object = -1073741670;
LABEL_68:
    *(_QWORD *)(a1 + 32) = 0LL;
    return (unsigned int)Object;
  }
  inited[6] = (_WNF_STATE_NAME)PsGetCurrentThreadProcessId();
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&inited[7]);
  Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)a2, 0x104uLL, &pcchLength);
  if ( Object < 0 )
    goto LABEL_36;
  if ( *(_DWORD *)(a2 + 520) != 416 )
    goto LABEL_36;
  v10 = *(_DWORD *)(a2 + 528);
  if ( v10 >= 4 )
    goto LABEL_36;
  v11 = *(_DWORD *)(a2 + 524);
  if ( (v11 & 0xFFFFFFFC) != 0 || (v11 & 1) != 0 && v10 )
    goto LABEL_36;
  if ( (v11 & 2) != 0 && (unsigned int)(v10 - 2) > 1 )
    goto LABEL_36;
  if ( v10 == 1 && ((*(_QWORD *)(a2 + 536) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    goto LABEL_36;
  v12 = 200LL;
  if ( v10 == 2 )
  {
    Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), 0xC8uLL, &pcchLength);
    if ( Object < 0 )
      goto LABEL_36;
  }
  if ( *(_DWORD *)(a2 + 528) == 3 )
  {
    Object = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a2 + 536), v12, &pcchLength);
    if ( Object < 0 )
      goto LABEL_36;
  }
  inited[16].Data[1] = *(_DWORD *)(a2 + 528);
  v13 = *(_DWORD *)(a2 + 528);
  if ( !v13 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) == 0 )
      *(_OWORD *)inited[3].Data = *(_OWORD *)(a2 + 536);
    goto LABEL_17;
  }
  v20 = v13 - 1;
  if ( !v20 )
  {
    if ( (int)PiUEventGetDeviceInstanceIdFromUserHandle(*(void **)(a2 + 536), v30, &pcchLength) >= 0 )
    {
      Object = PiDmGetObject(1, *(_WORD **)(v30[0] + 8LL), (__int64 *)&inited[3]);
      if ( Object < 0 )
        goto LABEL_66;
      inited[4] = (_WNF_STATE_NAME)pcchLength;
      LOBYTE(inited[5].Data[0]) = 0;
      goto LABEL_17;
    }
LABEL_36:
    Object = -1073741811;
    goto LABEL_66;
  }
  if ( (unsigned int)(v20 - 1) > 1 )
    goto LABEL_36;
  if ( (*(_DWORD *)(a2 + 524) & 2) == 0 )
  {
    v29 = PiDmGetObject(1, (_WORD *)(a2 + 536), (__int64 *)&inited[3]);
    Object = v29;
    if ( v29 < 0 )
    {
LABEL_66:
      if ( inited )
        PiUEventFreeClientRegistrationContext((char *)inited, v6);
      goto LABEL_68;
    }
  }
LABEL_17:
  v14 = a5;
  *(_WNF_STATE_NAME *)a2 = inited[11];
  *(_QWORD *)(v14 + 8) = 8LL;
  ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
  v15 = *(_DWORD *)(a2 + 528);
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 1) != 0 )
      v16 = 13;
    else
      v16 = PiUEventHashGuidIntoBucket((unsigned __int8 *)(a2 + 536));
    v17 = (char *)&PiUEventDevInterfaceClientList + 16 * v16;
    v18 = (_WNF_STATE_NAME **)*((_QWORD *)v17 + 1);
    if ( *v18 != (_WNF_STATE_NAME *)v17 )
      __fastfail(3u);
    ++PiUEventDevInterfaceClientCount;
LABEL_22:
    *inited = (_WNF_STATE_NAME)v17;
    inited[1] = (_WNF_STATE_NAME)v18;
    *v18 = inited;
    *((_QWORD *)v17 + 1) = inited;
    goto LABEL_23;
  }
  v21 = v15 - 1;
  if ( !v21 )
  {
    v22 = (char *)&PiUEventDevHandleClientList
        + 16 * (unsigned int)PiUEventHashStringIntoBucket(*(PCWSTR *)(*(_QWORD *)&inited[3] + 16LL));
    v23 = (_WNF_STATE_NAME **)*((_QWORD *)v22 + 1);
    if ( *v23 != (_WNF_STATE_NAME *)v22 )
      __fastfail(3u);
    ++PiUEventDevHandleClientCount;
    *inited = (_WNF_STATE_NAME)v22;
    inited[1] = (_WNF_STATE_NAME)v23;
    *v23 = inited;
    *((_QWORD *)v22 + 1) = inited;
    goto LABEL_23;
  }
  v24 = v21 - 1;
  if ( !v24 )
  {
    if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
      v25 = 13;
    else
      v25 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
    v17 = (char *)&PiUEventDevInstanceClientList + 16 * v25;
    v18 = (_WNF_STATE_NAME **)*((_QWORD *)v17 + 1);
    if ( *v18 != (_WNF_STATE_NAME *)v17 )
      __fastfail(3u);
    ++PiUEventDevInstanceClientCount;
    goto LABEL_22;
  }
  if ( v24 != 1 )
  {
    Object = -1073741811;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a2 + 524) & 2) != 0 )
    v26 = 13;
  else
    v26 = PiUEventHashStringIntoBucket((PCWSTR)(a2 + 536));
  v27 = (char *)&PiUEventDevInstancePropertyClientList + 16 * v26;
  v28 = (_WNF_STATE_NAME **)*((_QWORD *)v27 + 1);
  if ( *v28 != (_WNF_STATE_NAME *)v27 )
    __fastfail(3u);
  ++PiUEventDevInstancePropertyClientCount;
  *inited = (_WNF_STATE_NAME)v27;
  inited[1] = (_WNF_STATE_NAME)v28;
  *v28 = inited;
  *((_QWORD *)v27 + 1) = inited;
LABEL_23:
  v6 = 1;
LABEL_24:
  KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  if ( Object < 0 )
    goto LABEL_66;
  *(_QWORD *)(a1 + 32) = inited;
LABEL_26:
  if ( Object < 0 )
    goto LABEL_66;
  return (unsigned int)Object;
}
