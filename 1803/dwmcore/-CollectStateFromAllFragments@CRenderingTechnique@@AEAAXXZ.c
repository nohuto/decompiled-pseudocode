/*
 * XREFs of ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180071974
 * Callers:
 *     ??0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@@Z @ 0x1800710A8 (--0CRenderingTechnique@@QEAA@PEAVCBrushRenderingGraph@@$$QEAV-$unique_ptr@VCRenderingTechniqueFr.c)
 * Callees:
 *     ?CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z @ 0x18007165C (-CollectStateFromFragment@CRenderingTechnique@@AEAAXPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800BD2E0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800BD344 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x1800BD368 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

void __fastcall CRenderingTechnique::CollectStateFromAllFragments(CRenderingTechnique *this)
{
  void *v2; // r8
  char *v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  LPVOID lpMem[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v5 = *((_QWORD *)this + 2);
  v6 = 0;
  *(_OWORD *)lpMem = 0LL;
  v8 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v5);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  while ( 1 )
  {
    v2 = lpMem[0];
    if ( !(((char *)lpMem[1] - (char *)lpMem[0]) >> 4) )
      break;
    CRenderingTechnique::CollectStateFromFragment(this, *((struct CRenderingTechniqueFragment **)lpMem[1] - 2));
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  if ( lpMem[0] )
  {
    v3 = (char *)lpMem[0];
    v4 = (signed __int64)(v8 - (unsigned __int64)lpMem[0]) >> 4;
    if ( v4 > 0xFFFFFFFFFFFFFFFLL
      || 16 * v4 >= 0x1000
      && (((__int64)lpMem[0] & 0x1F) != 0
       || (v2 = (void *)*((_QWORD *)lpMem[0] - 1), v2 >= lpMem[0])
       || (v3 = (char *)((char *)lpMem[0] - (char *)v2 - 8), (unsigned __int64)v3 > 0x1F)) )
    {
      _o__invalid_parameter_noinfo_noreturn(v3);
      JUMPOUT(0x180071A35LL);
    }
    if ( v2 )
      HeapFree(WPF::g_processHeap, 0, v2);
  }
}
