/*
 * XREFs of ??_ECColorBrush@@UEAAPEAXI@Z @ 0x180070A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CColorBrush@@UEAA@XZ @ 0x180070D10 (--1CColorBrush@@UEAA@XZ.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  CColorBrush::~CColorBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
