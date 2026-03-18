/*
 * XREFs of ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18016B4BC
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18016E37C (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x18016E420 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180189554 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z.c)
 * Callees:
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18016BF1C (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CInteractionTracker::ClampValueToBoundary(__int64 a1, __int64 a2, double a3)
{
  float v4; // [rsp+40h] [rbp+18h] BYREF
  float v5; // [rsp+48h] [rbp+20h] BYREF

  CInteractionTracker::GetScrollRange(a1, a2, &v4, &v5);
  *(float *)&a3 = fminf(fmaxf(*(float *)&a3, v4), v5);
  return *(__m128 *)&a3;
}
