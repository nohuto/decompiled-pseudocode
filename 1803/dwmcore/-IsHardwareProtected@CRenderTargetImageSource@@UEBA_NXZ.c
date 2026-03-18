/*
 * XREFs of ?IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ @ 0x180179930
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetImageSource@@WJI@EBA_NXZ @ 0x1800DD850 (-IsHardwareProtected@CRenderTargetImageSource@@WJI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetImageSource::IsHardwareProtected(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetImageSource *)((char *)this + 152));
}
