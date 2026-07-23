/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800EE380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EE9AC @ 0x1800EE9AC (sub_1800EE9AC.c)
 */

void __cdecl RtlSetExtendedFeaturesMask(PCONTEXT_EX ContextEx, ULONG64 FeatureMask)
{
  unsigned __int64 *v2; // rax
  __int64 v3; // r10

  v2 = (unsigned __int64 *)sub_1800EE9AC(ContextEx);
  *v2 = v3 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
}
