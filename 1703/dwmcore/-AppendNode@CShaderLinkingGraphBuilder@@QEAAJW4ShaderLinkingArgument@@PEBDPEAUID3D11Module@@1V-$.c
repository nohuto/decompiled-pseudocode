/*
 * XREFs of ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98
 * Callers:
 *     BuildSampler @ 0x1800B8890 (BuildSampler.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 *     PrepareSamplerTexcoord @ 0x1800BB500 (PrepareSamplerTexcoord.c)
 *     ApplyTexcoordExtendMode @ 0x1800BB5F8 (ApplyTexcoordExtendMode.c)
 *     AppendLights @ 0x1801BAAA4 (AppendLights.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
 *     LinkLightShader @ 0x1801BB070 (LinkLightShader.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??A?$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@5@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@@std@@QEAAAEAUNode@CShaderLinkingGraphBuilder@@AEBW4ShaderLinkingArgument@@@Z @ 0x1800B8DAC (--A-$unordered_map@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@U-$hash@W4ShaderLi.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8EB4 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$ArrayRef@$$CBW4ShaderL.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::AppendNode(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbx
  int v10; // edi
  int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 v16; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+60h] [rbp+20h] BYREF
  __int16 v19; // [rsp+68h] [rbp+28h] BYREF

  v19 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v18);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64 *))(*(_QWORD *)v6 + 48LL))(
          v6,
          a3,
          a4,
          a5,
          &v18);
  if ( v10 == -2147467259 )
    v10 = -2005270526;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x6Du);
  }
  else
  {
    v17 = *(_DWORD *)(a6 + 8);
    v16 = *(_QWORD *)a6;
    v11 = CShaderLinkingGraphBuilder::FulfillInputs(a1, v18, (__int64)&v16);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x6Fu);
    }
    else
    {
      v12 = (__int64 *)std::unordered_map<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>::operator[](
                         (_QWORD *)(a1 + 16),
                         &v19);
      v13 = v18;
      v14 = v12;
      v18 = 0LL;
      v16 = *v12;
      *v12 = v13;
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v16);
      *((_WORD *)v14 + 4) = 255;
    }
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v18);
  return (unsigned int)v10;
}
