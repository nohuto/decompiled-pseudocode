/*
 * XREFs of RtlCreateUnicodeString @ 0x180038060
 * Callers:
 *     LdrSetDllDirectory @ 0x180002990 (LdrSetDllDirectory.c)
 *     sub_180004530 @ 0x180004530 (sub_180004530.c)
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_180005150 @ 0x180005150 (sub_180005150.c)
 *     sub_1800252F4 @ 0x1800252F4 (sub_1800252F4.c)
 *     sub_180036B64 @ 0x180036B64 (sub_180036B64.c)
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 *     sub_1800CC418 @ 0x1800CC418 (sub_1800CC418.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  WCHAR *v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  v6 = (WCHAR *)sub_18003B5E0(v5);
  DestinationString->Buffer = v6;
  if ( !v6 )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(v6, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
