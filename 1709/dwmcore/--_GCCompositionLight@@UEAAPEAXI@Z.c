/*
 * XREFs of ??_GCCompositionLight@@UEAAPEAXI@Z @ 0x18015B130
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1800B1520 (--1CCompositionLight@@UEAA@XZ.c)
 */

void **__fastcall CCompositionLight::`scalar deleting destructor'(void **this, char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
