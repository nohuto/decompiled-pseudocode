/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01D4B90
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01D4D18 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01D454C (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01D4658 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(struct tagMOUSE_PROMOTION_ENTRY **a1, struct tagMOUSE_PROMOTION_ENTRY *a2, int a3)
{
  __int64 v6; // rax

  ClearMousePromotionQueueUntil(a1 + 1, a2);
  v6 = Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( v6 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_OWORD *)(v6 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v6 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v6 = 0LL;
    if ( a3 )
      *(_DWORD *)(v6 + 44) &= ~1u;
    AppendMousePromotionQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C430,
      (struct tagMOUSE_PROMOTION_ENTRY *)v6,
      (struct tagMOUSE_PROMOTION_ENTRY *)v6);
    word_1C032C490 = *(_WORD *)a1;
    dword_1C032C494 = *((_DWORD *)a2 + 8);
    qword_1C032C498 = gptiCurrent;
    dword_1C032C4A0 = a3;
  }
}
