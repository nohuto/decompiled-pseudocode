/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18006D3A8
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x18006DC1C (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18006D450 (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18006E21C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  __int64 v1; // rax
  char *v3; // rax
  __int128 v4; // [rsp+20h] [rbp-30h]
  LPVOID lpMem[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+40h] [rbp-10h]

  v1 = *((_QWORD *)this + 2);
  v6 = 0LL;
  DWORD2(v4) = 0;
  *(_OWORD *)lpMem = 0LL;
  *(_QWORD *)&v4 = v1;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(lpMem);
  v3 = (char *)lpMem[1];
  if ( lpMem[1] )
  {
    *(_OWORD *)lpMem[1] = v4;
    v3 = (char *)lpMem[1];
  }
  lpMem[1] = v3 + 16;
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  while ( ((char *)lpMem[1] - (char *)lpMem[0]) >> 4 )
  {
    CRenderingTechnique::CollectStateFromFragment(this, *((struct CRenderingTechniqueFragment **)lpMem[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  if ( lpMem[0] )
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
}
