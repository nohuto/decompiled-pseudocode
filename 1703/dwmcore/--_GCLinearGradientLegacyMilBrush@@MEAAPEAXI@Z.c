/*
 * XREFs of ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x180153ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x18017B69C (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 */

CLinearGradientLegacyMilBrush *__fastcall CLinearGradientLegacyMilBrush::`scalar deleting destructor'(
        CLinearGradientLegacyMilBrush *this,
        char a2)
{
  CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
