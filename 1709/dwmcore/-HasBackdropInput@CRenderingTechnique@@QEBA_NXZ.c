/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18006DB58
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x18006C750 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 * Callees:
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18006BADC (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18006E21C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  char *v3; // rax
  _BYTE *v4; // rcx
  _BYTE *v5; // r8
  bool v6; // bl
  __int128 v8; // [rsp+20h] [rbp-30h]
  LPVOID lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  v1 = *((_QWORD *)this + 2);
  v10 = 0LL;
  DWORD2(v8) = 0;
  *(_OWORD *)lpMem = 0LL;
  *(_QWORD *)&v8 = v1;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(lpMem);
  v3 = (char *)lpMem[1];
  if ( lpMem[1] )
  {
    *(_OWORD *)lpMem[1] = v8;
    v3 = (char *)lpMem[1];
  }
  lpMem[1] = v3 + 16;
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  while ( 1 )
  {
    v4 = lpMem[1];
    v5 = lpMem[0];
    if ( !(((char *)lpMem[1] - (char *)lpMem[0]) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBackdropInput(
           *((CRenderingTechniqueFragment **)lpMem[1] - 2),
           *((const struct CBrushRenderingGraph **)this + 1)) )
    {
      v4 = lpMem[1];
      v5 = lpMem[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  v6 = (v4 - v5) >> 4 != 0;
  if ( v5 )
    HeapFree(WPF::g_processHeap, 0, v5);
  return v6;
}
