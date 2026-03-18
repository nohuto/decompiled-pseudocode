/*
 * XREFs of ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x1801B6690
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1801B65E8 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 */

CDxHandleYUVBitmapRealization *__fastcall CDxHandleYUVBitmapRealization::`scalar deleting destructor'(
        CDxHandleYUVBitmapRealization *this,
        char a2)
{
  CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
