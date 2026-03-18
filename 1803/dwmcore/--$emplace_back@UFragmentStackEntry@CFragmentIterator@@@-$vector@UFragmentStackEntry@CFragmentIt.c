/*
 * XREFs of ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x1800BD368
 * Callers:
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180070C84 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180070D68 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180070E4C (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800711B0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800717A8 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180071974 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800BD2E0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

void __fastcall std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
        __int128 **a1,
        __int128 *a2)
{
  __int128 *v2; // rax
  __int128 *v4; // rsi
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int128 *v11; // rax
  __int128 *v12; // r14
  __int128 *v13; // rdx
  __int128 *v14; // rcx
  __int128 v15; // xmm0
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1[2];
  v4 = a1[1];
  if ( v2 == v4 )
  {
    v6 = v4 - *a1;
    if ( v6 == 0xFFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    v7 = v6 + 1;
    v8 = v2 - *a1;
    v9 = v8 >> 1;
    if ( v8 > 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v6 + 1;
    }
    else
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    v11 = (__int128 *)std::_Allocate<std::_Default_allocate_traits<1>>(v10, 0x10uLL);
    v12 = v11;
    v11[v6] = *a2;
    v13 = a1[1];
    v14 = *a1;
    if ( *a1 != v13 )
    {
      do
      {
        v15 = *v14++;
        *v11++ = v15;
      }
      while ( v14 != v13 );
      v14 = *a1;
    }
    if ( v14 )
      std::_Deallocate(v14, a1[2] - v14, 0x10uLL);
    *a1 = v12;
    a1[2] = &v12[v10];
    a1[1] = &v12[v7];
  }
  else
  {
    *v4 = *a2;
    ++a1[1];
  }
}
