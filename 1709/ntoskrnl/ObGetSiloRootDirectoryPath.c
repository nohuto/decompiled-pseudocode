/*
 * XREFs of ObGetSiloRootDirectoryPath @ 0x14078A24C
 * Callers:
 *     NtQueryInformationJobObject @ 0x14050E9DC (NtQueryInformationJobObject.c)
 *     PspConvertSiloToServerSilo @ 0x140714DA8 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400DE270 (RtlAppendUnicodeStringToString.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1404E0C50 (RtlIntegerToUnicodeString.c)
 *     PsGetSiloIdentifier @ 0x1405F2510 (PsGetSiloIdentifier.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 */

int __fastcall ObGetSiloRootDirectoryPath(unsigned __int64 a1, UNICODE_STRING *a2)
{
  int result; // eax
  __int64 ParentSilo; // rbx
  ULONG SiloIdentifier; // eax
  unsigned int v7; // ebx
  wchar_t *PoolWithTag; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)&Source.Length = 262146;
  Source.Buffer = (wchar_t *)L"\\";
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&String.Length);
  if ( result >= 0 )
  {
    ParentSilo = PsGetParentSilo(a1);
    if ( PsGetCurrentSilo() != ParentSilo )
      return -1073740007;
    *(_DWORD *)&String.Length = 1441792;
    String.Buffer = (wchar_t *)&v11;
    SiloIdentifier = PsGetSiloIdentifier(a1);
    result = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
    if ( result >= 0 )
    {
      v7 = String.Length + 14;
      if ( a2->Buffer )
      {
        if ( a2->MaximumLength < v7 )
          return -1073741789;
      }
      else
      {
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x6D4E624Fu);
        a2->Buffer = PoolWithTag;
        if ( !PoolWithTag )
          return -1073741670;
        a2->Length = 0;
        a2->MaximumLength = v7;
      }
      RtlCopyUnicodeString(a2, &ObpSilosDirectoryName);
      RtlAppendUnicodeStringToString(a2, &Source);
      RtlAppendUnicodeStringToString(a2, &String);
      return 0;
    }
  }
  return result;
}
