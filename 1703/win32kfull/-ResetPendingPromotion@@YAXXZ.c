/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C01D5014
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01D4964 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C01D4C3C (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C032C498 )
    *(_DWORD *)(qword_1C032C498 + 1000) = 0;
  word_1C032C490 = 0;
  dword_1C032C494 = 0;
  qword_1C032C498 = 0LL;
  dword_1C032C4A0 = 0;
}
