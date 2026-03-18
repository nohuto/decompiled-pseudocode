/*
 * XREFs of ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C01E14E0
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01E15D0 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E0DCC (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01E0ED8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E109C (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YAXXZ @ 0x1C01E18E4 (-ResetPendingPromotion@@YAXXZ.c)
 */

void __fastcall ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        int a4,
        unsigned int a5,
        int a6)
{
  struct tagMOUSE_PROMOTION_ENTRY **v6; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagMOUSE_PROMOTION_ENTRY *v12; // rdi
  struct tagMOUSE_PROMOTION_ENTRY *v13; // rbx
  struct tagMOUSE_PROMOTION_ENTRY *v14; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *i; // rax
  struct tagMOUSE_PROMOTION_ENTRY *v16; // rcx
  struct tagMOUSE_PROMOTION_ENTRY *v17[2]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a1 + 1;
  ClearMousePromotionQueueUntil(a1 + 1, a2, (__int64)a3);
  *(_OWORD *)v17 = 0LL;
  ExtractRangeFromQueue(v6, (struct tagMOUSE_PROMOTION_QUEUE *)v17, a2, a3);
  v12 = v17[1];
  v13 = v17[0];
  if ( a4 )
  {
    *((_QWORD *)v17[1] + 1) = *((_QWORD *)v17[0] + 1);
    while ( 1 )
    {
      v14 = *(struct tagMOUSE_PROMOTION_ENTRY **)v13;
      if ( *(struct tagMOUSE_PROMOTION_ENTRY **)v13 == v12 )
        break;
      *(_QWORD *)v13 = *(_QWORD *)v14;
      Win32FreePool(v14, v10, v11);
    }
  }
  if ( a5 || a6 )
  {
    for ( i = v13; i; i = *(struct tagMOUSE_PROMOTION_ENTRY **)i )
    {
      if ( a5 )
        *((_DWORD *)i + 11) &= ~1u;
      if ( a6 )
        *((_DWORD *)i + 11) |= 0x40u;
    }
  }
  if ( word_1C0327710 )
  {
    v16 = v13;
    v13 = *(struct tagMOUSE_PROMOTION_ENTRY **)v13;
    Win32FreePool(v16, a5, v11);
    ResetPendingPromotion();
  }
  if ( v13 )
    AppendMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0, v13, v12);
}
