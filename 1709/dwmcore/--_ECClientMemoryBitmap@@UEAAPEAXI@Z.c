/*
 * XREFs of ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x18000A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x18000A83C (--1CClientMemoryBitmap@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
