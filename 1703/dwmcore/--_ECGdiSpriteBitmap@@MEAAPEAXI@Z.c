/*
 * XREFs of ??_ECGdiSpriteBitmap@@MEAAPEAXI@Z @ 0x180055A28
 * Callers:
 *     ??_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z @ 0x1800D5BF0 (--_ECGdiSpriteBitmap@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180055960 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 */

CGdiSpriteBitmap *__fastcall CGdiSpriteBitmap::`vector deleting destructor'(CGdiSpriteBitmap *this, char a2)
{
  CGdiSpriteBitmap::~CGdiSpriteBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
