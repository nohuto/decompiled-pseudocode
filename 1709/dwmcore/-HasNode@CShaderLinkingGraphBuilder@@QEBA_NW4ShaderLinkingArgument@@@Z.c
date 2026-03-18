/*
 * XREFs of ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800046F0
 * Callers:
 *     BuildSampler @ 0x180002630 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBW4ShaderLinkingArgument@@@Z @ 0x180005200 (-_Hashval@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$.c)
 */

bool __fastcall CShaderLinkingGraphBuilder::HasNode(__int64 a1, __int16 a2)
{
  __int64 **v2; // rbx
  __int64 v4; // rax
  __int64 *v5; // r8
  __int64 *v6; // rdx
  __int64 v7; // r9
  __int64 *i; // rcx
  __int64 *v9; // rax
  __int16 v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (__int64 **)(a1 + 16);
  v4 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Hashval(
         a1 + 16,
         &v11);
  v5 = v2[2];
  v6 = *v2;
  v7 = 2 * v4;
  for ( i = (__int64 *)v5[2 * v4]; ; i = (__int64 *)*i )
  {
    v9 = (__int64 *)v5[v7] == v6 ? *v2 : *(__int64 **)v5[v7 + 1];
    if ( i == v9 )
      break;
    if ( a2 == *((_WORD *)i + 8) )
      return i != v6;
  }
  i = *v2;
  return i != v6;
}
