/*
 * XREFs of ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x1800177C8
 * Callers:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 * Callees:
 *     ?_Reallocate@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x180017724 (-_Reallocate@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CF.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[1];
  if ( !((a1[2] - v2) >> 4) )
  {
    v3 = (v2 - *a1) >> 4;
    if ( v3 == 0xFFFFFFFFFFFFFFFLL )
    {
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
      __debugbreak();
    }
    v4 = v3 + 1;
    v5 = (__int64)(a1[2] - *a1) >> 4;
    v6 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFLL - (v5 >> 1) >= v5 )
      v6 = v5 + (v5 >> 1);
    if ( v6 >= v4 )
      v4 = v6;
    std::vector<CFragmentIterator::FragmentStackEntry>::_Reallocate((__int64)a1, v4);
  }
}
