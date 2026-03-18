/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01D4F60
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01D49EC (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01D54CC (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00FDE4C (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01D4964 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  __int64 *v2; // rax
  __int16 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // xmm1_8

  if ( word_1C032C3B0 )
  {
    if ( word_1C032C490 )
    {
      if ( word_1C032C418 == word_1C032C490 )
      {
        v2 = (__int64 *)qword_1C032C420;
        if ( qword_1C032C420 )
        {
          while ( v2 != (__int64 *)qword_1C032C428 )
          {
            if ( *((_DWORD *)v2 + 8) == dword_1C032C494 )
            {
              ForceCompletePendingPromotion();
              break;
            }
            v2 = (__int64 *)*v2;
            if ( !v2 )
              break;
          }
        }
      }
    }
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C420);
    v3 = &word_1C032C418;
    v4 = 4LL;
    do
    {
      v5 = *((_QWORD *)v3 - 1);
      *(_OWORD *)v3 = *(_OWORD *)(v3 - 12);
      *((_QWORD *)v3 + 2) = v5;
      v3 -= 12;
      --v4;
    }
    while ( v4 );
    unk_1C032C3C0 = 0LL;
  }
  word_1C032C3B0 = a1;
  word_1C032C3B8[0] = a1;
}
