/*
 * XREFs of ??_EHeap@Animations@Components@@UEAAPEAXI@Z @ 0x1801BA0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

Components::Animations::Heap *__fastcall Components::Animations::Heap::`vector deleting destructor'(
        Components::Animations::Heap *this,
        char a2)
{
  *(_QWORD *)this = &Components::Animations::Heap::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
