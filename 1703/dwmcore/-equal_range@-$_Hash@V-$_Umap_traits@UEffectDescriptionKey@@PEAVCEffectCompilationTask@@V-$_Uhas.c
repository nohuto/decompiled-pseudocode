/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@std@@@std@@@std@@V12@@2@AEBUEffectDescriptionKey@@@Z @ 0x1801456D4
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180145824 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180145824.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@_K@Z @ 0x18000264C (-_End@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uha.c)
 *     ??R?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@QEBA_NAEBUEffectDescriptionKey@@0@Z @ 0x180002904 (--R-$_Uhash_compare@UEffectDescriptionKey@@U-$hash@UEffectDescriptionKey@@@std@@U-$equal_to@UEff.c)
 */

__int64 *__fastcall std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::equal_range(
        __int64 *a1,
        __int64 *a2,
        _DWORD *a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbp
  _QWORD *i; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1[5];
  v6 = (unsigned int)v4 & *a3;
  if ( a1[6] <= v6 )
    v6 += -1LL - (v4 >> 1);
  for ( i = *(_QWORD **)(a1[2] + 16 * v6);
        i != (_QWORD *)*std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_End(
                          a1,
                          &v14,
                          v6);
        i = (_QWORD *)*i )
  {
    if ( !std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()(
            v9,
            (__int64)(i + 2),
            (__int64)a3) )
    {
      v10 = i;
      while ( i != (_QWORD *)*std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_End(
                                a1,
                                &v14,
                                v6)
           && !std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()(
                 v11,
                 (__int64)a3,
                 (__int64)(i + 2)) )
        i = (_QWORD *)*i;
      if ( v10 != i )
      {
        *a2 = (__int64)v10;
        a2[1] = (__int64)i;
        return a2;
      }
      break;
    }
  }
  v12 = *a1;
  *a2 = *a1;
  a2[1] = v12;
  return a2;
}
