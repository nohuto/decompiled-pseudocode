/*
 * XREFs of ??_ECHwndBitmap@@MEAAPEAXI@Z @ 0x1800202B4
 * Callers:
 *     ??_ECHwndBitmap@@OBA@EAAPEAXI@Z @ 0x1800D5D30 (--_ECHwndBitmap@@OBA@EAAPEAXI@Z.c)
 *     ??_ECHwndBitmap@@OFI@EAAPEAXI@Z @ 0x1800D5D40 (--_ECHwndBitmap@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x180020210 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CHwndBitmap *__fastcall CHwndBitmap::`vector deleting destructor'(CHwndBitmap *this, char a2)
{
  CHwndBitmap::~CHwndBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
