/*
 * XREFs of RtlCopyUnicodeString @ 0x180044A30
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_180050FCC @ 0x180050FCC (sub_180050FCC.c)
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x18007AD40 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x180082570 (LdrGetDllDirectory.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
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
