/*
 * XREFs of ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x18007F110
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x18007F368 (--1CRedirectedGDISurface@@MEAA@XZ.c)
 */

CRedirectedGDISurface *__fastcall CRedirectedGDISurface::`vector deleting destructor'(
        CRedirectedGDISurface *this,
        char a2)
{
  CRedirectedGDISurface::~CRedirectedGDISurface(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
