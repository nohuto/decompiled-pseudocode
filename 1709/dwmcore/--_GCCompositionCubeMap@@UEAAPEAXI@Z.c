/*
 * XREFs of ??_GCCompositionCubeMap@@UEAAPEAXI@Z @ 0x18015A270
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x18015A20C (--1CCompositionCubeMap@@UEAA@XZ.c)
 */

CCompositionCubeMap *__fastcall CCompositionCubeMap::`scalar deleting destructor'(CCompositionCubeMap *this, char a2)
{
  CCompositionCubeMap::~CCompositionCubeMap(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
