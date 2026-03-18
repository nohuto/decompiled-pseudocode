/*
 * XREFs of ??_GCHolographicDisplay@@MEAAPEAXI@Z @ 0x1801A4590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180034F1C (--1CResource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CHolographicDisplay *__fastcall CHolographicDisplay::`scalar deleting destructor'(CHolographicDisplay *this, char a2)
{
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicDisplay::`vftable'{for `IHolographicDisplay'};
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
