/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801ADF60
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OJA@EAAPEAXI@Z @ 0x1800C6B60 (--_ECHwFullScreenRenderTarget@@OJA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1801ADEB8 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
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
