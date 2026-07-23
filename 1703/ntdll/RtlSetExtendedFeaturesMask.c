/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800043B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800043F8 @ 0x1800043F8 (sub_1800043F8.c)
 */

void __cdecl RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, ULONG64 FeatureMask)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // r10

  v2 = (unsigned __int64 *)sub_1800043F8(ContextEx);
  *v2 = v3 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
}
