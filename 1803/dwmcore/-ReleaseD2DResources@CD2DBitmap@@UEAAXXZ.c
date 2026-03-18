/*
 * XREFs of ?ReleaseD2DResources@CD2DBitmap@@UEAAXXZ @ 0x1801E5C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DBitmap::ReleaseD2DResources(CD2DBitmap *this)
{
  ReleaseInterface<IBitmapLock>((__int64 *)this + 16);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 17);
  ReleaseInterface<IBitmapLock>((__int64 *)this + 18);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 19);
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 20);
}
