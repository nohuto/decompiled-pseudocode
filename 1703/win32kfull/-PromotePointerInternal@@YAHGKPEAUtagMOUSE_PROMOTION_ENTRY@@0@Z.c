/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01D4D18
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01D4964 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01D56A0 (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00FDE4C (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01D489C (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C01D4B90 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@H@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z @ 0x1C01D4C3C (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C01D504C (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  __int16 v7; // r15
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v9; // rsi
  unsigned int v10; // edx
  int v11; // r13d
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r13
  struct tagMOUSE_PROMOTION_QUEUE *v16; // r15
  unsigned int v17; // eax
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF
  int v21; // [rsp+90h] [rbp+18h]

  v7 = a1;
  CacheById = FindCacheById(a1, &v20);
  v9 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C032C4B8 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C032C3B8
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C032C4B8 &= ~8u;
  }
  v10 = v20;
  v11 = a2 & 2;
  v21 = v11;
  v12 = (a2 & 0x40000) != 0;
  if ( (a2 & 0x40000) != 0 )
    v12 = ValidateDoubleClick((const struct tagTAP_INFO *)&qword_1C032C470, v20, *((_DWORD *)a3 + 4), (a2 & 2) != 0);
  if ( v12 )
    *((_QWORD *)a3 + 1) = qword_1C032C47C;
  v13 = v10 + 1;
  v14 = *((_QWORD *)a3 + 1);
  v20 = *((_DWORD *)a3 + 4);
  if ( (unsigned int)v13 < 5 )
  {
    v15 = (unsigned int)(5 - v13);
    v16 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C032C3C0 + 24 * v13);
    do
    {
      EmptyMousePromotionQueue(v16);
      v16 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v16 + 24);
      --v15;
    }
    while ( v15 );
    v7 = a1;
    v11 = v21;
  }
  if ( (a2 & 0x80000) != 0 )
  {
    ProcessDownOnly(v9, a3, (a2 & 2) != 0);
  }
  else
  {
    ProcessRangeInCache(v9, a3, a4, (a2 & 0x20000) != 0, (a2 & 2) != 0);
    if ( !a4 )
    {
      if ( v11 )
        v17 = dword_1C032C4B8 | 4;
      else
        v17 = dword_1C032C4B8 & 0xFFFFFFFB;
      dword_1C032C4B8 = v17 | 2;
    }
  }
  if ( (a2 & 0x20000) != 0 )
  {
    qword_1C032C470 = gptiCurrent;
    dword_1C032C484 = v20;
    word_1C032C478 = v7;
    qword_1C032C47C = v14;
    dword_1C032C488 = (a2 & 2) != 0;
  }
  else if ( a2 )
  {
    memset(&qword_1C032C470, 0, 0x20uLL);
  }
  return 1LL;
}
