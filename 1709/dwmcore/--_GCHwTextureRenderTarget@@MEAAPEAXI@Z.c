/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x180090170
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OJA@EAAPEAXI@Z @ 0x1800C68B0 (--_ECHwTextureRenderTarget@@OJA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x1800900B8 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 */

CHwTextureRenderTarget *__fastcall CHwTextureRenderTarget::`scalar deleting destructor'(
        CHwTextureRenderTarget *this,
        char a2)
{
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
