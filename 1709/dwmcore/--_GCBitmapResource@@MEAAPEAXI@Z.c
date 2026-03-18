/*
 * XREFs of ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18008D654
 * Callers:
 *     ??_ECBitmapResource@@OBA@EAAPEAXI@Z @ 0x1800C66A0 (--_ECBitmapResource@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapResource@@MEAA@XZ @ 0x18008D544 (--1CBitmapResource@@MEAA@XZ.c)
 */

CBitmapResource *__fastcall CBitmapResource::`scalar deleting destructor'(CBitmapResource *this, char a2)
{
  CBitmapResource::~CBitmapResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
