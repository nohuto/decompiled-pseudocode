/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x1800BB054
 * Callers:
 *     ??A?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAAAEAUNode@CShaderLinkingGraphBuilder@@AEBW4ShaderLinkingArgument@@@Z @ 0x1800B8DAC (--A-$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U-$hash@W4ShaderLi.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8EB4 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$ArrayRef@$$CBW4ShaderL.c)
 *     PrepareSamplerTexcoord @ 0x1800BB500 (PrepareSamplerTexcoord.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801BFBD8 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1801BFC74 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@_K@Z @ 0x18000264C (-_End@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uha.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBW4ShaderLinkingArgument@@@Z @ 0x1800BAE40 (-_Hashval@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
        _QWORD *a1,
        _QWORD *a2,
        _WORD *a3)
{
  unsigned __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // r11
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v6 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Hashval(
         (__int64)a1,
         (__int64)a3);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_End(
           a1,
           &v10,
           v6);
    if ( v8 == *v7 )
      break;
    if ( *(_WORD *)(v8 + 16) == *a3 )
    {
      *a2 = v8;
      return a2;
    }
  }
  *a2 = *a1;
  return a2;
}
