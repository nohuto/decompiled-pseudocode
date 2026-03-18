/*
 * XREFs of EtwpEnableAutoLoggerProviders @ 0x1405A8348
 * Callers:
 *     EtwpEnableKeyProviders @ 0x1405A8170 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x14056B830 (RtlNtStatusToDosError.c)
 *     RtlWriteRegistryValue @ 0x14058C9E0 (RtlWriteRegistryValue.c)
 *     EtwpEnableTrace @ 0x1405A88D0 (EtwpEnableTrace.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405A8A70 (EtwpGetAutoLoggerProviderFilter.c)
 */

void __fastcall EtwpEnableAutoLoggerProviders(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v7; // rcx
  void *v8; // r15
  void *v9; // r14
  void *v10; // rsi
  unsigned int v11; // ebx
  void *v12; // rdi
  wchar_t *PoolWithTag; // rax
  WCHAR *v14; // rbx
  NTSTATUS RegistryValues; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  UNICODE_STRING *v19; // rbx
  __int64 v20; // rdi
  __int64 *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // rdx
  size_t Size; // [rsp+60h] [rbp-B0h]
  size_t v25; // [rsp+70h] [rbp-A0h]
  size_t v26; // [rsp+80h] [rbp-90h]
  int v27; // [rsp+90h] [rbp-80h] BYREF
  unsigned int v28; // [rsp+94h] [rbp-7Ch] BYREF
  size_t v29; // [rsp+98h] [rbp-78h] BYREF
  int v30; // [rsp+A0h] [rbp-70h] BYREF
  int v31; // [rsp+A4h] [rbp-6Ch] BYREF
  char v32[4]; // [rsp+A8h] [rbp-68h] BYREF
  ULONG ValueData; // [rsp+ACh] [rbp-64h] BYREF
  int v34[2]; // [rsp+B0h] [rbp-60h]
  void *Src; // [rsp+B8h] [rbp-58h] BYREF
  void *v36; // [rsp+C0h] [rbp-50h] BYREF
  void *v37; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-28h] BYREF
  __int64 v42[2]; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v43; // [rsp+100h] [rbp-10h]
  UNICODE_STRING v44; // [rsp+108h] [rbp-8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+118h] [rbp+8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+128h] [rbp+18h] BYREF
  GUID cbDest; // [rsp+158h] [rbp+48h] BYREF
  UNICODE_STRING UnicodeString[3]; // [rsp+168h] [rbp+58h] BYREF
  int v49; // [rsp+1A0h] [rbp+90h] BYREF
  int *v50; // [rsp+1A8h] [rbp+98h]
  int v51; // [rsp+1B0h] [rbp+A0h] BYREF
  int *v52; // [rsp+1B8h] [rbp+A8h]
  int v53; // [rsp+1C0h] [rbp+B0h] BYREF
  char *v54; // [rsp+1C8h] [rbp+B8h]
  int v55; // [rsp+1D0h] [rbp+C0h] BYREF
  unsigned int *v56; // [rsp+1D8h] [rbp+C8h]
  int v57; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 *v58; // [rsp+1E8h] [rbp+D8h]
  int v59; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 *v60; // [rsp+1F8h] [rbp+E8h]
  _QWORD v61[140]; // [rsp+2E0h] [rbp+1D0h] BYREF

  v4 = -1LL;
  v5 = a2;
  v43 = a4;
  v7 = -1LL;
  *(_QWORD *)v34 = a3;
  do
    ++v7;
  while ( *(_WORD *)(a4 + 2 * v7) );
  do
    ++v4;
  while ( a3[v4] );
  v27 = 0;
  *(_DWORD *)v32 = 0;
  v8 = 0LL;
  v28 = 0;
  v9 = 0LL;
  v31 = 0;
  v10 = 0LL;
  v11 = 2 * (v4 + v7) + 106;
  v40 = 0LL;
  v41 = 0LL;
  ValueData = 0;
  v12 = 0LL;
  KeyHandle = 0LL;
  Src = 0LL;
  v30 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v29 = 0LL;
  v38 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v61, 0, sizeof(v61));
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v42[0] = 0LL;
  v42[1] = 0LL;
  *(_QWORD *)&cbDest.Data1 = v11;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v11, 0x50777445u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(
            PoolWithTag,
            *(size_t *)&cbDest.Data1,
            L"%ws%ws\\%ws",
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\",
            v43,
            *(_QWORD *)v34) )
    {
      RtlInitUnicodeString(&v44, v14);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &v44;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        LODWORD(v61[4]) = 4;
        v49 = 4;
        v61[3] = &v49;
        LODWORD(v61[11]) = 4;
        v61[2] = L"Enabled";
        v51 = 4;
        v50 = &v27;
        v61[10] = &v51;
        v61[9] = L"EnableProperty";
        v52 = &v31;
        v61[17] = &v53;
        v61[16] = L"EnableLevel";
        v54 = v32;
        v61[24] = &v55;
        v61[23] = L"EnableFlags";
        v56 = &v28;
        v61[31] = &v57;
        v61[30] = L"MatchAnyKeyword";
        v58 = &v40;
        v61[38] = &v59;
        LODWORD(v61[18]) = 4;
        v53 = 4;
        LODWORD(v61[25]) = 4;
        v55 = 4;
        v61[37] = L"MatchAllKeyword";
        v61[0] = &EtwpQueryRegistryCallback;
        v61[7] = &EtwpQueryRegistryCallback;
        v61[14] = &EtwpQueryRegistryCallback;
        v61[21] = &EtwpQueryRegistryCallback;
        v61[28] = &EtwpQueryRegistryCallback;
        LODWORD(v61[32]) = 11;
        v57 = 11;
        v61[35] = &EtwpQueryRegistryCallback;
        LODWORD(v61[39]) = 11;
        v59 = 11;
        v60 = &v41;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v61, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_52;
        if ( !v27 )
        {
LABEL_21:
          if ( RegistryValues >= 0 )
          {
LABEL_22:
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"Status", 4u, &ValueData, 4u);
            goto LABEL_23;
          }
LABEL_52:
          ValueData = RtlNtStatusToDosError(RegistryValues);
          goto LABEL_22;
        }
        *(_QWORD *)v34 = 0LL;
        if ( (_DWORD)v5 )
          LOWORD(v34[0]) = v5;
        else
          LOWORD(v34[0]) = -1;
        EtwpGetAutoLoggerProviderFilter(v14, UnicodeString, v42, &Src, &v30, &v36, (char *)&v29 + 4, &v37, &v29, &v38);
        RegistryValues = RtlGUIDFromString(&DestinationString, &cbDest);
        if ( RegistryValues < 0 )
        {
          v8 = Src;
          v9 = v36;
          v10 = v37;
          v12 = (void *)v38;
          goto LABEL_52;
        }
        v16 = *(_QWORD *)&cbDest.Data1 - 0x4FA775A3E02A841CLL;
        if ( *(_QWORD *)&cbDest.Data1 == 0x4FA775A3E02A841CLL )
          v16 = *(_QWORD *)cbDest.Data4 - 0x237F9BCF09AEC8AFLL;
        if ( v16 )
        {
          v17 = *(_QWORD *)&cbDest.Data1 - s_ProviderThreatInt;
          if ( *(_QWORD *)&cbDest.Data1 == s_ProviderThreatInt )
            v17 = *(_QWORD *)cbDest.Data4 - 0x44D38D4D0F04D8F1LL;
          if ( v17 )
          {
LABEL_18:
            v18 = v40;
            if ( !v40 )
            {
              v18 = v28;
              v40 = v28;
            }
            v12 = (void *)v38;
            v10 = v37;
            v9 = v36;
            v8 = Src;
            LODWORD(v25) = HIDWORD(v29);
            LODWORD(v26) = v29;
            LODWORD(Size) = v30;
            RegistryValues = EtwpEnableTrace(
                               a1,
                               (int)&cbDest,
                               0,
                               v34[0],
                               1,
                               v32[0],
                               v18,
                               v41,
                               v31,
                               (__int64)UnicodeString,
                               (__int64)v42,
                               Src,
                               Size,
                               v36,
                               v25,
                               v37,
                               v26,
                               v38);
            goto LABEL_21;
          }
        }
        if ( a1 == EtwpHostSiloState )
        {
          if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 8) )
            v23 = 1LL;
          else
            v23 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 8 * v5);
          if ( (v23 & 1) != 0 )
            goto LABEL_18;
          if ( !*(_QWORD *)(v23 + 176) )
          {
            _InterlockedOr((volatile signed __int32 *)(v23 + 832), 0x4000u);
            goto LABEL_18;
          }
        }
        v8 = Src;
        v9 = v36;
        v10 = v37;
        v12 = (void *)v38;
      }
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  v19 = UnicodeString;
  v20 = 3LL;
  do
  {
    RtlFreeUnicodeString(v19++);
    --v20;
  }
  while ( v20 );
  v21 = v42;
  v22 = 2LL;
  do
  {
    if ( *v21 )
      ExFreePoolWithTag((PVOID)*v21, 0);
    ++v21;
    --v22;
  }
  while ( v22 );
}
