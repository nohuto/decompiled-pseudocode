/*
 * XREFs of RtlInitStringEx @ 0x140250860
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140145820 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitStringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
