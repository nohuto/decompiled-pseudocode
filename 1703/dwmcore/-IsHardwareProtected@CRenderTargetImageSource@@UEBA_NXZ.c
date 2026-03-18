/*
 * XREFs of ?IsHardwareProtected@CRenderTargetImageSource@@UEBA_NXZ @ 0x18015A920
 * Callers:
 *     ?IsHardwareProtected@CRenderTargetImageSource@@WHA@EBA_NXZ @ 0x1800D5990 (-IsHardwareProtected@CRenderTargetImageSource@@WHA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderTargetImageSource::IsHardwareProtected(CRenderTargetImageSource *this)
{
  return CRenderTargetBitmap::IsHardwareProtected((CRenderTargetImageSource *)((char *)this + 112));
}
