/*
 * XREFs of ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x180071470
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x180071DDC (--1COverlayContext@@MEAA@XZ.c)
 */

COverlayContext *__fastcall COverlayContext::`vector deleting destructor'(COverlayContext *this, char a2)
{
  COverlayContext::~COverlayContext(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
