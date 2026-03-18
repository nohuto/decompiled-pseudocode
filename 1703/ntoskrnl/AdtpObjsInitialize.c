/*
 * XREFs of AdtpObjsInitialize @ 0x1405A6FD4
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x1405A6F94 (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140093AD0 (ExInitializeResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1404C02F0 (RtlIntegerToUnicodeString.c)
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1404FF290 (NtEnumerateValueKey.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 */

int AdtpObjsInitialize()
{
  int v0; // ebx
  HANDLE v1; // r14
  char *v2; // r13
  bool v3; // r12
  __int64 v4; // rdi
  unsigned int v5; // esi
  char *v6; // r15
  int result; // eax
  unsigned int v8; // esi
  char *v9; // r15
  int v10; // eax
  int v11; // esi
  ULONG v12; // r15d
  bool i; // sf
  bool v14; // zf
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v16; // rdi
  char *v17; // rax
  UNICODE_STRING *v18; // rsi
  unsigned __int16 v19; // cx
  SIZE_T v20; // rdx
  PVOID v21; // rax
  HANDLE v22; // rdi
  ULONG v23; // eax
  NTSTATUS v24; // r15d
  unsigned __int16 *v25; // rdi
  char *v26; // rax
  char *v27; // rsi
  UNICODE_STRING *v28; // r12
  unsigned __int16 v29; // cx
  SIZE_T v30; // rdx
  PVOID v31; // rax
  HANDLE KeyHandle; // [rsp+30h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  int v36; // [rsp+60h] [rbp-19h] BYREF
  HANDLE v37; // [rsp+68h] [rbp-11h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-9h]
  int v39; // [rsp+78h] [rbp-1h]
  __int128 v40; // [rsp+80h] [rbp+7h]
  ULONG ResultLength; // [rsp+E0h] [rbp+67h] BYREF
  ULONG Index; // [rsp+E8h] [rbp+6Fh]
  ULONG v43; // [rsp+F0h] [rbp+77h]
  HANDLE v44; // [rsp+F8h] [rbp+7Fh] BYREF

  v0 = 0;
  v1 = 0LL;
  v44 = 0LL;
  v2 = 0LL;
  AdtpSourceModules = 0LL;
  v3 = 1;
  ExInitializeResourceLite(&AdtpSourceModuleLock);
  LODWORD(v4) = 0;
  v5 = 0;
  v6 = (char *)&unk_140341F82;
  while ( 1 )
  {
    *(_DWORD *)(v6 - 2) = 1572864;
    *(_QWORD *)(v6 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * (unsigned int)v4;
    result = RtlIntegerToUnicodeString(v5 + 1537, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringStandard + v5);
    if ( result < 0 )
      break;
    v4 = (unsigned int)(v4 + 12);
    ++v5;
    v6 += 16;
    if ( v5 > 6 )
    {
      v8 = 0;
      v9 = (char *)&unk_140341C42;
      while ( 1 )
      {
        *(_QWORD *)(v9 + 6) = (char *)&AdtpAccessIdsStringBuffer + 2 * v4;
        *(_DWORD *)(v9 - 2) = 1572864;
        result = RtlIntegerToUnicodeString(v8 + 1552, 0xAu, (PUNICODE_STRING)&AdtpEventIdStringSpecific + v8);
        if ( result < 0 )
          break;
        v4 = (unsigned int)(v4 + 12);
        ++v8;
        v9 += 16;
        if ( v8 > 0xF )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\EventLog\\Security");
          v36 = 48;
          p_DestinationString = &DestinationString;
          v37 = 0LL;
          v39 = 576;
          v40 = 0LL;
          v10 = CmOpenKey(&KeyHandle, 131097, (__int64)&v36, 0, 0LL);
          v11 = v10;
          if ( v10 == -1073741772 )
            return 0;
          v12 = 0;
          for ( i = v10 < 0; ; i = v11 < 0 )
          {
            v43 = v12;
            if ( i )
              break;
            v11 = NtEnumerateKey(KeyHandle, v12, KeyBasicInformation, 0LL, 0, &ResultLength);
            if ( v11 == -1073741789 )
            {
              PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
              v16 = PoolWithTag;
              if ( !PoolWithTag )
                return -1073741801;
              v11 = NtEnumerateKey(KeyHandle, v12, KeyBasicInformation, PoolWithTag, ResultLength, &ResultLength);
              if ( v11 >= 0 )
              {
                v17 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                v2 = v17;
                if ( !v17 )
                  return -1073741801;
                v18 = (UNICODE_STRING *)(v17 + 8);
                *(_QWORD *)v17 = AdtpSourceModules;
                AdtpSourceModules = (__int64)v17;
                *((_QWORD *)v17 + 3) = 0LL;
                v19 = v16[6];
                *((_WORD *)v17 + 4) = v19;
                v20 = (unsigned __int16)(v19 + 2);
                *((_WORD *)v17 + 5) = v20;
                v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x6B416553u);
                *((_QWORD *)v2 + 2) = v21;
                if ( !v21 )
                  return -1073741801;
                SourceString.Length = v16[6];
                SourceString.MaximumLength = SourceString.Length;
                SourceString.Buffer = v16 + 8;
                RtlCopyUnicodeString(v18, &SourceString);
                ExFreePoolWithTag(v16, 0);
                p_DestinationString = v18;
                v36 = 48;
                v37 = KeyHandle;
                v39 = 576;
                v40 = 0LL;
                result = CmOpenKey(&Handle, 131097, (__int64)&v36, 0, 0LL);
                if ( result < 0 )
                  return result;
                RtlInitUnicodeString(&SourceString, L"ObjectNames");
                v36 = 48;
                v22 = Handle;
                v37 = Handle;
                p_DestinationString = &SourceString;
                v39 = 576;
                v40 = 0LL;
                v11 = CmOpenKey(&v44, 131097, (__int64)&v36, 0, 0LL);
                NtClose(v22);
                v1 = v44;
                v3 = 1;
                if ( v11 == -1073741772 )
                {
                  v3 = 0;
                  v11 = 0;
                }
              }
            }
            Index = 0;
            v23 = 0;
            v14 = v11 == 0;
            if ( v11 >= 0 )
            {
              do
              {
                if ( !v3 )
                  break;
                v24 = NtEnumerateValueKey(v1, v23, KeyValueFullInformation, 0LL, 0, &ResultLength);
                if ( v24 == -1073741789 )
                {
                  v25 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6B416553u);
                  if ( !v25 )
                    return -1073741801;
                  v24 = NtEnumerateValueKey(v1, Index, KeyValueFullInformation, v25, ResultLength, &ResultLength);
                  if ( v24 >= 0 )
                  {
                    v26 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6B416553u);
                    v27 = v26;
                    if ( !v26 )
                      return -1073741801;
                    v28 = (UNICODE_STRING *)(v26 + 8);
                    *(_QWORD *)v26 = *((_QWORD *)v2 + 3);
                    *((_QWORD *)v2 + 3) = v26;
                    v29 = v25[8];
                    *((_WORD *)v26 + 4) = v29;
                    v30 = (unsigned __int16)(v29 + 2);
                    *((_WORD *)v26 + 5) = v30;
                    v31 = ExAllocatePoolWithTag(PagedPool, v30, 0x6B416553u);
                    *((_QWORD *)v27 + 2) = v31;
                    if ( !v31 )
                      return -1073741801;
                    SourceString.Length = v25[8];
                    SourceString.MaximumLength = SourceString.Length;
                    SourceString.Buffer = v25 + 10;
                    RtlCopyUnicodeString(v28, &SourceString);
                    if ( *((_DWORD *)v25 + 3) < 4u )
                      *((_DWORD *)v27 + 6) = 1552;
                    else
                      *((_DWORD *)v27 + 6) = *(_DWORD *)((char *)v25 + *((unsigned int *)v25 + 2));
                  }
                  ExFreePoolWithTag(v25, 0);
                }
                v11 = 0;
                v3 = v24 != -2147483622;
                if ( v24 != -2147483622 )
                  v11 = v24;
                v23 = ++Index;
              }
              while ( v11 >= 0 );
              v12 = v43;
              v14 = v11 == 0;
            }
            if ( v14 && !v3 )
            {
              if ( v1 )
              {
                NtClose(v1);
                v1 = 0LL;
                v44 = 0LL;
              }
            }
            ++v12;
          }
          NtClose(KeyHandle);
          if ( v11 != -2147483622 )
            return v11;
          return v0;
        }
      }
      return result;
    }
  }
  return result;
}
