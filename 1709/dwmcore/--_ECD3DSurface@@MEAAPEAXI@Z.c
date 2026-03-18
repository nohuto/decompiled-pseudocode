/*
 * XREFs of ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x18002E400
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DSurface@@MEAA@XZ @ 0x18002E0B4 (--1CD3DSurface@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD3DSurface *__fastcall CD3DSurface::`vector deleting destructor'(CD3DSurface *this, char a2)
{
  CD3DSurface::~CD3DSurface(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
