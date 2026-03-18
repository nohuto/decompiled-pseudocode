/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C01D54CC
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     EditionProcessPointerInputAsMouse @ 0x1C01D5B50 (EditionProcessPointerInputAsMouse.c)
 * Callees:
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01D45A4 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1C01D469C (-CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z.c)
 *     ?CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z @ 0x1C01D473C (-CreateMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagPOINTER_INFO@@GG@Z.c)
 *     ?DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01D47C4 (-DetectPromotionType@@YAKPEBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C01D49EC (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01D4F08 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01D4F60 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 *     ?WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z @ 0x1C01D5214 (-WantDirectPromotion@@YAHAEBUtagPOINTER_INFO@@PEAK@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01D56A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 */

void __fastcall PointerPromotion::xxxProcessPointerInputAsMouse(
        __m128i *this,
        const struct tagPOINTER_INFO *a2,
        __int16 a3)
{
  __m128i v3; // xmm2
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // rbx
  unsigned __int16 v6; // r12
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  unsigned __int64 v9; // rsi
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  unsigned int v12; // eax
  unsigned __int16 v13; // di
  int v14; // r14d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned __int16 v18; // dx
  PointerPromotion *v19; // rcx
  unsigned __int16 v20[8]; // [rsp+20h] [rbp-60h] BYREF
  __m128i v21; // [rsp+30h] [rbp-50h]
  __m128i v22; // [rsp+40h] [rbp-40h]
  __m128i v23; // [rsp+50h] [rbp-30h]
  __m128i v24; // [rsp+60h] [rbp-20h]
  __m128i v25; // [rsp+70h] [rbp-10h]
  unsigned int v26; // [rsp+B0h] [rbp+30h] BYREF

  v3 = *this;
  MousePromotionEntry = 0LL;
  v6 = (unsigned __int16)a2;
  v7 = this[2];
  v21 = this[1];
  v8 = this[3];
  *(__m128i *)v20 = v3;
  v9 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v23 = v8;
  v10 = this[5];
  v22 = v7;
  v11 = this[4];
  v25 = v10;
  v24 = v11;
  if ( (v9 & 0x200000000000LL) == 0 )
  {
    if ( !(unsigned int)HandleLossOfPrimary((struct tagPOINTER_INFO *)v20) )
      goto LABEL_29;
    LODWORD(v9) = *(_DWORD *)&v20[4];
  }
  v12 = dword_1C032C4B8;
  if ( (v20[6] & 0x8000) != 0 )
  {
    v12 = dword_1C032C4B8 & 0xFFFFFFF7;
    dword_1C032C4B8 &= ~8u;
  }
  v13 = v20[2];
  if ( v20[2] != word_1C032C3B0[0] || (a3 & 0x10) != 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      CancelAutoPromotion();
      v12 = dword_1C032C4B8;
    }
    dword_1C032C4B8 = v12 & 0xFFFFFFF7;
    ResetMousePromotionInfo(v13);
  }
  v14 = CoalesceMousePromotionEntry((const struct tagPOINTER_INFO *)v20, a3);
  if ( !v14 )
  {
    MousePromotionEntry = CreateMousePromotionEntry((const struct tagPOINTER_INFO *)v20, v6, a3);
    if ( !MousePromotionEntry )
      goto LABEL_29;
    LODWORD(v9) = *(_DWORD *)&v20[4];
    v13 = v20[2];
  }
  qword_1C032C4A8 = v21.m128i_i64[1];
  dword_1C032C3B4 = v9;
  if ( MousePromotionEntry )
  {
    if ( (dword_1C032C4B8 & 2) != 0 )
    {
      if ( (dword_1C032C4B8 & 4) != 0 )
        *((_DWORD *)MousePromotionEntry + 11) &= ~1u;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C430, MousePromotionEntry);
      if ( (*((_DWORD *)MousePromotionEntry + 5) & 0x40000) != 0 )
        dword_1C032C4B8 &= 0xFFFFFFF9;
      goto LABEL_29;
    }
    QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C032C3C0, MousePromotionEntry);
  }
  if ( v14 || MousePromotionEntry )
  {
    if ( (dword_1C032C4B8 & 8) != 0 )
    {
      v15 = DetectPromotionType(0LL, qword_1C032C3C8);
      if ( v15 == 0x10000000 )
        goto LABEL_29;
      v17 = v15;
      v18 = v9;
      v19 = (PointerPromotion *)v13;
    }
    else
    {
      if ( !(unsigned int)WantDirectPromotion((const struct tagPOINTER_INFO *)v20, &v26) )
        goto LABEL_29;
      v17 = v26;
      v18 = v20[4];
      v19 = (PointerPromotion *)v20[2];
    }
    PointerPromotion::xxxPromotePointer(v19, v18, v17, v16);
  }
LABEL_29:
  xxxProcessMousePromotionQueue();
}
