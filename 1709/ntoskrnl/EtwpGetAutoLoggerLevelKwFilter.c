/*
 * XREFs of EtwpGetAutoLoggerLevelKwFilter @ 0x14027F714
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
 *     RtlQueryRegistryValuesEx @ 0x140590C10 (RtlQueryRegistryValuesEx.c)
 */

void __fastcall EtwpGetAutoLoggerLevelKwFilter(__int64 a1, PVOID *a2)
{
  __int64 v3; // rax
  SIZE_T v5; // r14
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rbx
  NTSTATUS v8; // eax
  bool v9; // sf
  char *v10; // rax
  char *v11; // rsi
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+80h] [rbp-80h] BYREF
  char *v16; // [rsp+88h] [rbp-78h]
  int v17; // [rsp+90h] [rbp-70h] BYREF
  char *v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+A0h] [rbp-60h] BYREF
  char *v20; // [rsp+A8h] [rbp-58h]
  int v21; // [rsp+B0h] [rbp-50h] BYREF
  char *v22; // [rsp+B8h] [rbp-48h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable[20]; // [rsp+1C0h] [rbp+C0h] BYREF

  KeyHandle = 0LL;
  v3 = -1LL;
  *a2 = 0LL;
  do
    ++v3;
  while ( *(_WORD *)(a1 + 2 * v3) );
  v5 = (unsigned int)(2 * v3 + 40);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v5, L"%ws\\StackLevelKwFilter", a1);
    v9 = v8 < 0;
    if ( v8 )
      goto LABEL_8;
    RtlInitUnicodeString(&DestinationString, v7);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v10 = (char *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x50777445u);
      *a2 = v10;
      v11 = v10;
      if ( v10 )
      {
        memset(QueryTable, 0, sizeof(QueryTable));
        v16 = v11;
        QueryTable[0].DefaultType = 11;
        v15 = 11;
        QueryTable[0].EntryContext = &v15;
        QueryTable[1].DefaultType = 11;
        QueryTable[0].Name = L"MatchAnyKeyword";
        v17 = 11;
        QueryTable[1].EntryContext = &v17;
        QueryTable[0].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[1].Name = L"MatchAllKeyword";
        v18 = v11 + 8;
        QueryTable[2].EntryContext = &v19;
        QueryTable[2].Name = L"Level";
        v20 = v11 + 16;
        QueryTable[3].EntryContext = &v21;
        QueryTable[3].Name = L"FilterIn";
        QueryTable[1].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[2].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[2].DefaultType = 4;
        v19 = 4;
        QueryTable[3].QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)&EtwpQueryRegistryCallback;
        QueryTable[3].DefaultType = 4;
        v21 = 4;
        v22 = v11 + 17;
        v9 = RtlQueryRegistryValuesEx(0x40000000u, (PCWSTR)KeyHandle, QueryTable, 0LL, 0LL) < 0;
LABEL_8:
        if ( !v9 )
          goto LABEL_11;
      }
    }
  }
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
