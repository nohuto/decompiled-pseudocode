/*
 * XREFs of RtlAddAccessAllowedAce @ 0x18002C0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownAce @ 0x18002D64C (RtlpAddKnownAce.c)
 */

__int64 __fastcall RtlAddAccessAllowedAce(int a1, int a2, int a3, void *Src)
{
  return RtlpAddKnownAce(a1, a2, 0, a3, Src, 0);
}
