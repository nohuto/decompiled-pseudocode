/*
 * XREFs of ??_ECImageLegacyMilBrush@@MEAAPEAXI@Z @ 0x18007C140
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CImageLegacyMilBrush@@MEAA@XZ @ 0x18007CD04 (--1CImageLegacyMilBrush@@MEAA@XZ.c)
 */

CImageLegacyMilBrush *__fastcall CImageLegacyMilBrush::`vector deleting destructor'(
        CImageLegacyMilBrush *this,
        char a2)
{
  CImageLegacyMilBrush::~CImageLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
