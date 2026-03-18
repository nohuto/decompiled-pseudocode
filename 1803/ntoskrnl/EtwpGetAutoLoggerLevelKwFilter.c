/*
 * XREFs of EtwpGetAutoLoggerLevelKwFilter @ 0x1402B25C0
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x140629F3C (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140061AF0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlQueryRegistryValuesEx @ 0x14057ECE0 (RtlQueryRegistryValuesEx.c)
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
  _QWORD v23[140]; // [rsp+1C0h] [rbp+C0h] BYREF

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
        memset(v23, 0, sizeof(v23));
        v16 = v11;
        LODWORD(v23[4]) = 11;
        v15 = 11;
        v23[3] = &v15;
        LODWORD(v23[11]) = 11;
        v23[2] = L"MatchAnyKeyword";
        v17 = 11;
        v23[10] = &v17;
        v23[0] = &EtwpQueryRegistryCallback;
        v23[9] = L"MatchAllKeyword";
        v18 = v11 + 8;
        v23[17] = &v19;
        v23[16] = L"Level";
        v20 = v11 + 16;
        v23[24] = &v21;
        v23[23] = L"FilterIn";
        v23[7] = &EtwpQueryRegistryCallback;
        v23[14] = &EtwpQueryRegistryCallback;
        LODWORD(v23[18]) = 4;
        v19 = 4;
        v23[21] = &EtwpQueryRegistryCallback;
        LODWORD(v23[25]) = 4;
        v21 = 4;
        v22 = v11 + 17;
        v9 = (int)RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v23, 0LL, 0LL) < 0;
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
