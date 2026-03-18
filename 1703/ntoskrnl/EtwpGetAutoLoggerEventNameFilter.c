/*
 * XREFs of EtwpGetAutoLoggerEventNameFilter @ 0x1402567B0
 * Callers:
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405AED28 (EtwpGetAutoLoggerProviderFilter.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140088044 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlQueryRegistryValuesEx @ 0x1405563F0 (RtlQueryRegistryValuesEx.c)
 *     RtlUnicodeToUTF8N @ 0x1405CB4E0 (RtlUnicodeToUTF8N.c)
 */

void __fastcall EtwpGetAutoLoggerEventNameFilter(__int64 a1, PVOID *a2, _DWORD *a3)
{
  __int64 v6; // rax
  SIZE_T v7; // r15
  wchar_t *PoolWithTag; // rax
  WCHAR *v9; // rbx
  NTSTATUS v10; // ecx
  char *v11; // rax
  char *v12; // r14
  unsigned __int16 Length; // r8
  unsigned int v14; // ecx
  CHAR *v15; // rcx
  __int16 v16; // [rsp+30h] [rbp-D0h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+90h] [rbp-70h] BYREF
  char *v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h] BYREF
  char *v25; // [rsp+A8h] [rbp-58h]
  int v26; // [rsp+B0h] [rbp-50h] BYREF
  char *v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h] BYREF
  char *v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+D0h] [rbp-30h] BYREF
  char *v31; // [rsp+D8h] [rbp-28h]
  int v32; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+E8h] [rbp-18h]
  _QWORD v34[140]; // [rsp+1D0h] [rbp+D0h] BYREF

  *a2 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *a3 = 0;
  v6 = -1LL;
  KeyHandle = 0LL;
  v16 = 0;
  do
    ++v6;
  while ( *(_WORD *)(a1 + 2 * v6) );
  v7 = (unsigned int)(2 * v6 + 34);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x50777445u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    v10 = RtlStringCbPrintfW(PoolWithTag, (unsigned int)v7, L"%ws\\EventNameFilter", a1);
    if ( v10 )
      goto LABEL_14;
    RtlInitUnicodeString(&DestinationString, v9);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      *a3 = 4096;
      v11 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x50777445u);
      *a2 = v11;
      v12 = v11;
      if ( v11 )
      {
        memset(v34, 0, sizeof(v34));
        v23 = v12;
        v34[0] = &EtwpQueryRegistryCallback;
        LODWORD(v34[4]) = 11;
        v34[3] = &v22;
        v22 = 11;
        v34[2] = L"MatchAnyKeyword";
        LODWORD(v34[11]) = 11;
        v34[10] = &v24;
        v34[9] = L"MatchAllKeyword";
        v25 = v12 + 8;
        v34[17] = &v26;
        v34[16] = L"Level";
        v27 = v12 + 16;
        v34[24] = &v28;
        v34[23] = L"FilterIn";
        v29 = v12 + 17;
        v34[31] = &v30;
        v34[30] = L"NameCount";
        v31 = v12 + 18;
        v34[38] = &v32;
        v34[37] = L"Names";
        v24 = 11;
        v34[40] = &v16;
        v34[7] = &EtwpQueryRegistryCallback;
        v34[14] = &EtwpQueryRegistryCallback;
        LODWORD(v34[18]) = 4;
        v26 = 4;
        v34[21] = &EtwpQueryRegistryCallback;
        LODWORD(v34[25]) = 4;
        v28 = 4;
        v34[28] = &EtwpQueryRegistryCallback;
        LODWORD(v34[32]) = 4;
        v30 = 4;
        v34[35] = &EtwpQueryRegistryCallback;
        p_UnicodeString = &UnicodeString;
        LODWORD(v34[39]) = 1;
        v32 = 1;
        if ( (int)RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v34, 0LL, 0LL) >= 0 )
        {
          Length = UnicodeString.Length;
          v14 = 0;
          if ( (UnicodeString.Length & 0xFFFE) != 0 )
          {
            do
            {
              if ( UnicodeString.Buffer[v14] == 59 )
              {
                UnicodeString.Buffer[v14] = 0;
                Length = UnicodeString.Length;
              }
              ++v14;
            }
            while ( v14 < Length >> 1 );
          }
          v15 = (char *)*a2 + 20;
          UTF8StringActualByteCount = *a3 - 20;
          v10 = RtlUnicodeToUTF8N(
                  v15,
                  UTF8StringActualByteCount,
                  &UTF8StringActualByteCount,
                  UnicodeString.Buffer,
                  Length + 2);
          if ( !v10 )
            *a3 = UTF8StringActualByteCount + 20;
LABEL_14:
          if ( v10 >= 0 )
            goto LABEL_17;
        }
      }
    }
  }
  *a3 = 0;
  if ( *a2 )
  {
    ExFreePoolWithTag(*a2, 0);
    *a2 = 0LL;
  }
LABEL_17:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  RtlFreeUnicodeString(&UnicodeString);
}
