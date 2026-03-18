/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8
 * Callers:
 *     LinkLightShader @ 0x18001D218 (LinkLightShader.c)
 *     AppendLights @ 0x18001D404 (AppendLights.c)
 *     BuildSampler @ 0x1800D3F98 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     AppendColorConversion @ 0x1800D570C (AppendColorConversion.c)
 *     PrepareSamplerTexcoord @ 0x1800D5760 (PrepareSamplerTexcoord.c)
 *     ApplyTexcoordExtendMode @ 0x1800D5868 (ApplyTexcoordExtendMode.c)
 *     ApplyTexcoordDisplacement @ 0x1802177E4 (ApplyTexcoordDisplacement.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@AEBW4ShaderLinkingArgument@@@Z @ 0x1800D47B8 (--$_Try_emplace@AEBW4ShaderLinkingArgument@@$$V@-$unordered_map@W4ShaderLinkingArgument@@UNode@C.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4CCC (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        _QWORD *a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rbx
  int v10; // edi
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int128 v15; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  __int16 v17; // [rsp+68h] [rbp+28h] BYREF

  v17 = a2;
  v6 = a1[1];
  v16 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(
          v6,
          a3,
          a4,
          a5,
          &v16);
  if ( v10 == -2147467259 )
    v10 = -2005270526;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6Du);
  }
  else
  {
    v15 = *a6;
    v11 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v16, (__int64 *)&v15);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6Fu);
    }
    else
    {
      std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::_Try_emplace<enum ShaderLinkingArgument const &,>(
        (__int64)(a1 + 2),
        (__int64)&v15,
        (const unsigned __int8 *)&v17);
      v12 = v15;
      v13 = v16;
      v16 = 0LL;
      *(_QWORD *)&v15 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v12 + 24) = v13;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v15);
      *(_WORD *)(v12 + 32) = 255;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v16);
  return (unsigned int)v10;
}
