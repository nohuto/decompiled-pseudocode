/*
 * XREFs of RtlCreateUnicodeString @ 0x180046500
 * Callers:
 *     LdrSetDllDirectory @ 0x1800038F0 (LdrSetDllDirectory.c)
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     sub_180045634 @ 0x180045634 (sub_180045634.c)
 *     sub_18004CE2C @ 0x18004CE2C (sub_18004CE2C.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180053D68 @ 0x180053D68 (sub_180053D68.c)
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 *     sub_1800D6990 @ 0x1800D6990 (sub_1800D6990.c)
 *     sub_1801050C4 @ 0x1801050C4 (sub_1801050C4.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  WCHAR *v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  v6 = (WCHAR *)sub_180043FE0(v5);
  DestinationString->Buffer = v6;
  if ( !v6 )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(v6, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
