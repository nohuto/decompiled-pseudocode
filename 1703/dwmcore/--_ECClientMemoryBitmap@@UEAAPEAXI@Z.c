/*
 * XREFs of ??_ECClientMemoryBitmap@@UEAAPEAXI@Z @ 0x18007DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CClientMemoryBitmap@@UEAA@XZ @ 0x18007DEEC (--1CClientMemoryBitmap@@UEAA@XZ.c)
 */

CClientMemoryBitmap *__fastcall CClientMemoryBitmap::`vector deleting destructor'(CClientMemoryBitmap *this, char a2)
{
  CClientMemoryBitmap::~CClientMemoryBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
