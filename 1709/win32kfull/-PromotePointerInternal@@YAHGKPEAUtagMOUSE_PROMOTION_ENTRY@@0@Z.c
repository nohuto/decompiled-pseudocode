/*
 * XREFs of ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01E15D0
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C01E11E4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C01E1F7C (-xxxPromotePointer@PointerPromotion@@YAHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00D7B34 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01E111C (-FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z.c)
 *     ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C01E1420 (-ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01E14E0 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C01E191C (-ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z.c)
 */

__int64 __fastcall PromotePointerInternal(
        __int16 a1,
        unsigned int a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4)
{
  unsigned int v4; // r13d
  __int16 v7; // r12
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // rax
  struct tagMOUSE_PROMOTION_ENTRY **v9; // rbp
  unsigned int v10; // edx
  int v11; // edi
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r13
  struct tagMOUSE_PROMOTION_QUEUE *v17; // r12
  unsigned int v18; // eax
  int v20; // [rsp+30h] [rbp-48h]
  BOOL v21; // [rsp+34h] [rbp-44h]
  int v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+3Ch] [rbp-3Ch]
  unsigned int v26; // [rsp+90h] [rbp+18h] BYREF

  v4 = a2;
  v7 = a1;
  CacheById = FindCacheById(a1, &v26);
  v9 = (struct tagMOUSE_PROMOTION_ENTRY **)CacheById;
  if ( (dword_1C0327738 & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_1C0327638
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 2)) )
  {
    dword_1C0327738 &= ~8u;
  }
  v10 = v26;
  v22 = v4 & 2;
  v20 = v4 & 0x80000;
  v23 = v4 & 0x20000;
  v21 = (v4 & 0x20000) != 0;
  v11 = (v4 >> 25) & 1;
  v12 = (v4 & 0x40000) != 0;
  if ( (v4 & 0x40000) != 0 )
    v12 = ValidateDoubleClick((const struct tagTAP_INFO *)&qword_1C03276F0, v26, *((_DWORD *)a3 + 4), (v4 & 2) != 0);
  if ( v12 )
    *((_QWORD *)a3 + 1) = qword_1C03276FC;
  v13 = v10 + 1;
  v14 = *((_QWORD *)a3 + 1);
  v26 = *((_DWORD *)a3 + 4);
  if ( (unsigned int)v13 < 5 )
  {
    v15 = (unsigned int)(5 - v13);
    v16 = (unsigned int)v15;
    v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)&unk_1C0327640 + 24 * v13);
    do
    {
      EmptyMousePromotionQueue(v17, v13, v15);
      v17 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v17 + 24);
      --v16;
    }
    while ( v16 );
    v4 = a2;
    v7 = a1;
  }
  if ( v20 )
  {
    ProcessDownOnly(v9, a3, v22 != 0, v11);
  }
  else
  {
    ProcessRangeInCache(v9, a3, a4, v21, v22 != 0, v11);
    if ( !a4 )
    {
      if ( v22 )
        v18 = dword_1C0327738 | 4;
      else
        v18 = dword_1C0327738 & 0xFFFFFFFB;
      dword_1C0327738 = v18 & 0xFFFFFFEF | (16 * v11) | 2;
    }
  }
  if ( v23 )
  {
    qword_1C03276F0 = gptiCurrent;
    dword_1C0327704 = v26;
    word_1C03276F8 = v7;
    qword_1C03276FC = v14;
    dword_1C0327708 = v22 != 0;
  }
  else if ( v4 )
  {
    memset(&qword_1C03276F0, 0, 0x20uLL);
  }
  return 1LL;
}
