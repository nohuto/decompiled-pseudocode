/*
 * XREFs of ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x18004D2D0
 * Callers:
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x18002B2F0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ??_ECDxHandleBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800C70E0 (--_ECDxHandleBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004D254 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleBitmapRealization *__fastcall CDxHandleBitmapRealization::`vector deleting destructor'(
        CDxHandleBitmapRealization *this,
        char a2)
{
  CDxHandleBitmapRealization::~CDxHandleBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
