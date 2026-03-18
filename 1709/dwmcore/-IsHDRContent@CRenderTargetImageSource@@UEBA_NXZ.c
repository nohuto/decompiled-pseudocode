/*
 * XREFs of ?IsHDRContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180150130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetImageSource::IsHDRContent(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHDRContent((CRenderTargetImageSource *)((char *)this + 8));
}
