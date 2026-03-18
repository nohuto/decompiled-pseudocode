/*
 * XREFs of ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B92F4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8EB4 (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$ArrayRef@$$CBW4ShaderL.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BB0E0 (-_Init@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 *     ?clear@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXXZ @ 0x1800BB16C (-clear@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$al.c)
 *     ToD3D11ParameterDesc @ 0x1800BB28C (ToD3D11ParameterDesc.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C1CB0 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Link(
        CShaderLinkingGraphBuilder *this,
        const struct CShaderLinkingGraphBuilder::SignatureParameter *a2,
        struct ID3D10Blob **a3)
{
  __int64 v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  const char *v14; // r9
  int v15; // eax
  __int64 v17; // rcx
  const CHAR *v18; // rax
  void *v19; // [rsp+40h] [rbp-59h] BYREF
  int v20; // [rsp+48h] [rbp-51h]
  _OWORD v21[3]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+80h] [rbp-19h]
  _BYTE v23[104]; // [rsp+88h] [rbp-11h] BYREF
  struct ID3D10Blob *v24; // [rsp+100h] [rbp+67h] BYREF
  __int64 v25; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v26; // [rsp+118h] [rbp+7Fh] BYREF

  v26 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v5 = ToD3D11ParameterDesc(v23, &unk_1801CA158, 2LL);
  v6 = (__int64 *)((char *)this + 8);
  v7 = *((_QWORD *)this + 1);
  v21[0] = *(_OWORD *)v5;
  v21[1] = *(_OWORD *)(v5 + 16);
  v21[2] = *(_OWORD *)(v5 + 32);
  v22 = *(_QWORD *)(v5 + 48);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v25);
  v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, v21, 1LL, &v25);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xD2u);
    goto LABEL_18;
  }
  v20 = 1;
  v19 = &unk_1801CA158;
  v10 = CShaderLinkingGraphBuilder::FulfillInputs((__int64)this, v25, (__int64)&v19);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xD3u);
LABEL_18:
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v25);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v25);
  v25 = 0LL;
  v11 = *v6;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v25);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, &v25, 0LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD9u);
  }
  else
  {
    v13 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v24);
    if ( *((_BYTE *)this + 84) )
    {
      if ( *((_BYTE *)this + 84) == 1 )
        v14 = "ps_4_0_level_9_3";
      else
        v14 = 0LL;
    }
    else
    {
      v14 = "ps_4_0_level_9_1";
    }
    v15 = (*(__int64 (__fastcall **)(__int64, __int64, const char *, const char *, _DWORD, struct ID3D10Blob **, __int64 *))(*(_QWORD *)v13 + 24LL))(
            v13,
            v25,
            "main",
            v14,
            0,
            &v24,
            &v26);
    v9 = v15;
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(&v24);
      *a3 = v24;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xE0u);
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v25);
LABEL_9:
  if ( byte_180241C90 )
  {
    v17 = *v6;
    v25 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, 0LL, &v25) >= 0 )
    {
      v18 = (const CHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25);
      OutputDebugStringA(v18);
    }
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v25);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 1);
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::clear((char *)this + 16);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::_Init(
    (char *)this + 16,
    8LL);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v24);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v26);
  return v9;
}
