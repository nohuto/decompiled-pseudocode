/*
 * XREFs of CmpSetVideoBiosInformation @ 0x14083B210
 * Callers:
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1400AE570 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwMapViewOfSection @ 0x14017DDC0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x14017DE00 (ZwUnmapViewOfSection.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtSetValueKey @ 0x14047AFF0 (NtSetValueKey.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404DE910 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpGetBiosVersion @ 0x14083B7EC (CmpGetBiosVersion.c)
 *     CmpGetBiosDate @ 0x14083B9BC (CmpGetBiosDate.c)
 */

void __fastcall CmpSetVideoBiosInformation(HANDLE SectionHandle, HANDLE KeyHandle)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  unsigned int v6; // ecx
  _WORD *PoolWithTag; // rdi
  _WORD *v8; // rsi
  unsigned int v9; // ebx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _STRING v14; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  CHAR SourceString[128]; // [rsp+A0h] [rbp-60h] BYREF

  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 4096LL;
  v4 = 0;
  v5 = 786432;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x1000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    v6 = ((*((_DWORD *)BaseAddress + 16) & 0xFFF0) + (*((_DWORD *)BaseAddress + 16) >> 12)) & 0xFFFF8000;
    if ( v6 < 0xC0000 )
      v6 = 786432;
    v5 = v6;
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  BaseAddress = 0LL;
  ViewSize = 0x8000LL;
  SectionOffset.QuadPart = v5;
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0x8000uLL,
         &SectionOffset,
         &ViewSize,
         ViewUnmap,
         0,
         4u) >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x20204D43u);
    if ( (unsigned __int8)CmpGetBiosDate(BaseAddress, 0x8000LL, SourceString, 0LL) )
    {
      RtlInitUnicodeString(&DestinationString, L"VideoBiosDate");
      RtlInitAnsiString(&v14, SourceString);
      if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v14, 1u) >= 0 )
      {
        NtSetValueKey(KeyHandle, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    if ( PoolWithTag && (unsigned __int8)CmpGetBiosVersion(BaseAddress, 0x8000LL, SourceString) )
    {
      v8 = PoolWithTag;
      do
      {
        RtlInitAnsiString(&v14, SourceString);
        if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v14, 1u) >= 0 )
        {
          v9 = UnicodeString.Length + 2;
          memmove(v8, UnicodeString.Buffer, v9);
          v4 += v9;
          RtlFreeUnicodeString(&UnicodeString);
          if ( (unsigned __int64)v4 + 260 > 0x1000 )
            break;
          v8 = (_WORD *)((char *)v8 + v9);
        }
      }
      while ( (unsigned __int8)CmpGetBiosVersion(0LL, 0LL, SourceString) );
      if ( v4 - 1 <= 0xFFD )
      {
        *v8 = 0;
        RtlInitUnicodeString(&DestinationString, L"VideoBiosVersion");
        NtSetValueKey(KeyHandle, &DestinationString, 0, 7u, PoolWithTag, v4 + 2);
      }
    }
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
}
