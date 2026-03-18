/*
 * XREFs of ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800D5214
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800213D4 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800D4B2C (-_Init@-$_Hash@V-$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V-$_Uh.c)
 *     ?clear@?$list@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@2@@std@@QEAAXXZ @ 0x1800D4BB8 (-clear@-$list@U-$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@V-$al.c)
 *     ?FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4CCC (-FulfillInputs@CShaderLinkingGraphBuilder@@AEAAJPEAUID3D11LinkingNode@@V-$span@$$CBW4ShaderLinki.c)
 *     ToD3D11ParameterDesc @ 0x1800D552C (ToD3D11ParameterDesc.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  __int64 v19[2]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v20[3]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+80h] [rbp-19h]
  _BYTE v22[104]; // [rsp+88h] [rbp-11h] BYREF
  struct ID3D10Blob *v23; // [rsp+100h] [rbp+67h] BYREF
  __int64 v24; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+118h] [rbp+7Fh] BYREF

  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v5 = ToD3D11ParameterDesc(v22, &unk_18022BD98, 2LL);
  v6 = (__int64 *)((char *)this + 8);
  v7 = *((_QWORD *)this + 1);
  v20[0] = *(_OWORD *)v5;
  v20[1] = *(_OWORD *)(v5 + 16);
  v20[2] = *(_OWORD *)(v5 + 32);
  v21 = *(_QWORD *)(v5 + 48);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
  v8 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64, __int64 *))(*(_QWORD *)v7 + 40LL))(v7, v20, 1LL, &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xD3u);
    goto LABEL_18;
  }
  v19[0] = 1LL;
  v19[1] = (__int64)&unk_18022BD98;
  v10 = CShaderLinkingGraphBuilder::FulfillInputs(this, v24, v19);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xD4u);
LABEL_18:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
  v24 = 0LL;
  v11 = *v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, &v24, 0LL);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xDAu);
  }
  else
  {
    v13 = *(_QWORD *)this;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
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
            v24,
            "main",
            v14,
            0,
            &v23,
            &v25);
    v9 = v15;
    if ( v15 >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v23);
      *a3 = v23;
      goto LABEL_9;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xE5u);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
LABEL_9:
  if ( byte_1802DA4FC )
  {
    v17 = *v6;
    v24 = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, 0LL, &v24) >= 0 )
    {
      v18 = (const CHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
      OutputDebugStringA(v18);
    }
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
  std::list<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>::clear((__int64)this + 24);
  std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::_Init(
    (__int64)this + 16,
    8LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
  return v9;
}
