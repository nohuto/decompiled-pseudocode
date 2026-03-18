/*
 * XREFs of ?IsHDRContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180179920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderTargetImageSource::IsHDRContent(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHDRContent((CRenderTargetImageSource *)((char *)this + 8));
}
