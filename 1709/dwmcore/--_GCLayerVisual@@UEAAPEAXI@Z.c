/*
 * XREFs of ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x180083290
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x180083830 (--1CLayerVisual@@UEAA@XZ.c)
 */

CLayerVisual *__fastcall CLayerVisual::`scalar deleting destructor'(CLayerVisual *this, char a2)
{
  CLayerVisual::~CLayerVisual(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
