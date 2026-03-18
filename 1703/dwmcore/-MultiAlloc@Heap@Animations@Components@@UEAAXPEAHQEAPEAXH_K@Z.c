/*
 * XREFs of ?MultiAlloc@Heap@Animations@Components@@UEAAXPEAHQEAPEAXH_K@Z @ 0x1801BA150
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 */

void __fastcall Components::Animations::Heap::MultiAlloc(
        Components::Animations::Heap *this,
        int *a2,
        void **const a3,
        int a4,
        size_t Size)
{
  int i; // ebx
  void *v9; // rax

  for ( i = 0; i < a4; ++a3 )
  {
    v9 = WPF::ProcessHeapImpl::AllocClear(Size);
    *a3 = v9;
    if ( !v9 )
      break;
    ++i;
  }
  *a2 = i;
}
