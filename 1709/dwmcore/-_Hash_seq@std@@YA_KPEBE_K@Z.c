/*
 * XREFs of ?_Hash_seq@std@@YA_KPEBE_K@Z @ 0x1800BB734
 * Callers:
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBW4ShaderLinkingArgument@@@Z @ 0x180005200 (-_Hashval@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$.c)
 *     ?_Hashval@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA_KAEBQEAVCVisual@@@Z @ 0x180161474 (-_Hashval@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::_Hash_seq(const unsigned __int8 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 i; // r8
  __int64 v4; // rax

  v2 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v2 < a2; i = 0x100000001B3LL * (v4 ^ i) )
    v4 = a1[v2++];
  return i ^ HIDWORD(i);
}
