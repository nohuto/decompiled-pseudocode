/*
 * XREFs of ??_ECSystemMemoryBitmap@@UEAAPEAXI@Z @ 0x1801C3F00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSystemMemoryBitmap@@UEAA@XZ @ 0x18000AB44 (--1CSystemMemoryBitmap@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSystemMemoryBitmap *__fastcall CSystemMemoryBitmap::`vector deleting destructor'(CSystemMemoryBitmap *this, char a2)
{
  CSystemMemoryBitmap::~CSystemMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
