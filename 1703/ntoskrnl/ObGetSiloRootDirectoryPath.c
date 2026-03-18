/*
 * XREFs of ObGetSiloRootDirectoryPath @ 0x140747A10
 * Callers:
 *     NtQueryInformationJobObject @ 0x140476D50 (NtQueryInformationJobObject.c)
 *     PspConvertSiloToServerSilo @ 0x1406DE940 (PspConvertSiloToServerSilo.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     RtlAppendUnicodeStringToString @ 0x140080110 (RtlAppendUnicodeStringToString.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlIntegerToUnicodeString @ 0x1404C02F0 (RtlIntegerToUnicodeString.c)
 *     PsGetSiloIdentifier @ 0x1405D5E30 (PsGetSiloIdentifier.c)
 *     PsGetParentSilo @ 0x1406DE24C (PsGetParentSilo.c)
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
  Source.Buffer = L"\\";
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
