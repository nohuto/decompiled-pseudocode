/*
 * XREFs of RtlCopyUnicodeString @ 0x18001F9C0
 * Callers:
 *     sub_18000499C @ 0x18000499C (sub_18000499C.c)
 *     LdrGetDllFullName @ 0x18001F910 (LdrGetDllFullName.c)
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllDirectory @ 0x18007E280 (LdrGetDllDirectory.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

void __cdecl RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // eax
  PWCH Buffer; // rsi
  PWCH v5; // rdx
  PWCH v6; // rcx
  unsigned __int64 v7; // rdi

  if ( SourceString )
  {
    Length = SourceString->Length;
    Buffer = DestinationString->Buffer;
    if ( (unsigned __int16)Length > DestinationString->MaximumLength )
      Length = DestinationString->MaximumLength;
    v5 = SourceString->Buffer;
    v6 = DestinationString->Buffer;
    DestinationString->Length = Length;
    v7 = Length;
    memmove(v6, v5, Length);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      Buffer[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
