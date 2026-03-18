/*
 * XREFs of ??_ECD2DInk@@MEAAPEAXI@Z @ 0x1801B3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DInk@@MEAA@XZ @ 0x1801B3CA0 (--1CD2DInk@@MEAA@XZ.c)
 */

CD2DInk *__fastcall CD2DInk::`vector deleting destructor'(CD2DInk *this, char a2)
{
  CD2DInk::~CD2DInk(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
