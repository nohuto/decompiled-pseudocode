/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x1801F3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall CHDRConversionRenderTarget::ReleaseResourcesForDisplayChange(CHDRConversionRenderTarget *this)
{
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 49);
  CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(this);
}
