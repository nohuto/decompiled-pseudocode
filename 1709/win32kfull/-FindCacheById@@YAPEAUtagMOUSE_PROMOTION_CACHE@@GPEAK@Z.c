/*
 * XREFs of ?FindCacheById@@YAPEAUtagMOUSE_PROMOTION_CACHE@@GPEAK@Z @ 0x1C01E111C
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z @ 0x1C01E12D4 (-OnPointerInputRetrieval@PointerPromotion@@YAXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C01E15D0 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C01E199C (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int16 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int16 *i; // r8

  v2 = 0LL;
  for ( i = word_1C0327638; *i != a1; i += 12 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 5 )
      return 0LL;
  }
  *a2 = v2;
  return (struct tagMOUSE_PROMOTION_CACHE *)&word_1C0327638[12 * v2];
}
