/*
 * XREFs of ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800102C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800102F0 (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::`vector deleting destructor'(
        CWindowBackgroundTreatment *this,
        char a2)
{
  CWindowBackgroundTreatment::~CWindowBackgroundTreatment(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
