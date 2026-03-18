/*
 * XREFs of ??_ECBitmapOfDeviceBitmaps@@MEAAPEAXI@Z @ 0x18007DC80
 * Callers:
 *     ??_ECBitmapOfDeviceBitmaps@@OOA@EAAPEAXI@Z @ 0x1800C6870 (--_ECBitmapOfDeviceBitmaps@@OOA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapOfDeviceBitmaps@@MEAA@XZ @ 0x18007E070 (--1CBitmapOfDeviceBitmaps@@MEAA@XZ.c)
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
