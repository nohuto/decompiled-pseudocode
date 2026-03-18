/*
 * XREFs of itrp_Check_PF_Proj @ 0x1C02D09C0
 * Callers:
 *     itrp_SFVTCA_0 @ 0x1C02D87C0 (itrp_SFVTCA_0.c)
 *     itrp_SFVTCA_1 @ 0x1C02D8810 (itrp_SFVTCA_1.c)
 *     itrp_SPVTCA_0 @ 0x1C02D9BA0 (itrp_SPVTCA_0.c)
 *     itrp_SPVTCA_1 @ 0x1C02D9C70 (itrp_SPVTCA_1.c)
 * Callees:
 *     <none>
 */

__int64 itrp_Check_PF_Proj()
{
  __int64 result; // rax

  result = (unsigned int)(unsigned __int16)word_1C032CA28 + 1023;
  if ( (unsigned __int16)(word_1C032CA28 + 1023) <= 0x7FEu )
  {
    result = 4294950912LL;
    if ( word_1C032CA28 >= 0 )
      result = 0x4000LL;
    word_1C032CA28 = result;
  }
  return result;
}
