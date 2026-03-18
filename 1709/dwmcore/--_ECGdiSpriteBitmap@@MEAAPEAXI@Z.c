/*
 * XREFs of ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x18009D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18009E128 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::`vector deleting destructor'(CGdiSpriteBitmap *this, char a2)
{
  CGdiSpriteBitmap::~CGdiSpriteBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
