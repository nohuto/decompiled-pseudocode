/*
 * XREFs of ??_ECCompositionAmbientLight@@UEAAPEAXI@Z @ 0x1800B1180
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1800B1520 (--1CCompositionLight@@UEAA@XZ.c)
 */

CCompositionAmbientLight *__fastcall CCompositionAmbientLight::`vector deleting destructor'(
        CCompositionAmbientLight *this,
        char a2)
{
  *(_QWORD *)this = &CCompositionAmbientLight::`vftable';
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
