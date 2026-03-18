/*
 * XREFs of ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x18006D0E0 (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18006D3A8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18006D5A0 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18006DA94 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18006DB58 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006DC8C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18006E21C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 * Callees:
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 */

void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int i; // ecx
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h]

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  for ( i = *(_DWORD *)(v2 - 8); i < (unsigned int)((__int64)(*(_QWORD *)(v3 + 40) - *(_QWORD *)(v3 + 32)) >> 4); ++i )
  {
    v5 = *(_QWORD *)(v3 + 32) + 16LL * i;
    if ( *(_QWORD *)(v5 + 8) )
    {
      DWORD2(v7) = 0;
      *(_DWORD *)(v2 - 8) = i;
      *(_QWORD *)&v7 = *(_QWORD *)(v5 + 8);
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
        std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(this);
      v6 = (_OWORD *)*((_QWORD *)this + 1);
      if ( v6 )
        *v6 = v7;
      *((_QWORD *)this + 1) += 16LL;
      goto LABEL_1;
    }
  }
}
