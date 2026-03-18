/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x1801BA440
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CHDRConversionRenderTarget::ReleaseResourcesForDisplayChange(CHDRConversionRenderTarget *this)
{
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 47);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
