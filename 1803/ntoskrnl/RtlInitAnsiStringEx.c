/*
 * XREFs of RtlInitAnsiStringEx @ 0x140177650
 * Callers:
 *     RtlInitStringEx @ 0x1402862C0 (RtlInitStringEx.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x140630F30 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExpCovReadFriendlyName @ 0x1407C7168 (ExpCovReadFriendlyName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (char *)SourceString;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0xFFFE )
  {
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
    return 0;
  }
  return -1073741562;
}
