/*
 * XREFs of ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016A94 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180016B34 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180016C54 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800172D0 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180017350 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 * Callees:
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 */

void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int i; // ecx
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  for ( i = *(_DWORD *)(v2 - 8); i < (unsigned int)((__int64)(*(_QWORD *)(v3 + 40) - *(_QWORD *)(v3 + 32)) >> 4); ++i )
  {
    v5 = *(_QWORD *)(v3 + 32) + 16LL * i;
    if ( *(_QWORD *)(v5 + 8) )
    {
      v7 = 0;
      *(_DWORD *)(v2 - 8) = i;
      v6 = *(_QWORD *)(v5 + 8);
      std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(this, &v6);
      goto LABEL_1;
    }
  }
}
