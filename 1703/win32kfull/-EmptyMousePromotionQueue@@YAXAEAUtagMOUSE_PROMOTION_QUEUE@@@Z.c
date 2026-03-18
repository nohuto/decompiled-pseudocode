/*
 * XREFs of ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00FDE4C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     ?CancelAutoPromotion@@YAXXZ @ 0x1C01D45A4 (-CancelAutoPromotion@@YAXXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01D4A44 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01D4D18 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C01D4F60 (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall EmptyMousePromotionQueue(struct tagMOUSE_PROMOTION_QUEUE *a1)
{
  _QWORD *v2; // rcx

  while ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD **)a1;
    *(_QWORD *)a1 = **(_QWORD **)a1;
    Win32FreePool(v2);
  }
  *((_QWORD *)a1 + 1) = 0LL;
}
