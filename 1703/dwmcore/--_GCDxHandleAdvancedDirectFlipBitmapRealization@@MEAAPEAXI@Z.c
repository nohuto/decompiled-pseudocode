/*
 * XREFs of ??_GCDxHandleAdvancedDirectFlipBitmapRealization@@MEAAPEAXI@Z @ 0x1801B5070
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x1801B4FFC (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
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
