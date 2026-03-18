/*
 * XREFs of ??_ECBoundsBitmap@@MEAAPEAXI@Z @ 0x1800BF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CBoundsBitmap *__fastcall CBoundsBitmap::`vector deleting destructor'(CBoundsBitmap *this, char a2)
{
  *((_QWORD *)this + 2) = &CBoundsBitmap::`vftable'{for `IBitmapSource'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
