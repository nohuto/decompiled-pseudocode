/*
 * XREFs of ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180002A80
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1800033F0 (--1CFilterEffect@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::`vector deleting destructor'(CTurbulenceEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
