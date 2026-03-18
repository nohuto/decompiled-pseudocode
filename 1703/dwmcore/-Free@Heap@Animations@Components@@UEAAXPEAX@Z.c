/*
 * XREFs of ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1801BA130
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall Components::Animations::Heap::Free(Components::Animations::Heap *this, void *a2)
{
  if ( a2 )
    WPF::ProcessHeapImpl::Free(a2);
}
