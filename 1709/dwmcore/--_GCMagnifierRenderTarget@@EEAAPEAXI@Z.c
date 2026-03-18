/*
 * XREFs of ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x180137E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x180137DD8 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::`scalar deleting destructor'(
        CMagnifierRenderTarget *this,
        char a2)
{
  CMagnifierRenderTarget::~CMagnifierRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
