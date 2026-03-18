/*
 * XREFs of ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801BFBD8
 * Callers:
 *     BuildSampler @ 0x1800B8890 (BuildSampler.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??A?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAAAEAUNode@CShaderLinkingGraphBuilder@@AEBW4ShaderLinkingArgument@@@Z @ 0x1800B8DAC (--A-$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U-$hash@W4ShaderLi.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x1800BB054 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800BB1F0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CopyNode(__int64 a1, __int16 a2, __int16 a3)
{
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rbx
  _BYTE *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int16 v12; // [rsp+58h] [rbp+10h] BYREF
  __int16 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v3 = (_QWORD *)(a1 + 16);
  v4 = 0;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
    (_QWORD *)(a1 + 16),
    &v11,
    &v13);
  if ( v11 == *v3 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB5u);
  }
  else
  {
    v5 = v11 + 24;
    v6 = std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::operator[](v3, &v12);
    Microsoft::WRL::ComPtr<IImageSource>::operator=((__int64 *)v6, (__int64 *)v5);
    v7 = (_BYTE *)(v6 + 9);
    *(_BYTE *)(v6 + 8) = *(_BYTE *)(v5 + 8);
    v8 = v5 - v6;
    v9 = 5LL;
    do
    {
      *v7 = v7[v8];
      ++v7;
      --v9;
    }
    while ( v9 );
  }
  return v4;
}
