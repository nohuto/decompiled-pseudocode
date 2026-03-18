/*
 * XREFs of ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18007D054
 * Callers:
 *     ??_ECBitmapResource@@OBA@EAAPEAXI@Z @ 0x1800D5BC0 (--_ECBitmapResource@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CBitmapResource@@MEAA@XZ @ 0x18007D014 (--1CBitmapResource@@MEAA@XZ.c)
 */

CBitmapResource *__fastcall CBitmapResource::`scalar deleting destructor'(CBitmapResource *this, char a2)
{
  CBitmapResource::~CBitmapResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
