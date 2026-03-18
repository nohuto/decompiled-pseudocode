/*
 * XREFs of ?MultiFree@Heap@Animations@Components@@UEAAXHQEAPEAX_K@Z @ 0x1801BA1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall Components::Animations::Heap::MultiFree(Components::Animations::Heap *this, int a2, void **const a3)
{
  __int64 v4; // rdi

  if ( a2 > 0 )
  {
    v4 = (unsigned int)a2;
    do
    {
      if ( *a3 )
        WPF::ProcessHeapImpl::Free(*a3);
      ++a3;
      --v4;
    }
    while ( v4 );
  }
}
