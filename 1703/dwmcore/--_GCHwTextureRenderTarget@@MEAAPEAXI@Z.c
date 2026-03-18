/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x180049960
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OIA@EAAPEAXI@Z @ 0x1800D60F0 (--_ECHwTextureRenderTarget@@OIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x180049834 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
