/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C01E18E4
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01E11E4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01E14E0 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0327718 )
    *(_DWORD *)(qword_1C0327718 + 1088) = 0;
  word_1C0327710 = 0;
  dword_1C0327714 = 0;
  qword_1C0327718 = 0LL;
  dword_1C0327720 = 0;
}
