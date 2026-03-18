/*
 * XREFs of ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180146AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801460FC (--1CFilterEffect@@MEAA@XZ.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::`vector deleting destructor'(CTurbulenceEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
