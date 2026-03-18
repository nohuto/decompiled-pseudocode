/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800D4EE8
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1800D39CC (InitializeShaderLinkingInput.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$emplace@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800D4A6C (--$emplace@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D54DC (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ToD3D11ParameterDesc @ 0x1800D552C (ToD3D11ParameterDesc.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(struct ID3D11Linker **ppLinker, char a2, __int64 *a3)
{
  int v3; // eax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // r15
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int128 v14; // xmm2
  __int64 v15; // xmm1_8
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  struct ID3D11Linker *v19; // rbx
  unsigned int v20; // r15d
  unsigned int v21; // edi
  char v22; // si
  __int64 v23; // rax
  int v25; // eax
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  char v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+39h] [rbp-C7h]
  __int16 v30; // [rsp+3Dh] [rbp-C3h]
  char v31; // [rsp+3Fh] [rbp-C1h]
  __int128 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  unsigned int v34; // [rsp+58h] [rbp-A8h]
  __int16 v35; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  char v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+71h] [rbp-8Fh]
  char v39; // [rsp+75h] [rbp-8Bh]
  __int128 v40; // [rsp+78h] [rbp-88h] BYREF
  __int128 v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char v44[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v45[128]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+150h] [rbp+50h] BYREF
  int v47; // [rsp+158h] [rbp+58h]
  __int64 v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]

  *((_BYTE *)ppLinker + 84) = a2;
  v3 = *(_DWORD *)a3;
  v33 = 0LL;
  v34 = 0;
  v46 = 0LL;
  v47 = v3;
  v32 = 0LL;
  v6 = DynArrayImpl<0>::Grow((__int64)&v32, 0x38u, v3, 1, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v26 = 58;
    goto LABEL_29;
  }
  v8 = *a3;
  v9 = 0LL;
  v10 = v34;
  v11 = 0LL;
  v12 = v47;
  v49 = *a3;
  while ( 1 )
  {
    v48 = v9;
    if ( v11 == v8 )
      break;
    v13 = ToD3D11ParameterDesc(v45, v9 + a3[1], 1LL);
    v14 = *(_OWORD *)v13;
    v40 = *(_OWORD *)v13;
    v41 = *(_OWORD *)(v13 + 16);
    v42 = *(_OWORD *)(v13 + 32);
    v15 = *(_QWORD *)(v13 + 48);
    v16 = v10 + 1;
    v43 = v15;
    if ( v10 + 1 >= v10 )
      v12 = v10 + 1;
    v7 = v16 < v10 ? 0x80070216 : 0;
    if ( v16 < v10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v12 > HIDWORD(v33) )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v32, 0x38u, 1, &v40);
      v7 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC0u);
      v10 = v34;
    }
    else
    {
      v17 = v10;
      v10 = v12;
      v34 = v12;
      v18 = v32 + 56 * v17;
      *(_OWORD *)v18 = v14;
      *(_OWORD *)(v18 + 16) = v41;
      *(_OWORD *)(v18 + 32) = v42;
      *(_QWORD *)(v18 + 48) = v43;
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x40u);
      goto LABEL_19;
    }
    ++v11;
    v8 = v49;
    v9 = v48 + 32;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppLinker);
  v6 = D3DCreateLinker(ppLinker);
  v7 = v6;
  if ( v6 < 0 )
  {
    v26 = 68;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppLinker + 1);
  v6 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v26 = 69;
    goto LABEL_29;
  }
  v19 = ppLinker[1];
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
  v6 = ((__int64 (__fastcall *)(struct ID3D11Linker *, _QWORD, _QWORD, __int64 *))v19->lpVtbl->UseLibrary)(
         v19,
         v32,
         v10,
         &v46);
  v7 = v6;
  if ( v6 < 0 )
  {
    v26 = 73;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v26);
    goto LABEL_19;
  }
  v20 = v47;
  if ( v47 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v27 = 0LL;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v27, &v46);
      v23 = a3[1];
      v28 = v22;
      v35 = *(_WORD *)(32LL * v21 + v23);
      v36 = v27;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      v38 = v29;
      v39 = v30;
      v37 = v22;
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::emplace<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
        ppLinker + 2,
        (__int64)v44,
        &v35);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v36);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v27);
      v22 = ++v21;
    }
    while ( v21 < v20 );
  }
LABEL_19:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v32);
  return (unsigned int)v7;
}
