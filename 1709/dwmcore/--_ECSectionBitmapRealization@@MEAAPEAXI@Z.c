/*
 * XREFs of ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x180087CC0
 * Callers:
 *     ??_ECSectionBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800C7000 (--_ECSectionBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x180087DA4 (--1CSectionBitmapRealization@@MEAA@XZ.c)
 */

CSectionBitmapRealization *__fastcall CSectionBitmapRealization::`vector deleting destructor'(
        CSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
