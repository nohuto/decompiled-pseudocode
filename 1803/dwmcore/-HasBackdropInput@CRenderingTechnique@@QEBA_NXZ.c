/*
 * XREFs of ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180070D68
 * Callers:
 *     ?CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ @ 0x180036394 (-CheckBackdropInputs@CBrushRenderingGraphBuilder@@AEAAXXZ.c)
 * Callees:
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180036E14 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800BD2E0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800BD344 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x1800BD368 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

bool __fastcall CRenderingTechnique::HasBackdropInput(CRenderingTechnique *this)
{
  __int64 v1; // rax
  _BYTE *v3; // rcx
  _BYTE *v4; // r8
  bool v5; // bl
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  LPVOID lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h]

  v1 = *((_QWORD *)this + 2);
  v12 = 0LL;
  v10 = 0;
  v9 = v1;
  *(_OWORD *)lpMem = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v9);
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
  {
    v6 = (unsigned __int64)v4;
    v7 = (v12 - (__int64)v4) >> 4;
    if ( v7 > 0xFFFFFFFFFFFFFFFLL
      || 16 * v7 >= 0x1000
      && (((unsigned __int8)v4 & 0x1F) != 0
       || (v4 = (_BYTE *)*((_QWORD *)v4 - 1), (unsigned __int64)v4 >= v6)
       || (v6 = v6 - (_QWORD)v4 - 8, v6 > 0x1F)) )
    {
      _o__invalid_parameter_noinfo_noreturn(v6);
      JUMPOUT(0x180070E48LL);
    }
    if ( v4 )
      HeapFree(WPF::g_processHeap, 0, v4);
  }
  return v5;
}
