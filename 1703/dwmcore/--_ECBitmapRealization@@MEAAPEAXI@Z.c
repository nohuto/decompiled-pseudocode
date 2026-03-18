/*
 * XREFs of ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x18015A990
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBitmapRealization@@MEAA@XZ @ 0x180036FBC (--1CBitmapRealization@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CBitmapRealization *__fastcall CBitmapRealization::`vector deleting destructor'(CBitmapRealization *this, char a2)
{
  CBitmapRealization::~CBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
