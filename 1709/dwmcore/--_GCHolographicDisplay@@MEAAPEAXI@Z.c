/*
 * XREFs of ??_GCHolographicDisplay@@MEAAPEAXI@Z @ 0x1801BD060
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A9788 (--1CResource@@MEAA@XZ.c)
 */

CHolographicDisplay *__fastcall CHolographicDisplay::`scalar deleting destructor'(CHolographicDisplay *this, char a2)
{
  *(_QWORD *)this = &CHolographicDisplay::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicDisplay::`vftable'{for `IHolographicDisplayInfo'};
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
