/*
 * XREFs of ??0Node@CShaderLinkingGraphBuilder@@QEAA@$$QEAU01@@Z @ 0x180005288
 * Callers:
 *     ??A?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAAAEAUNode@CShaderLinkingGraphBuilder@@AEBW4ShaderLinkingArgument@@@Z @ 0x180004654 (--A-$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U-$hash@W4ShaderLi.c)
 *     ??$insert@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x180005034 (--$insert@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Node::Node(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0LL;
  if ( a1 != a2 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_BYTE *)(a1 + 8) = *(_BYTE *)(a2 + 8);
  *(_DWORD *)(a1 + 9) = *(_DWORD *)(a2 + 9);
  *(_BYTE *)(a1 + 13) = *(_BYTE *)(a2 + 13);
  return a1;
}
