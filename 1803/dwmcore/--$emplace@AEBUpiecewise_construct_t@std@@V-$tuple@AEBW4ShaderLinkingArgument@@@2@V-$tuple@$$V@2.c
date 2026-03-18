/*
 * XREFs of ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBW4ShaderLinkingArgument@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBW4ShaderLinkingArgument@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800D485C
 * Callers:
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1800D47B8 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800C42DC (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderL.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@1@@Z @ 0x1800D4978 (--$_Insert@AEAU-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$_L.c)
 *     ?_Incsize@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAX_K@Z @ 0x1800D4BFC (-_Incsize@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<enum ShaderLinkingArgument const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD **a4)
{
  _QWORD **v4; // r14
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi

  v4 = (_QWORD **)(a1 + 8);
  v8 = **(_QWORD ***)(a1 + 8);
  v9 = (_QWORD *)v8[1];
  v10 = std::_List_alloc<std::_List_base_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>::_Buynode0(
          a1,
          v8,
          v9);
  *((_WORD *)v10 + 8) = **a4;
  v10[3] = 0LL;
  v10[4] = 0LL;
  v10[3] = 0LL;
  *((_BYTE *)v10 + 32) = 0;
  *(_DWORD *)((char *)v10 + 33) = 0;
  *((_BYTE *)v10 + 37) = 0;
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::_Incsize(v4);
  v8[1] = v10;
  *v9 = v10;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Insert<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>>>>(
    a1,
    a2,
    **v4 + 16LL,
    **v4);
  return a2;
}
