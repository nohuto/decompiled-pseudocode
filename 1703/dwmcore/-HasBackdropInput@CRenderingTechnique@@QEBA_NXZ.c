/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016B34
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x180003F80 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 * Callees:
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180015C20 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // rdx
  bool v5; // bl
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  int v8; // [rsp+28h] [rbp-28h]
  void *lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  v1 = *((_QWORD *)this + 2);
  v10 = 0LL;
  v8 = 0;
  v7 = v1;
  *(_OWORD *)lpMem = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v7);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  while ( 1 )
  {
    v3 = lpMem[1];
    v4 = lpMem[0];
    if ( !(((char *)lpMem[1] - (char *)lpMem[0]) >> 4) )
      break;
    if ( CRenderingTechniqueFragment::HasBackdropInput(
           *((CRenderingTechniqueFragment **)lpMem[1] - 2),
           *((const struct CBrushRenderingGraph **)this + 1)) )
    {
      v3 = lpMem[1];
      v4 = lpMem[0];
      break;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  v5 = (v3 - v4) >> 4 != 0;
  if ( v4 )
    WPF::ProcessHeapImpl::Free(v4);
  return v5;
}
