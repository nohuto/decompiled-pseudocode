/*
 * XREFs of SdbpCheckMatchingRegistryEntry @ 0x14076E53C
 * Callers:
 *     SdbpCheckMatchingRegistry @ 0x14076E410 (SdbpCheckMatchingRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1400F9E18 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     memcmp @ 0x14015F370 (memcmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwQuerySystemInformation @ 0x14017DF80 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslStringPatternMatchW @ 0x1404F5024 (AslStringPatternMatchW.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryEntry(
        __int64 a1,
        const wchar_t *a2,
        int a3,
        WCHAR *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  wchar_t *v12; // rsi
  _DWORD *v13; // r14
  unsigned int v14; // edi
  const char *v15; // r9
  int v16; // r8d
  const WCHAR *v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  const wchar_t *v22; // r15
  bool v23; // zf
  wchar_t *v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  wchar_t *v30; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v34; // [rsp+50h] [rbp-B0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  __int64 SystemInformation; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+90h] [rbp-70h]
  wchar_t pszDest[264]; // [rsp+A0h] [rbp-60h] BYREF

  v34 = a4;
  ResultLength = 0;
  pszDest[0] = 0;
  *a9 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SystemInformation = 0LL;
  v37 = 0;
  KeyHandle = 0LL;
  if ( RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\REGISTRY\\MACHINE\\%s", a1) < 0 )
  {
    v15 = "Failed to construct full key path";
    v16 = 929;
LABEL_3:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryEntry", v16, (_DWORD)v15);
    goto LABEL_34;
  }
  RtlInitUnicodeString(&DestinationString, pszDest);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    goto LABEL_23;
  if ( ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingRegistryEntry",
      964,
      (unsigned int)"Failed to get processor architecture [%x]");
    goto LABEL_34;
  }
  if ( (_WORD)SystemInformation == 9 && ZwOpenKey(&KeyHandle, 0x20219u, &ObjectAttributes) >= 0 )
  {
LABEL_23:
    if ( !a2 || !*a2 )
      goto LABEL_32;
    if ( wcsicmp(a2, L"dbRegistryDefaultName") )
      v17 = a2;
    else
      v17 = 0LL;
    RtlInitUnicodeString(&DestinationString, v17);
    v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
    if ( v18 < 0 && v18 != -2147483643 && v18 != -1073741789 )
      goto LABEL_33;
    v13 = AslAlloc(v19, ResultLength);
    if ( !v13 )
    {
      v16 = 1034;
LABEL_19:
      v15 = "Failed to allocate memory";
      goto LABEL_3;
    }
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v13, ResultLength, &ResultLength) < 0 )
    {
      v15 = "Failed to read value";
      v16 = 1045;
      goto LABEL_3;
    }
    v21 = v13[1];
    if ( !a3 )
      goto LABEL_32;
    if ( v21 == a3 )
    {
      v22 = (const wchar_t *)((char *)v13 + (unsigned int)v13[2]);
      if ( !v21 )
        goto LABEL_67;
      if ( v21 > 2 )
      {
        switch ( v21 )
        {
          case 3u:
            if ( Size != v13[3] )
              goto LABEL_33;
            v23 = memcmp(Buf1, (char *)v13 + (unsigned int)v13[2], Size) == 0;
            break;
          case 4u:
            v23 = a5 == *(_DWORD *)v22;
            break;
          case 7u:
            v25 = (wchar_t *)AslAlloc(v20, (unsigned int)v13[3]);
            v12 = v25;
            if ( !v25 )
            {
              v16 = 1105;
              goto LABEL_19;
            }
            *v25 = 0;
            while ( *v22 )
            {
              if ( *v12 )
              {
                v27 = -1LL;
                do
                  ++v27;
                while ( v12[v27] );
                if ( RtlStringCchCatW(v12, (unsigned int)v13[3] - v27, L";") < 0 )
                {
                  v15 = "Failed to copy delimiter";
                  v16 = 1121;
                  goto LABEL_3;
                }
                v28 = -1LL;
                do
                  ++v28;
                while ( v12[v28] );
                v26 = RtlStringCchCatW(v12, (unsigned int)v13[3] - v28, v22);
              }
              else
              {
                v26 = RtlStringCchCopyW(v12, (unsigned int)v13[3], v22);
              }
              if ( v26 < 0 )
              {
                v15 = "Failed to copy string";
                v16 = 1130;
                goto LABEL_3;
              }
              v29 = -1LL;
              do
                ++v29;
              while ( v22[v29] );
              v22 += v29 + 1;
            }
LABEL_57:
            if ( !(unsigned int)AslStringPatternMatchW(v34, v12) )
              goto LABEL_33;
            goto LABEL_32;
          case 0xBu:
            v23 = a6 == *(_QWORD *)v22;
            break;
          default:
LABEL_67:
            v15 = "Unknown registry value data type";
            v16 = 1191;
            goto LABEL_3;
        }
        if ( v23 )
        {
LABEL_32:
          *a9 = 1;
          goto LABEL_33;
        }
        goto LABEL_33;
      }
      v30 = (wchar_t *)AslAlloc(v20, (unsigned int)v13[3] + 2LL);
      v12 = v30;
      if ( !v30 )
      {
        v16 = 1082;
        goto LABEL_19;
      }
      memmove(v30, v22, (unsigned int)v13[3]);
      v12[(unsigned __int64)(unsigned int)v13[3] >> 1] = 0;
      goto LABEL_57;
    }
  }
LABEL_33:
  v14 = 1;
LABEL_34:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x74705041u);
  return v14;
}
