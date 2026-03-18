/*
 * XREFs of ??_ECSolidColorLegacyMilBrush@@MEAAPEAXI@Z @ 0x18004B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSolidColorLegacyMilBrush@@MEAA@XZ @ 0x18004BCDC (--1CSolidColorLegacyMilBrush@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSolidColorLegacyMilBrush *__fastcall CSolidColorLegacyMilBrush::`vector deleting destructor'(
        CSolidColorLegacyMilBrush *this,
        char a2)
{
  CSolidColorLegacyMilBrush::~CSolidColorLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
