/*
 * XREFs of ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18001D5E4
 * Callers:
 *     BuildSampler @ 0x1800D3F98 (BuildSampler.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@_K@Z @ 0x1800C3F50 (-_End@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uha.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1800D47B8 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D54DC (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CopyNode(_QWORD *a1, __int16 a2, __int16 a3)
{
  unsigned __int64 v5; // r10
  unsigned int v6; // edi
  __int64 *i; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rsi
  _BYTE *v12; // rax
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  char v15; // [rsp+60h] [rbp+8h] BYREF
  __int16 v16; // [rsp+68h] [rbp+10h] BYREF
  __int16 v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  v5 = a1[8] & std::_Hash_bytes((const unsigned __int8 *)&v17, 2uLL);
  v6 = 0;
  for ( i = *(__int64 **)(a1[5] + 16 * v5);
        i != *(__int64 **)std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_End(
                            a1 + 2,
                            &v15,
                            v5);
        i = (__int64 *)*i )
  {
    if ( *((_WORD *)i + 8) == a3 )
      goto LABEL_4;
  }
  i = (__int64 *)a1[3];
LABEL_4:
  if ( i == (__int64 *)a1[3] )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xB5u);
  }
  else
  {
    std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
      a1 + 2,
      v14,
      &v16);
    v8 = i + 3;
    v9 = v14[0] + 24LL;
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v14[0] + 24LL, v8);
    v10 = 5LL;
    *(_BYTE *)(v9 + 8) = *((_BYTE *)v8 + 8);
    v11 = (__int64)v8 - v9;
    v12 = (_BYTE *)(v9 + 9);
    do
    {
      *v12 = v12[v11];
      ++v12;
      --v10;
    }
    while ( v10 );
  }
  return v6;
}
