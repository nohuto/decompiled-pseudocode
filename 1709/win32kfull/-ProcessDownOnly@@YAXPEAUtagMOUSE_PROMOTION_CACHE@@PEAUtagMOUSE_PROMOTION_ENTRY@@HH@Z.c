/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C01E1420
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01E15D0 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E0DCC (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C01E0ED8 (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        __int64 a3,
        int a4)
{
  int v6; // edi
  __int64 v8; // rax

  v6 = a3;
  ClearMousePromotionQueueUntil(a1 + 1, a2, a3);
  v8 = Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( v8 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v8 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v8 = 0LL;
    if ( v6 )
      *(_DWORD *)(v8 + 44) &= ~1u;
    AppendMousePromotionQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0,
      (struct tagMOUSE_PROMOTION_ENTRY *)v8,
      (struct tagMOUSE_PROMOTION_ENTRY *)v8);
    word_1C0327710 = *(_WORD *)a1;
    dword_1C0327714 = *((_DWORD *)a2 + 8);
    qword_1C0327718 = gptiCurrent;
    dword_1C0327720 = v6;
    dword_1C0327724 = a4;
  }
}
