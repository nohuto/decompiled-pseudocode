/*
 * XREFs of ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x180132C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180132860 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::`vector deleting destructor'(
        CDesktopRenderTarget *this,
        char a2)
{
  CDesktopRenderTarget::~CDesktopRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
