/*
 * XREFs of ?FindMousePromotionEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@AEBUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x1C01E1150
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01E12D4 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E199C (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall FindMousePromotionEntry(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        unsigned int a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // rax

  for ( result = *a1;
        result && (*((_DWORD *)result + 8) > a2 || *((_DWORD *)result + 9) < a2);
        result = *(struct tagMOUSE_PROMOTION_ENTRY **)result )
  {
    ;
  }
  return result;
}
