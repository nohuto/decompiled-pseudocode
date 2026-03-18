/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800CDCF0
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OIA@EAAPEAXI@Z @ 0x1800D6350 (--_ECHwFullScreenRenderTarget@@OIA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800CDC64 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 */

CHwFullScreenRenderTarget *__fastcall CHwFullScreenRenderTarget::`scalar deleting destructor'(
        CHwFullScreenRenderTarget *this,
        char a2)
{
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
