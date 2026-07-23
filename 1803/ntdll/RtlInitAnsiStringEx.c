/*
 * XREFs of RtlInitAnsiStringEx @ 0x18006DC10
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x18006DBD0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     sub_1800C9E34 @ 0x1800C9E34 (sub_1800C9E34.c)
 *     RtlInitStringEx @ 0x1800E52D0 (RtlInitStringEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  DestinationString->Buffer = (PCHAR)SourceString;
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
