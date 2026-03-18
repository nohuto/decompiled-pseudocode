/*
 * XREFs of ??_ECColorKeyBitmap@@MEAAPEAXI@Z @ 0x1801D12A0
 * Callers:
 *     ??_ECColorKeyBitmap@@OFI@EAAPEAXI@Z @ 0x1800C7070 (--_ECColorKeyBitmap@@OFI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CColorKeyBitmap@@MEAA@XZ @ 0x1801D120C (--1CColorKeyBitmap@@MEAA@XZ.c)
 */

CColorKeyBitmap *__fastcall CColorKeyBitmap::`vector deleting destructor'(CColorKeyBitmap *this, char a2)
{
  CColorKeyBitmap::~CColorKeyBitmap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
