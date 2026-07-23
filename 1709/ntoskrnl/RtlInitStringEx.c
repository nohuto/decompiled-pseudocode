/*
 * XREFs of RtlInitStringEx @ 0x140250860
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140145820 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitStringEx(PSTRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
