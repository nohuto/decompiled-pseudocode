/*
 * XREFs of ??_ECVisual@@MEAAPEAXI@Z @ 0x18004DD40
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 */

CVisual *__fastcall CVisual::`vector deleting destructor'(CVisual *this, char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
