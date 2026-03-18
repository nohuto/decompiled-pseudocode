/*
 * XREFs of ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E0DCC
 * Callers:
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C01E1420 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01E14E0 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AppendMousePromotionQueue(
        struct tagMOUSE_PROMOTION_QUEUE *a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3)
{
  __int128 v3; // xmm0

  if ( *(_QWORD *)a1 )
    **((_QWORD **)a1 + 1) = a2;
  else
    *(_QWORD *)a1 = a2;
  *((_QWORD *)a1 + 1) = a3;
  if ( a1 == (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0 )
  {
    xmmword_1C03276C0 = *(_OWORD *)qword_1C03276B8;
    xmmword_1C03276D0 = *(_OWORD *)(qword_1C03276B8 + 16);
    v3 = *(_OWORD *)(qword_1C03276B8 + 32);
    *(_QWORD *)&xmmword_1C03276C0 = 0LL;
    xmmword_1C03276E0 = v3;
  }
}
