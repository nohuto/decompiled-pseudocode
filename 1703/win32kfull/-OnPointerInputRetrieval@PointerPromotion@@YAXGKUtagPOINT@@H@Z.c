/*
 * XREFs of ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01D4A44
 * Callers:
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01C7650 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     PointerPromotionOnPointerInputRetrieval @ 0x1C01D5B80 (PointerPromotionOnPointerInputRetrieval.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00FDE4C (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01D4658 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01D489C (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C01D48D0 (-FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rsi
  struct tagMOUSE_PROMOTION_QUEUE *v14; // rdi
  unsigned int v15[6]; // [rsp+20h] [rbp-18h] BYREF

  CacheById = FindCacheById((__int16)this, v15);
  if ( CacheById )
  {
    v6 = (struct tagMOUSE_PROMOTION_ENTRY **)((char *)CacheById + 8);
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 1, a2);
    v11 = MousePromotionEntry;
    if ( MousePromotionEntry )
    {
      *((_QWORD *)MousePromotionEntry + 1) = v9;
      if ( !v10 && word_1C032C490 == v8 )
      {
        v12 = v15[0] + 1;
        if ( (unsigned int)v12 < 5 )
        {
          v13 = (unsigned int)(5 - v12);
          v14 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C032C3C0 + 24 * v12);
          do
          {
            EmptyMousePromotionQueue(v14);
            v14 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v14 + 24);
            --v13;
          }
          while ( v13 );
        }
        if ( (*((_DWORD *)v11 + 5) & 0x40004) == 0 )
          ClearMousePromotionQueueUntil(v6, v11);
      }
    }
  }
}
