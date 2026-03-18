/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850
 * Callers:
 *     AppendLights @ 0x1800016C8 (AppendLights.c)
 *     LinkLightShader @ 0x1800018B0 (LinkLightShader.c)
 *     BuildSampler @ 0x180002630 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 *     AppendColorConversion @ 0x1800056A8 (AppendColorConversion.c)
 *     PrepareSamplerTexcoord @ 0x1800056FC (PrepareSamplerTexcoord.c)
 *     ApplyTexcoordExtendMode @ 0x18000582C (ApplyTexcoordExtendMode.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAAAEAUNode@CShaderLinkingGraphBuilder@@AEBW4ShaderLinkingArgument@@@Z @ 0x180004654 (--A-$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U-$hash@W4ShaderLi.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004768 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int128 *a6)
{
  __int64 v6; // rbx
  int v10; // edi
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+60h] [rbp+20h] BYREF
  __int16 v18; // [rsp+68h] [rbp+28h] BYREF

  v18 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v17 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(
          v6,
          a3,
          a4,
          a5,
          &v17);
  if ( v10 == -2147467259 )
    v10 = -2005270526;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x6Du);
  }
  else
  {
    v16 = *a6;
    v11 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v17, &v16);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x6Fu);
    }
    else
    {
      v12 = (_QWORD *)std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::operator[](
                        (_QWORD *)(a1 + 16),
                        &v18);
      v13 = v17;
      v14 = v12;
      v17 = 0LL;
      *(_QWORD *)&v16 = *v12;
      *v12 = v13;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v16);
      *((_WORD *)v14 + 4) = 255;
    }
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v17);
  return (unsigned int)v10;
}
