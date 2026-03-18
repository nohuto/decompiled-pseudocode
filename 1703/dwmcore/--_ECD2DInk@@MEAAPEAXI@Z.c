/*
 * XREFs of ??_ECD2DInk@@MEAAPEAXI@Z @ 0x180001600
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DInk@@MEAA@XZ @ 0x180001630 (--1CD2DInk@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD2DInk *__fastcall CD2DInk::`vector deleting destructor'(CD2DInk *this, char a2)
{
  CD2DInk::~CD2DInk(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
