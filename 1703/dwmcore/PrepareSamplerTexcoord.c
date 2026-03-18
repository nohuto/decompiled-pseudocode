/*
 * XREFs of PrepareSamplerTexcoord @ 0x1800BB500
 * Callers:
 *     BuildSampler @ 0x1800B8890 (BuildSampler.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x1800BB054 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ApplyTexcoordExtendMode @ 0x1800BB5F8 (ApplyTexcoordExtendMode.c)
 */

__int64 __fastcall PrepareSamplerTexcoord(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  bool v7; // zf
  __int64 v8; // r15
  int v9; // r8d
  int appended; // eax
  unsigned int v11; // ebx
  int v13; // r8d
  unsigned int v14; // [rsp+20h] [rbp-20h]
  unsigned __int16 *v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+38h] [rbp-8h]
  __int16 v17; // [rsp+78h] [rbp+38h] BYREF
  char v18; // [rsp+7Ah] [rbp+3Ah] BYREF
  unsigned __int16 v19; // [rsp+80h] [rbp+40h] BYREF

  v7 = *(_BYTE *)(a2 + 59) == 0;
  v19 = a3 | 0x100;
  v8 = 3LL * a3;
  if ( v7 )
  {
    v17 = a3 | 0x100;
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
      (_QWORD *)(a1 + 16),
      &v15,
      &v17);
    if ( v15 == *(unsigned __int16 **)(a1 + 16) )
    {
      v11 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x9Du);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1AEu);
      return v11;
    }
    strcpy_s((char *)v15 + 33, 5uLL, "xy");
  }
  else
  {
    v16 = 1;
    v15 = &v19;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 a3 | 0x100,
                 (__int64)&word_1801EA0DE,
                 a4,
                 (__int64)"FlattenTexcoords",
                 (__int64)&v15);
    v11 = appended;
    if ( appended < 0 )
    {
      v14 = 425;
      goto LABEL_17;
    }
  }
  LOBYTE(v9) = *(_BYTE *)(a2 + 4 * v8 + 4);
  if ( (_BYTE)v9 != *(_BYTE *)(a2 + 4 * v8 + 5) )
  {
    appended = ApplyTexcoordExtendMode(a1, v19, v9, a4, (__int64)&v17);
    v11 = appended;
    if ( appended < 0 )
    {
      v14 = 449;
    }
    else
    {
      LOBYTE(v13) = *(_BYTE *)(a2 + 4 * v8 + 5);
      appended = ApplyTexcoordExtendMode(a1, v19, v13, a4, (__int64)&v18);
      v11 = appended;
      if ( appended < 0 )
      {
        v14 = 450;
      }
      else
      {
        v15 = (unsigned __int16 *)&v17;
        v16 = 2;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v19,
                     (__int64)&word_1801EA0DE,
                     a4,
                     (__int64)"BorderEffectCombine",
                     (__int64)&v15);
        v11 = appended;
        if ( appended >= 0 )
          return v11;
        v14 = 452;
      }
    }
LABEL_17:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, v14);
    return v11;
  }
  appended = ApplyTexcoordExtendMode(a1, v19, v9, a4, 0LL);
  v11 = appended;
  if ( appended < 0 )
  {
    v14 = 443;
    goto LABEL_17;
  }
  return v11;
}
