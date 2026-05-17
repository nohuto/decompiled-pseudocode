/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800EE380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EE9AC @ 0x1800EE9AC (sub_1800EE9AC.c)
 */

unsigned __int64 *__fastcall RtlSetExtendedFeaturesMask(__int64 a1)
{
  unsigned __int64 *result; // rax
  __int64 v2; // r10

  result = (unsigned __int64 *)sub_1800EE9AC(a1);
  *result = v2 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
