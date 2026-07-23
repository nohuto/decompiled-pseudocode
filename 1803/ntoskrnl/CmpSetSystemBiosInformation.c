/*
 * XREFs of CmpSetSystemBiosInformation @ 0x1408AF738
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x1408AEF00 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x1401A79C0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401A7A00 (ZwUnmapViewOfSection.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     CmpGetBiosVersion @ 0x1408AFA38 (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x1408AFBF8 (CmpGetBiosDate.c)
 *     CmpGetAcpiBiosVersion @ 0x1408AFE08 (CmpGetAcpiBiosVersion.c)
 *     CmpGetRegistryValue @ 0x1408AFE98 (CmpGetRegistryValue.c)
 */

void __fastcall CmpSetSystemBiosInformation(__int64 a1, void *a2, void *a3)
{
  unsigned int v4; // r13d
  __int64 v5; // r9
  _WORD *v6; // rsi
  __int64 v7; // r9
  _WORD *v8; // r14
  __int64 v9; // r12
  int i; // edi
  __int64 v11; // rdx
  PVOID v12; // rcx
  HANDLE v13; // r12
  unsigned int v14; // ebx
  wchar_t *v15; // rbx
  unsigned __int16 v16; // di
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  _STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-58h]
  PVOID Data; // [rsp+B0h] [rbp-50h]
  HANDLE KeyHandle; // [rsp+B8h] [rbp-48h]
  CHAR SourceString[128]; // [rsp+C0h] [rbp-40h] BYREF

  v24 = a1;
  KeyHandle = a3;
  BaseAddress = 0LL;
  ViewSize = 0x10000LL;
  SectionOffset.QuadPart = 983040LL;
  v4 = 0;
  if ( ZwMapViewOfSection(
         a2,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x10000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    Data = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    LOBYTE(v5) = 1;
    v6 = Data;
    if ( (unsigned __int8)CmpGetBiosDate((char *)BaseAddress + 65525, 8LL, SourceString, v5) )
    {
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
        if ( (int)CmpGetRegistryValue(a3) >= 0 )
        {
          v15 = *(wchar_t **)&String2.Length;
          if ( *(_QWORD *)&String2.Length )
          {
            String2.MaximumLength = *(_WORD *)(*(_QWORD *)&String2.Length + 8LL);
            v16 = String2.MaximumLength - 2;
            String2.Buffer = v15 + 6;
            String2.Length = String2.MaximumLength - 2;
            if ( RtlCompareUnicodeString(&UnicodeString, &String2, 1u) )
            {
              RtlInitUnicodeString(&ValueName, L"OldSystemBiosDate");
              ZwSetValueKey(a3, &ValueName, 0, 1u, v15 + 6, v16 + 2);
            }
            ExFreePoolWithTag(v15, 0);
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    LOBYTE(v7) = 1;
    if ( (unsigned __int8)CmpGetBiosDate(BaseAddress, 0x10000LL, SourceString, v7) )
    {
      RtlInitUnicodeString(&ValueName, L"SystemBiosDate");
      RtlInitAnsiString(&DestinationString, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      {
        ZwSetValueKey(a3, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    v8 = v6;
    if ( v6 )
    {
      v9 = v24;
      for ( i = 0; ; ++i )
      {
        if ( i )
        {
          v11 = 0x10000LL;
          v12 = 0LL;
          if ( i == 1 )
            v12 = BaseAddress;
          else
            v11 = 0LL;
          if ( !(unsigned __int8)CmpGetBiosVersion(v12, v11, SourceString) )
          {
LABEL_16:
            v6 = Data;
            v13 = KeyHandle;
            if ( v4 )
            {
              *v8 = 0;
              RtlInitUnicodeString(&ValueName, L"SystemBiosVersion");
              ZwSetValueKey(v13, &ValueName, 0, 7u, v6, v4 + 2);
            }
            break;
          }
        }
        else if ( !(unsigned __int8)CmpGetAcpiBiosVersion(v9, SourceString) )
        {
          continue;
        }
        RtlInitAnsiString(&DestinationString, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
        {
          v14 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v14);
          v4 += v14;
          RtlFreeAnsiString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            goto LABEL_16;
          v8 = (_WORD *)((char *)v8 + v14);
        }
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
}
