/*
 * XREFs of EtwpEnableAutoLoggerProviders @ 0x1405AE838
 * Callers:
 *     EtwpEnableKeyProviders @ 0x1405AE660 (EtwpEnableKeyProviders.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140430830 (RtlNtStatusToDosError.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpEnableTrace @ 0x1405524C8 (EtwpEnableTrace.c)
 *     RtlWriteRegistryValue @ 0x140556350 (RtlWriteRegistryValue.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405AED28 (EtwpGetAutoLoggerProviderFilter.c)
 */

void __fastcall EtwpEnableAutoLoggerProviders(__int64 a1, unsigned int a2, const WCHAR *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v7; // rcx
  void *v10; // rsi
  void *v11; // rdi
  unsigned int v12; // ebx
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
  __int64 v23; // rcx
  size_t Size; // [rsp+60h] [rbp-A0h]
  size_t v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v27; // [rsp+84h] [rbp-7Ch] BYREF
  size_t v28; // [rsp+88h] [rbp-78h] BYREF
  int v29; // [rsp+90h] [rbp-70h] BYREF
  char v30[4]; // [rsp+94h] [rbp-6Ch] BYREF
  ULONG ValueData; // [rsp+98h] [rbp-68h] BYREF
  size_t cbDest; // [rsp+A0h] [rbp-60h]
  void *Src; // [rsp+A8h] [rbp-58h] BYREF
  void *v34; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v38[2]; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING v39; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  GUID Guid; // [rsp+130h] [rbp+30h] BYREF
  UNICODE_STRING UnicodeString[3]; // [rsp+140h] [rbp+40h] BYREF
  int v44; // [rsp+170h] [rbp+70h] BYREF
  int *v45; // [rsp+178h] [rbp+78h]
  int v46; // [rsp+180h] [rbp+80h] BYREF
  int *v47; // [rsp+188h] [rbp+88h]
  int v48; // [rsp+190h] [rbp+90h] BYREF
  char *v49; // [rsp+198h] [rbp+98h]
  int v50; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int *v51; // [rsp+1A8h] [rbp+A8h]
  int v52; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v53; // [rsp+1B8h] [rbp+B8h]
  int v54; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 *v55; // [rsp+1C8h] [rbp+C8h]
  _QWORD v56[140]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v4 = -1LL;
  v5 = a2;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a4 + 2 * v7) );
  do
    ++v4;
  while ( a3[v4] );
  v26 = 0;
  *(_DWORD *)v30 = 0;
  v10 = 0LL;
  v27 = 0;
  v11 = 0LL;
  v29 = 0;
  v12 = 2 * (v4 + v7) + 106;
  v36 = 0LL;
  v37 = 0LL;
  ValueData = 0;
  KeyHandle = 0LL;
  Src = 0LL;
  v34 = 0LL;
  v28 = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  memset(v56, 0, sizeof(v56));
  memset(UnicodeString, 0, sizeof(UnicodeString));
  v38[0] = 0LL;
  v38[1] = 0LL;
  cbDest = v12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v12, 0x50777445u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( !RtlStringCbPrintfW(
            PoolWithTag,
            cbDest,
            L"%ws%ws\\%ws",
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\",
            a4,
            a3) )
    {
      RtlInitUnicodeString(&v39, v14);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v39;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        LODWORD(v56[4]) = 4;
        v56[0] = EtwpQueryRegistryCallback;
        v56[7] = EtwpQueryRegistryCallback;
        v56[3] = &v44;
        v56[14] = EtwpQueryRegistryCallback;
        v56[2] = L"Enabled";
        v56[21] = EtwpQueryRegistryCallback;
        v45 = &v26;
        v56[10] = &v46;
        v56[9] = L"EnableProperty";
        v47 = &v29;
        v56[17] = &v48;
        v56[16] = L"EnableLevel";
        v49 = v30;
        v56[24] = &v50;
        v56[23] = L"EnableFlags";
        v51 = &v27;
        v56[31] = &v52;
        v56[30] = L"MatchAnyKeyword";
        v53 = &v36;
        v56[38] = &v54;
        v56[37] = L"MatchAllKeyword";
        v56[28] = EtwpQueryRegistryCallback;
        LODWORD(v56[32]) = 11;
        v52 = 11;
        v56[35] = EtwpQueryRegistryCallback;
        LODWORD(v56[39]) = 11;
        v54 = 11;
        v55 = &v37;
        v44 = 4;
        LODWORD(v56[11]) = 4;
        v46 = 4;
        LODWORD(v56[18]) = 4;
        v48 = 4;
        LODWORD(v56[25]) = 4;
        v50 = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v56, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_39;
        if ( !v26 )
        {
LABEL_21:
          if ( RegistryValues >= 0 )
          {
LABEL_22:
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, L"Status", 4u, &ValueData, 4u);
            goto LABEL_23;
          }
LABEL_39:
          ValueData = RtlNtStatusToDosError(RegistryValues);
          goto LABEL_22;
        }
        cbDest = 0LL;
        if ( (_DWORD)v5 )
          LOWORD(cbDest) = v5;
        else
          LOWORD(cbDest) = -1;
        EtwpGetAutoLoggerProviderFilter(v14, UnicodeString, v38, &Src, (char *)&v28 + 4, &v34, &v28);
        RegistryValues = RtlGUIDFromString(&DestinationString, &Guid);
        if ( RegistryValues < 0 )
        {
          v10 = Src;
          v11 = v34;
          goto LABEL_39;
        }
        v16 = *(_QWORD *)&Guid.Data1 - 0x4FA775A3E02A841CLL;
        if ( *(_QWORD *)&Guid.Data1 == 0x4FA775A3E02A841CLL )
          v16 = *(_QWORD *)Guid.Data4 - 0x237F9BCF09AEC8AFLL;
        if ( v16 )
        {
          v17 = *(_QWORD *)&Guid.Data1 - s_ProviderThreatInt;
          if ( *(_QWORD *)&Guid.Data1 == s_ProviderThreatInt )
            v17 = *(_QWORD *)Guid.Data4 - 0x44D38D4D0F04D8F1LL;
          if ( v17 )
          {
LABEL_18:
            v18 = v36;
            if ( !v36 )
            {
              v18 = v27;
              v36 = v27;
            }
            v11 = v34;
            v10 = Src;
            LODWORD(Size) = HIDWORD(v28);
            LODWORD(v25) = v28;
            RegistryValues = EtwpEnableTrace(
                               a1,
                               (__int128 *)&Guid,
                               0LL,
                               cbDest,
                               1,
                               v30[0],
                               v18,
                               v37,
                               v29,
                               (const void **)UnicodeString,
                               (const void **)v38,
                               Src,
                               Size,
                               v34,
                               v25);
            goto LABEL_21;
          }
        }
        if ( a1 == EtwpHostSiloState )
        {
          if ( (unsigned int)v5 >= 0x40 )
            v23 = 1LL;
          else
            v23 = *(_QWORD *)(a1 + 8 * v5 + 920);
          if ( (v23 & 1) != 0 )
            goto LABEL_18;
          if ( !*(_QWORD *)(v23 + 160) )
          {
            _InterlockedOr((volatile signed __int32 *)(v23 + 816), 0x4000u);
            goto LABEL_18;
          }
        }
        v10 = Src;
        v11 = v34;
      }
    }
  }
LABEL_23:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  v19 = UnicodeString;
  v20 = 3LL;
  do
  {
    RtlFreeUnicodeString(v19++);
    --v20;
  }
  while ( v20 );
  v21 = v38;
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
