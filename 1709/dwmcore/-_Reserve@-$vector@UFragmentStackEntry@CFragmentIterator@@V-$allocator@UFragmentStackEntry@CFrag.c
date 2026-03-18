/*
 * XREFs of ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x18006D0E0 (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x18006D3A8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18006D5A0 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18006DA94 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x18006DB58 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006DC8C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

int __fastcall std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 i; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  _OWORD *v8; // rbp
  SIZE_T v9; // r8
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  __int64 v12; // rdi
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = a1[1];
  i = (a1[2] - v1) >> 4;
  if ( !i )
  {
    v4 = (v1 - *a1) >> 4;
    if ( 0xFFFFFFFFFFFFFFFLL == v4 )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v5 = v4 + 1;
    v6 = (a1[2] - *a1) >> 4;
    v7 = 0LL;
    if ( 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) >= v6 )
      v7 = v6 + (v6 >> 1);
    if ( v7 >= v5 )
      v5 = v7;
    v8 = 0LL;
    if ( v5 )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFFLL )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v9 = 16 * v5;
      if ( !(16 * v5) )
        v9 = 1LL;
      v8 = HeapAlloc(WPF::g_processHeap, 0, v9);
      if ( !v8 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    v10 = a1[1];
    v11 = v8;
    for ( i = *a1; i != v10; i += 16LL )
    {
      if ( v11 )
        *v11 = *(_OWORD *)i;
      ++v11;
    }
    v12 = a1[1] - *a1;
    if ( *a1 )
      LODWORD(i) = HeapFree(WPF::g_processHeap, 0, (LPVOID)*a1);
    *a1 = (__int64)v8;
    a1[2] = (__int64)&v8[v5];
    a1[1] = (__int64)v8 + (v12 & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return i;
}
