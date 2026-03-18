/*
 * XREFs of ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x180004BA4
 * Callers:
 *     AppendLights @ 0x1800016C8 (AppendLights.c)
 * Callees:
 *     ??A?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAAAEAUNode@CShaderLinkingGraphBuilder@@AEBW4ShaderLinkingArgument@@@Z @ 0x180004654 (--A-$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U-$hash@W4ShaderLi.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x180005100 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800052B4 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(
        __int64 a1,
        __int16 a2,
        __int16 a3,
        char a4)
{
  _QWORD *v4; // rdi
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int16 v11; // [rsp+58h] [rbp+10h] BYREF
  __int16 v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = a3;
  v11 = a2;
  v4 = (_QWORD *)(a1 + 16);
  v6 = 0;
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
    a1 + 16,
    &v10,
    &v12);
  v7 = v10;
  if ( v10 == *v4 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x86u);
  }
  else
  {
    v8 = std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::operator[](v4, &v11);
    Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(v8, v7 + 24);
    *(_BYTE *)(v8 + 8) = a4;
    *(_BYTE *)(v8 + 9) = 0;
  }
  return v6;
}
