/*
 * XREFs of ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x1800B1F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x1800B1FFC (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
 */

CBitmapOfDeviceBitmaps *__fastcall CBitmapOfDeviceBitmaps::`vector deleting destructor'(
        CBitmapOfDeviceBitmaps *this,
        char a2)
{
  CBitmapOfDeviceBitmaps::~CBitmapOfDeviceBitmaps(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
