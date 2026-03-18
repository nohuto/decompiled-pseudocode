/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18006D5A0
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18006E19C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18006E21C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Reserve@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@IEAAX_K@Z @ 0x18006E254 (-_Reserve@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
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
  int v7; // r15d
  int v9; // r13d
  char *v10; // rax
  __int64 v11; // r14
  unsigned int v12; // esi
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // eax
  __int64 v16; // r9
  int LinkedShader; // eax
  __int64 v19; // rax
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  LPVOID lpMem[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  int v24; // [rsp+68h] [rbp-18h]
  unsigned int v25; // [rsp+6Ch] [rbp-14h]
  unsigned int v26; // [rsp+70h] [rbp-10h]
  __int64 v27; // [rsp+B0h] [rbp+30h] BYREF

  v5 = *((_QWORD *)this + 2);
  v24 = 0;
  v25 = 0;
  v6 = 0;
  v22 = 0LL;
  v7 = (int)a4;
  DWORD2(v20) = 0;
  v23 = 0LL;
  v26 = 0;
  v9 = (int)a2;
  *(_OWORD *)lpMem = 0LL;
  *(_QWORD *)&v20 = v5;
  std::vector<CFragmentIterator::FragmentStackEntry>::_Reserve(lpMem);
  v10 = (char *)lpMem[1];
  if ( lpMem[1] )
  {
    *(_OWORD *)lpMem[1] = v20;
    v10 = (char *)lpMem[1];
  }
  lpMem[1] = v10 + 16;
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  v11 = v23;
  v12 = v27;
  while ( ((char *)lpMem[1] - (char *)lpMem[0]) >> 4 )
  {
    v27 = *((_QWORD *)lpMem[1] - 2) + 56LL;
    v13 = v6 + 1;
    if ( v6 + 1 >= v6 )
      v12 = v6 + 1;
    v14 = v13 < v6 ? 0x80070216 : 0;
    if ( v13 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xB5u);
    }
    else if ( v12 <= v25 )
    {
      v19 = v6;
      v6 = v12;
      v26 = v12;
      *(_QWORD *)(v11 + 8 * v19) = v27;
    }
    else
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v23, 8u, 1, &v27);
      v14 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xC0u);
      v6 = v26;
      v11 = v23;
    }
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x10Au);
      goto LABEL_16;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  v16 = *(_QWORD *)(v11 + 8LL * (v6 - 1));
  *((_QWORD *)&v20 + 1) = v6 - 1;
  *(_QWORD *)&v20 = v11;
  LinkedShader = CCompiledEffectCache::CreateLinkedShader(v9, a3, v7, v16, (__int64)&v20, (__int64)a5);
  v14 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LinkedShader, 0x118u);
LABEL_16:
  if ( lpMem[0] )
  {
    HeapFree(WPF::g_processHeap, 0, lpMem[0]);
    v22 = 0LL;
    *(_OWORD *)lpMem = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v23);
  return (unsigned int)v14;
}
