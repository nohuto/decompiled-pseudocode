/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x1800043B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800043F8 @ 0x1800043F8 (sub_1800043F8.c)
 */

unsigned __int64 *RtlSetExtendedFeaturesMask()
{
  unsigned __int64 *result; // rax
  __int64 v1; // r10

  result = (unsigned __int64 *)sub_1800043F8();
  *result = v1 & MEMORY[0x7FFE03D8] & 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
