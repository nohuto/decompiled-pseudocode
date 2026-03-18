/*
 * XREFs of ?CancelAutoPromotion@@YAXXZ @ 0x1C01E0E24
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01E1D98 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00D7B34 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E109C (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E1170 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01E17D8 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void CancelAutoPromotion(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v4; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v5; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)FindMousePromotionInContactRange(
                       (const struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0,
                       dword_1C0327634,
                       &v5,
                       &v4) )
  {
    v3 = 0LL;
    ExtractRangeFromQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0,
      (struct tagMOUSE_PROMOTION_QUEUE *)&v3,
      v5,
      v4);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v3, v0, v1);
  }
  else
  {
    v2 = Win32AllocPoolZInit(48LL, 1886221141LL);
    if ( v2 )
    {
      *(_OWORD *)v2 = xmmword_1C03276C0;
      *(_OWORD *)(v2 + 16) = xmmword_1C03276D0;
      *(_OWORD *)(v2 + 32) = xmmword_1C03276E0;
      *(_DWORD *)(v2 + 20) = 303104;
      QueueMousePromotionEntry(
        (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0,
        (struct tagMOUSE_PROMOTION_ENTRY *)v2);
    }
  }
  dword_1C0327738 &= 0xFFFFFFE9;
}
