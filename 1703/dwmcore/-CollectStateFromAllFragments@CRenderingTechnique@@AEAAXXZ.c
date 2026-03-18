/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800172D0
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x180016BD8 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18001719C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  __int64 v2; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+28h] [rbp-30h]
  void *lpMem[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  v3 = 0;
  *(_OWORD *)lpMem = 0LL;
  v5 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v2);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  while ( ((char *)lpMem[1] - (char *)lpMem[0]) >> 4 )
  {
    CRenderingTechnique::CollectStateFromFragment(
      (struct CBrushRenderingGraph **)this,
      *((struct CRenderingTechniqueFragment **)lpMem[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  if ( lpMem[0] )
    WPF::ProcessHeapImpl::Free(lpMem[0]);
}
