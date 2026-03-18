/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x1407D5878
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x1407D568C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1407D64FC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x140161C60 (RtlStringCchCatW.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     memcmp @ 0x140189130 (memcmp.c)
 *     ZwQueryValueKey @ 0x1401A77A0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslStringPatternMatchW @ 0x14061E218 (AslStringPatternMatchW.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        PCWSTR SourceString,
        int a3,
        WCHAR *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  WCHAR *v13; // r14
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  _DWORD *v19; // rax
  __int64 v20; // rcx
  const char *v21; // r9
  int v22; // r8d
  unsigned int v23; // eax
  _DWORD *v24; // rsi
  bool v25; // zf
  WCHAR *v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  WCHAR *v32; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF

  ResultLength = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !SourceString || !*SourceString )
    goto LABEL_27;
  if ( wcsicmp(SourceString, L"dbRegistryDefaultName") )
    v16 = SourceString;
  else
    v16 = 0LL;
  RtlInitUnicodeString(&DestinationString, v16);
  v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v17 < 0 && v17 != -2147483643 && v17 != -1073741789 )
    return 1;
  v19 = AslAlloc(v18, ResultLength);
  v14 = v19;
  if ( !v19 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", 963, (unsigned int)"Failed to allocate memory");
    return v15;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v19, ResultLength, &ResultLength) < 0 )
  {
    v21 = "Failed to read value";
    v22 = 974;
    goto LABEL_14;
  }
  v23 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_17:
    v15 = 1;
    goto LABEL_29;
  }
  if ( v23 != a3 )
    goto LABEL_17;
  v24 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  if ( !v23 )
  {
LABEL_60:
    v21 = "Unknown registry value data type";
    v22 = 1120;
    goto LABEL_14;
  }
  if ( v23 <= 2 )
  {
    v32 = (WCHAR *)AslAlloc(v20, (unsigned int)v14[3] + 2LL);
    v13 = v32;
    if ( !v32 )
    {
      v22 = 1011;
      goto LABEL_58;
    }
    memmove(v32, v24, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
LABEL_49:
    if ( !(unsigned int)AslStringPatternMatchW(a4, v13) )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( v23 == 3 )
  {
    if ( Size != v14[3] )
      goto LABEL_28;
    v25 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_26:
    if ( !v25 )
    {
LABEL_28:
      v15 = 1;
      goto LABEL_29;
    }
LABEL_27:
    *a9 = 1;
    goto LABEL_28;
  }
  if ( v23 == 4 )
  {
    v25 = a5 == *v24;
    goto LABEL_26;
  }
  if ( v23 != 7 )
  {
    if ( v23 == 11 )
    {
      v25 = a6 == *(_QWORD *)v24;
      goto LABEL_26;
    }
    goto LABEL_60;
  }
  v27 = (WCHAR *)AslAlloc(v20, (unsigned int)v14[3]);
  v13 = v27;
  if ( v27 )
  {
    *v27 = 0;
    if ( *(_WORD *)v24 )
    {
      while ( 1 )
      {
        if ( *v13 )
        {
          v29 = -1LL;
          do
            ++v29;
          while ( v13[v29] );
          if ( RtlStringCchCatW(v13, (unsigned int)v14[3] - v29, L";") < 0 )
          {
            v21 = "Failed to copy delimiter";
            v22 = 1050;
            goto LABEL_14;
          }
          v30 = -1LL;
          do
            ++v30;
          while ( v13[v30] );
          v28 = RtlStringCchCatW(v13, (unsigned int)v14[3] - v30, (NTSTRSAFE_PCWSTR)v24);
        }
        else
        {
          v28 = RtlStringCchCopyW(v13, (unsigned int)v14[3], (NTSTRSAFE_PCWSTR)v24);
        }
        if ( v28 < 0 )
        {
          v21 = "Failed to copy string";
          v22 = 1059;
          goto LABEL_14;
        }
        v31 = -1LL;
        do
          ++v31;
        while ( *((_WORD *)v24 + v31) );
        v24 = (_DWORD *)((char *)v24 + 2 * v31 + 2);
        if ( !*(_WORD *)v24 )
          goto LABEL_49;
      }
    }
    goto LABEL_49;
  }
  v22 = 1034;
LABEL_58:
  v21 = "Failed to allocate memory";
LABEL_14:
  AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingRegistryValue", v22, (_DWORD)v21);
LABEL_29:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x74705041u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
  return v15;
}
