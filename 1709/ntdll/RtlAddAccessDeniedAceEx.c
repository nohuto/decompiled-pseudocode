/*
 * XREFs of RtlAddAccessDeniedAceEx @ 0x1800887B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedAceEx(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src)
{
  return RtlpAddKnownAce(a1, a2, a3, a4, Src, 1);
}
