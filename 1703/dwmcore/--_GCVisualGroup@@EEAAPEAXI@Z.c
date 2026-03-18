/*
 * XREFs of ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x1801631D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CVisualGroup@@EEAA@XZ @ 0x180163184 (--1CVisualGroup@@EEAA@XZ.c)
 */

void **__fastcall CVisualGroup::`scalar deleting destructor'(void **this, char a2)
{
  CVisualGroup::~CVisualGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
