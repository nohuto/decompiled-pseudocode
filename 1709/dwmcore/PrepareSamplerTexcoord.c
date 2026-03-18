/*
 * XREFs of PrepareSamplerTexcoord @ 0x1800056FC
 * Callers:
 *     BuildSampler @ 0x180002630 (BuildSampler.c)
 * Callees:
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@2@AEBW4ShaderLinkingArgument@@@Z @ 0x180005100 (-lower_bound@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@.c)
 *     ApplyTexcoordExtendMode @ 0x18000582C (ApplyTexcoordExtendMode.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall PrepareSamplerTexcoord(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int16 v6; // cx
  __int64 v8; // r15
  int v9; // r8d
  int appended; // eax
  unsigned int v11; // ebx
  int v13; // r8d
  unsigned int v14; // [rsp+20h] [rbp-20h]
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+78h] [rbp+38h] BYREF
  unsigned __int16 v17; // [rsp+80h] [rbp+40h] BYREF

  v6 = a3 | 0x100;
  v8 = 3LL * a3;
  v17 = a3 | 0x100;
  if ( *(_BYTE *)(a2 + 126) )
  {
    *((_QWORD *)&v15 + 1) = 2LL;
    *(_QWORD *)&v15 = &v16;
    v16 = 16843008;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v6,
                 (__int64)&word_1801EFD5E,
                 a4,
                 (__int64)"GetCubeTexcoord",
                 &v15);
    v11 = appended;
    if ( appended < 0 )
    {
      v14 = 467;
      goto LABEL_22;
    }
  }
  else if ( *(_BYTE *)(a2 + 124) )
  {
    *((_QWORD *)&v15 + 1) = 1LL;
    *(_QWORD *)&v15 = &v17;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 a1,
                 v6,
                 (__int64)&word_1801EFD5E,
                 a4,
                 (__int64)"FlattenTexcoords",
                 &v15);
    v11 = appended;
    if ( appended < 0 )
    {
      v14 = 474;
      goto LABEL_22;
    }
  }
  else
  {
    LOWORD(v16) = a3 | 0x100;
    std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::lower_bound(
      (_QWORD *)(a1 + 16),
      &v15,
      &v16);
    if ( (_QWORD)v15 == *(_QWORD *)(a1 + 16) )
    {
      v11 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x9Du);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1DFu);
      return v11;
    }
    strcpy_s((char *)(v15 + 33), 5uLL, "xy");
  }
  LOBYTE(v9) = *(_BYTE *)(a2 + 8 * v8 + 16);
  if ( (_BYTE)v9 != *(_BYTE *)(a2 + 8 * v8 + 17) )
  {
    appended = ApplyTexcoordExtendMode(a1, v17, v9, a4, (__int64)&v16);
    v11 = appended;
    if ( appended < 0 )
    {
      v14 = 512;
    }
    else
    {
      LOBYTE(v13) = *(_BYTE *)(a2 + 8 * v8 + 17);
      appended = ApplyTexcoordExtendMode(a1, v17, v13, a4, (__int64)&v16 + 2);
      v11 = appended;
      if ( appended < 0 )
      {
        v14 = 513;
      }
      else
      {
        *(_QWORD *)&v15 = &v16;
        *((_QWORD *)&v15 + 1) = 2LL;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     a1,
                     v17,
                     (__int64)&word_1801EFD5E,
                     a4,
                     (__int64)"BorderEffectCombine",
                     &v15);
        v11 = appended;
        if ( appended >= 0 )
          return v11;
        v14 = 515;
      }
    }
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, v14);
    return v11;
  }
  v9 = (unsigned __int8)v9;
  if ( *(_BYTE *)(a2 + 126) )
    v9 = 0;
  appended = ApplyTexcoordExtendMode(a1, v17, v9, a4, 0LL);
  v11 = appended;
  if ( appended < 0 )
  {
    v14 = 506;
    goto LABEL_22;
  }
  return v11;
}
