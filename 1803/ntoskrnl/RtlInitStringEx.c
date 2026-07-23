/*
 * XREFs of RtlInitStringEx @ 0x1402862C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140177650 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitStringEx(PSTRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
