/*
 * XREFs of ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x1800862B0
 * Callers:
 *     ??1CHwSurfaceRenderTargetSharedData@@IEAA@XZ @ 0x18007BC8C (--1CHwSurfaceRenderTargetSharedData@@IEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHwBitmapBrush@@UEAA@XZ @ 0x180086274 (--1CHwBitmapBrush@@UEAA@XZ.c)
 */

CHwBitmapBrush *__fastcall CHwBitmapBrush::`scalar deleting destructor'(CHwBitmapBrush *this, char a2)
{
  CHwBitmapBrush::~CHwBitmapBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
