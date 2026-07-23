/*
 * XREFs of EtwpGetAutoLoggerEventNameFilter @ 0x14027F384
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405A8A70 (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140019294 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     RtlUnicodeToUTF8N @ 0x14058FB50 (RtlUnicodeToUTF8N.c)
 *     RtlQueryRegistryValuesEx @ 0x140590C10 (RtlQueryRegistryValuesEx.c)
 */

void __fastcall EtwpGetAutoLoggerEventNameFilter(__int64 a1, __int64 a2, PVOID *a3, _DWORD *a4)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  SIZE_T v10; // r12
  wchar_t *PoolWithTag; // rax
  WCHAR *v12; // rbx
  NTSTATUS v13; // ecx
  char *v14; // rax
  char *v15; // r14
  unsigned __int16 Length; // r8
  unsigned int v17; // ecx
  CHAR *v18; // rcx
  __int16 v19; // [rsp+30h] [rbp-D0h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+90h] [rbp-70h] BYREF
  char *v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+A0h] [rbp-60h] BYREF
  char *v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+B0h] [rbp-50h] BYREF
  char *v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+C0h] [rbp-40h] BYREF
  char *v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+D0h] [rbp-30h] BYREF
  char *v34; // [rsp+D8h] [rbp-28h]
  int v35; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+E8h] [rbp-18h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[20]; // [rsp+1D0h] [rbp+D0h] BYREF

  *a3 = 0LL;
  v5 = -1LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v7 = -1LL;
  KeyHandle = 0LL;
  *a4 = 0;
  v19 = 0;
  do
    ++v7;
  while ( *(_WORD *)(a2 + 2 * v7) );
  do
    ++v5;
  while ( *(_WORD *)(a1 + 2 * v5) );
  v10 = (unsigned int)(2 * (v5 + v7) + 4);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v10, 0x50777445u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v10, L"%ws\\%ws", a1, a2);
    if ( v13 )
      goto LABEL_15;
    RtlInitUnicodeString(&DestinationString, v12);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      *a4 = 4096;
      v14 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x50777445u);
      *a3 = v14;
      v15 = v14;
      if ( v14 )
      {
        memset(QueryTable, 0, sizeof(QueryTable));
        v26 = v15;
        QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[0].DefaultType = 11;
        QueryTable[0].EntryContext = &v25;
        v25 = 11;
        QueryTable[0].Name = L"MatchAnyKeyword";
        QueryTable[1].DefaultType = 11;
        QueryTable[1].EntryContext = &v27;
        QueryTable[1].Name = L"MatchAllKeyword";
        v28 = v15 + 8;
        QueryTable[2].EntryContext = &v29;
        QueryTable[2].Name = L"Level";
        v30 = v15 + 16;
        QueryTable[3].EntryContext = &v31;
        QueryTable[3].Name = L"FilterIn";
        v32 = v15 + 17;
        QueryTable[4].EntryContext = &v33;
        QueryTable[4].Name = L"NameCount";
        v34 = v15 + 18;
        QueryTable[5].EntryContext = &v35;
        QueryTable[5].Name = L"Names";
        v27 = 11;
        QueryTable[5].DefaultData = &v19;
        QueryTable[1].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[2].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[2].DefaultType = 4;
        v29 = 4;
        QueryTable[3].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[3].DefaultType = 4;
        v31 = 4;
        QueryTable[4].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[4].DefaultType = 4;
        v33 = 4;
        QueryTable[5].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        p_UnicodeString = &UnicodeString;
        QueryTable[5].DefaultType = 1;
        v35 = 1;
        if ( RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) >= 0 )
        {
          Length = UnicodeString.Length;
          v17 = 0;
          if ( (UnicodeString.Length & 0xFFFE) != 0 )
          {
            do
            {
              if ( UnicodeString.Buffer[v17] == 59 )
              {
                UnicodeString.Buffer[v17] = 0;
                Length = UnicodeString.Length;
              }
              ++v17;
            }
            while ( v17 < Length >> 1 );
          }
          v18 = (char *)*a3 + 20;
          UTF8StringActualByteCount = *a4 - 20;
          v13 = RtlUnicodeToUTF8N(
                  v18,
                  UTF8StringActualByteCount,
                  &UTF8StringActualByteCount,
                  UnicodeString.Buffer,
                  Length + 2);
          if ( !v13 )
            *a4 = UTF8StringActualByteCount + 20;
LABEL_15:
          if ( v13 >= 0 )
            goto LABEL_18;
        }
      }
    }
  }
  *a4 = 0;
  if ( *a3 )
  {
    ExFreePoolWithTag(*a3, 0);
    *a3 = 0LL;
  }
LABEL_18:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  RtlFreeUnicodeString(&UnicodeString);
}
