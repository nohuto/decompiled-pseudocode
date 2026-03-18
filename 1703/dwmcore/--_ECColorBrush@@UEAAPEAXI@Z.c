/*
 * XREFs of ??_ECColorBrush@@UEAAPEAXI@Z @ 0x18008B890
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CColorBrush@@UEAA@XZ @ 0x18008BF24 (--1CColorBrush@@UEAA@XZ.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  CColorBrush::~CColorBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
