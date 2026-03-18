/*
 * XREFs of ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180017350
 * Callers:
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800174C0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800176B4 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800176F8 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAX$$QEAUFragmentStackEntry@CFragmentIterator@@@Z @ 0x18001783C (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
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
  int LinkedShader; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-48h]
  void *lpMem[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  int v23; // [rsp+68h] [rbp-18h]
  unsigned int v24; // [rsp+6Ch] [rbp-14h]
  unsigned int v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+B0h] [rbp+30h] BYREF

  v5 = *((_QWORD *)this + 2);
  v23 = 0;
  v24 = 0;
  v6 = 0;
  v21 = 0LL;
  v7 = (int)a2;
  v19 = 0;
  v22 = 0LL;
  v25 = 0;
  v8 = (int)a4;
  *(_OWORD *)lpMem = 0LL;
  v18 = v5;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(lpMem, &v18);
  CFragmentIterator::FindFirst((CFragmentIterator *)lpMem);
  v10 = v22;
  v11 = v26;
  while ( ((char *)lpMem[1] - (char *)lpMem[0]) >> 4 )
  {
    v26 = *((_QWORD *)lpMem[1] - 2) + 56LL;
    v12 = v6 + 1;
    if ( v6 + 1 >= v6 )
      v11 = v6 + 1;
    v13 = v12 < v6 ? 0x80070216 : 0;
    if ( v12 < v6 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xB5u);
    }
    else if ( v11 <= v24 )
    {
      v17 = v6;
      v6 = v11;
      v25 = v11;
      *(_QWORD *)(v10 + 8 * v17) = v26;
    }
    else
    {
      v14 = DynArrayImpl<0>::AddMultipleAndSet(&v22, 8LL, 1LL, &v26);
      v13 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
      v6 = v25;
      v10 = v22;
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x10Au);
      goto LABEL_14;
    }
    CFragmentIterator::MoveNext((CFragmentIterator *)lpMem);
  }
  v18 = v10;
  v19 = v6 - 1;
  LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                   v7,
                   a3,
                   v8,
                   *(_QWORD *)(v10 + 8LL * (v6 - 1)),
                   (__int64)&v18,
                   (__int64)a5);
  v13 = LinkedShader;
  if ( LinkedShader < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, LinkedShader, 0x118u);
LABEL_14:
  if ( lpMem[0] )
  {
    WPF::ProcessHeapImpl::Free(lpMem[0]);
    v21 = 0LL;
    *(_OWORD *)lpMem = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(&v22);
  return (unsigned int)v13;
}
