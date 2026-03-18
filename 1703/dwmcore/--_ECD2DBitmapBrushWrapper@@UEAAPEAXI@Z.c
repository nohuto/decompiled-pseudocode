/*
 * XREFs of ??_ECD2DBitmapBrushWrapper@@UEAAPEAXI@Z @ 0x1800C8390
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DBitmapBrushWrapper@@UEAA@XZ @ 0x1800C82F4 (--1CD2DBitmapBrushWrapper@@UEAA@XZ.c)
 */

CD2DBitmapBrushWrapper *__fastcall CD2DBitmapBrushWrapper::`vector deleting destructor'(
        CD2DBitmapBrushWrapper *this,
        char a2)
{
  CD2DBitmapBrushWrapper::~CD2DBitmapBrushWrapper(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
