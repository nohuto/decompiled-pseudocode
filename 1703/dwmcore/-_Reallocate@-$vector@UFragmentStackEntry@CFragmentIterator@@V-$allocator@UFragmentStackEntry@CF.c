/*
 * XREFs of ?_Reallocate@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x180017724
 * Callers:
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x1800177C8 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Reallocate(__int64 a1, unsigned __int64 a2)
{
  _OWORD *v2; // rbp
  _OWORD *v5; // rdx
  _OWORD *v6; // rcx
  _OWORD *i; // rax
  __int64 v8; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0xFFFFFFFFFFFFFFFLL || (v2 = operator new(16 * a2)) == 0LL )
    {
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
      __debugbreak();
    }
  }
  v5 = *(_OWORD **)(a1 + 8);
  v6 = v2;
  for ( i = *(_OWORD **)a1; i != v5; ++i )
  {
    if ( v6 )
      *v6 = *i;
    ++v6;
  }
  v8 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
    WPF::ProcessHeapImpl::Free(*(void **)a1);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 16) = &v2[a2];
  *(_QWORD *)(a1 + 8) = (char *)v2 + (v8 & 0xFFFFFFFFFFFFFFF0uLL);
}
