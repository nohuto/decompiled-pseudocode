/*
 * XREFs of ??_ECD2DResource@@MEAAPEAXI@Z @ 0x180199960
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DResource@@MEAA@XZ @ 0x18004BD5C (--1CD2DResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CD2DResource *__fastcall CD2DResource::`vector deleting destructor'(CD2DResource *this, char a2)
{
  CD2DResource::~CD2DResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
