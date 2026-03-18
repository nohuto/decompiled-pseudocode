/*
 * XREFs of RtlInitStringEx @ 0x1402862C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140177650 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __fastcall RtlInitStringEx(STRING *a1, const char *a2)
{
  return RtlInitAnsiStringEx(a1, a2);
}
