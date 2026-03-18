/*
 * XREFs of ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x1801D1E00
 * Callers:
 *     ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@OFI@EAAPEAXI@Z @ 0x1800C7180 (--_ECDxHandleAdvancedDirectFlipBitmapRealization@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x1801D1D8C (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleAdvancedDirectFlipBitmapRealization *__fastcall CDxHandleAdvancedDirectFlipBitmapRealization::`scalar deleting destructor'(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        char a2)
{
  CDxHandleAdvancedDirectFlipBitmapRealization::~CDxHandleAdvancedDirectFlipBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
