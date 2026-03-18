/*
 * XREFs of ??_ECSecondarySysmemBitmap@@MEAAPEAXI@Z @ 0x1800249C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSecondarySysmemBitmap@@MEAA@XZ @ 0x1800249F0 (--1CSecondarySysmemBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::`vector deleting destructor'(
        CSecondarySysmemBitmap *this,
        char a2)
{
  CSecondarySysmemBitmap::~CSecondarySysmemBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
