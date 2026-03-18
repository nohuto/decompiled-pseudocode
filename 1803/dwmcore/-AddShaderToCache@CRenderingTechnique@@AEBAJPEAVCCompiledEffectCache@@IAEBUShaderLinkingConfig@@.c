/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800717A8
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800BD2E0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800BD344 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x1800BD368 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 */

__int64 __fastcall CRenderingTechnique::AddShaderToCache(
        CRenderingTechnique *this,
        struct CCompiledEffectCache *a2,
        int a3,
        const struct ShaderLinkingConfig *a4,
        struct CLinkedShader **a5)
{
  __int64 v5; // rax
  unsigned int v6; // edi
  int v7; // r13d
  int v8; // r15d
  __int64 v10; // r14
  unsigned int v11; // esi
  unsigned int v12; // eax
  int v13; // ebx
  int v14; // eax
  __int64 v15; // r9
  int LinkedShader; // eax
  void *v17; // r8
  char *v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  LPVOID lpMem[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+58h] [rbp-28h] BYREF
  int v27; // [rsp+68h] [rbp-18h]
  unsigned int v28; // [rsp+6Ch] [rbp-14h]
  unsigned int v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+B0h] [rbp+30h] BYREF

  v5 = *((_QWORD *)this + 2);
  v27 = 0;
  v28 = 0;
  v6 = 0;
  v25 = 0LL;
  v7 = (int)a2;
  LODWORD(v23) = 0;
  v26 = 0LL;
  v29 = 0;
  v8 = (int)a4;
  *(_OWORD *)lpMem = 0LL;
  v22 = v5;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v22);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  v10 = v26;
  v11 = v30;
  while ( ((char *)lpMem[1] - (char *)lpMem[0]) >> 4 )
  {
    v30 = *((_QWORD *)lpMem[1] - 2) + 56LL;
    v12 = v6 + 1;
    if ( v6 + 1 >= v6 )
      v11 = v6 + 1;
    v13 = v12 < v6 ? 0x80070216 : 0;
    if ( v12 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB5u);
    }
    else if ( v11 <= v28 )
    {
      v21 = v6;
      v6 = v11;
      v29 = v11;
      *(_QWORD *)(v10 + 8 * v21) = v30;
    }
    else
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(&v26, 8LL, 1LL, &v30);
      v13 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
      v6 = v29;
      v10 = v26;
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1C6u);
      goto LABEL_14;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  v15 = *(_QWORD *)(v10 + 8LL * (v6 - 1));
  v22 = v6 - 1;
  v23 = v10;
  LinkedShader = CCompiledEffectCache::CreateLinkedShader(v7, a3, v8, v15, (__int64)&v22, (__int64)a5);
  v13 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LinkedShader, 0x1D4u);
LABEL_14:
  v17 = lpMem[0];
  if ( lpMem[0] )
  {
    v18 = (char *)lpMem[0];
    v19 = (signed __int64)(v25 - (unsigned __int64)lpMem[0]) >> 4;
    if ( v19 > 0xFFFFFFFFFFFFFFFLL
      || 16 * v19 >= 0x1000
      && (((__int64)lpMem[0] & 0x1F) != 0
       || (v17 = (void *)*((_QWORD *)lpMem[0] - 1), v17 >= lpMem[0])
       || (v18 = (char *)((char *)lpMem[0] - (char *)v17 - 8), (unsigned __int64)v18 > 0x1F)) )
    {
      _o__invalid_parameter_noinfo_noreturn(v18);
      JUMPOUT(0x180111692LL);
    }
    if ( v17 )
      HeapFree(WPF::g_processHeap, 0, v17);
    v25 = 0LL;
    *(_OWORD *)lpMem = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v26);
  return (unsigned int)v13;
}
