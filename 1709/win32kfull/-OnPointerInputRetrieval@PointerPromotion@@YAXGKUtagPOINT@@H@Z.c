/*
 * XREFs of ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01E12D4
 * Callers:
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01CC274 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     PointerPromotionOnPointerInputRetrieval @ 0x1C01E2360 (PointerPromotionOnPointerInputRetrieval.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00D7B34 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01E0ED8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01E111C (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C01E1150 (-FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 */

void __fastcall PointerPromotion::OnPointerInputRetrieval(
        PointerPromotion *this,
        unsigned int a2,
        __int64 a3,
        struct tagPOINT a4)
{
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v6; // rbp
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rax
  __int16 v8; // r8
  __int64 v9; // r10
  int v10; // r11d
  struct tagMOUSE_PROMOTION_ENTRY *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rsi
  struct tagMOUSE_PROMOTION_QUEUE *v15; // rdi
  unsigned int v16[6]; // [rsp+20h] [rbp-18h] BYREF

  CacheById = FindCacheById((__int16)this, v16);
  if ( CacheById )
  {
    v6 = (struct tagMOUSE_PROMOTION_ENTRY **)((char *)CacheById + 8);
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 1, a2);
    v11 = MousePromotionEntry;
    if ( MousePromotionEntry )
    {
      *((_QWORD *)MousePromotionEntry + 1) = v9;
      if ( !v10 && word_1C0327710 == v8 )
      {
        v12 = 5LL;
        v13 = v16[0] + 1;
        if ( (unsigned int)v13 < 5 )
        {
          v12 = (unsigned int)(5 - v13);
          v14 = (unsigned int)v12;
          v15 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0327640 + 24 * v13);
          do
          {
            EmptyMousePromotionQueue(v15, v13, v12);
            v15 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v15 + 24);
            --v14;
          }
          while ( v14 );
        }
        if ( (*((_DWORD *)v11 + 5) & 0x40004) == 0 )
          ClearMousePromotionQueueUntil(v6, v11, v12);
      }
    }
  }
}
