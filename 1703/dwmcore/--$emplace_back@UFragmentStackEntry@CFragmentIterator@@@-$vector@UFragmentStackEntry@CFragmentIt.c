/*
 * XREFs of ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016A94 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016B34 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800172D0 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180017350 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 * Callees:
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x1800177C8 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 */

_OWORD *__fastcall std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        _QWORD *a1,
        _OWORD *a2)
{
  _OWORD *result; // rax

  if ( a1[1] == a1[2] )
    std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(a1);
  result = (_OWORD *)a1[1];
  if ( result )
    *result = *a2;
  a1[1] += 16LL;
  return result;
}
