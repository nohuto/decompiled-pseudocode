/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@gsl@@@Z @ 0x180004938
 * Callers:
 *     InitializeShaderLinkingInput @ 0x180001FD0 (InitializeShaderLinkingInput.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$insert@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x180005034 (--$insert@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$_.c)
 *     ??4?$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800052B4 (--4-$ComPtr@UID3D11LinkingNode@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ToD3D11ParameterDesc @ 0x180005350 (ToD3D11ParameterDesc.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(struct ID3D11Linker **ppLinker, char a2, __int64 *a3)
{
  unsigned int v3; // eax
  HRESULT v6; // eax
  int v7; // ebx
  __int64 v8; // r15
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edx
  __int128 v13; // xmm2
  __int64 v14; // xmm1_8
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  struct ID3D11Linker *v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // rsi
  __int64 v21; // rax
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-B9h]
  __int64 v25; // [rsp+30h] [rbp-A9h] BYREF
  char v26; // [rsp+38h] [rbp-A1h]
  int v27; // [rsp+39h] [rbp-A0h]
  __int16 v28; // [rsp+3Dh] [rbp-9Ch]
  char v29; // [rsp+3Fh] [rbp-9Ah]
  __int128 v30; // [rsp+40h] [rbp-99h] BYREF
  __int64 v31; // [rsp+50h] [rbp-89h]
  unsigned int v32; // [rsp+58h] [rbp-81h]
  __int16 v33; // [rsp+60h] [rbp-79h] BYREF
  __int64 v34; // [rsp+68h] [rbp-71h] BYREF
  char v35; // [rsp+70h] [rbp-69h]
  int v36; // [rsp+71h] [rbp-68h]
  char v37; // [rsp+75h] [rbp-64h]
  __int128 v38; // [rsp+78h] [rbp-61h] BYREF
  __int128 v39; // [rsp+88h] [rbp-51h]
  __int128 v40; // [rsp+98h] [rbp-41h]
  __int64 v41; // [rsp+A8h] [rbp-31h]
  char v42[16]; // [rsp+B0h] [rbp-29h] BYREF
  char v43[112]; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v44; // [rsp+140h] [rbp+67h]
  unsigned int v45; // [rsp+148h] [rbp+6Fh]
  __int64 v46; // [rsp+150h] [rbp+77h] BYREF

  *((_BYTE *)ppLinker + 84) = a2;
  v3 = *((_DWORD *)a3 + 2);
  v31 = 0LL;
  v32 = 0;
  v46 = 0LL;
  v44 = v3;
  v30 = 0LL;
  v6 = DynArrayImpl<0>::Grow((unsigned int)&v30, 56, v3, 1, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v24 = 58;
    goto LABEL_29;
  }
  v8 = *a3;
  v9 = v32;
  v10 = *a3 + 32 * a3[1];
  while ( v8 != v10 )
  {
    v11 = ToD3D11ParameterDesc(v43, v8, 1LL);
    v12 = v45;
    v13 = *(_OWORD *)v11;
    v38 = *(_OWORD *)v11;
    v39 = *(_OWORD *)(v11 + 16);
    v40 = *(_OWORD *)(v11 + 32);
    v14 = *(_QWORD *)(v11 + 48);
    v15 = v9 + 1;
    v41 = v14;
    if ( v9 + 1 >= v9 )
      v12 = v9 + 1;
    v7 = v15 < v9 ? 0x80070216 : 0;
    v45 = v12;
    if ( v15 < v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v12 > HIDWORD(v31) )
    {
      v23 = DynArrayImpl<0>::AddMultipleAndSet(&v30, 56LL, 1LL, &v38);
      v7 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
      v9 = v32;
    }
    else
    {
      v16 = v9;
      v9 = v12;
      v32 = v12;
      v17 = v30 + 56 * v16;
      *(_OWORD *)v17 = v13;
      *(_OWORD *)(v17 + 16) = v39;
      *(_OWORD *)(v17 + 32) = v40;
      *(_QWORD *)(v17 + 48) = v41;
    }
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x40u);
      goto LABEL_19;
    }
    v8 += 32LL;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppLinker);
  v6 = D3DCreateLinker(ppLinker);
  v7 = v6;
  if ( v6 < 0 )
  {
    v24 = 68;
    goto LABEL_29;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppLinker + 1);
  v6 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    v24 = 69;
    goto LABEL_29;
  }
  v18 = ppLinker[1];
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
  v6 = ((__int64 (__fastcall *)(struct ID3D11Linker *, _QWORD, _QWORD, __int64 *))v18->lpVtbl->UseLibrary)(
         v18,
         v30,
         v9,
         &v46);
  v7 = v6;
  if ( v6 < 0 )
  {
    v24 = 73;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v24);
    goto LABEL_19;
  }
  v19 = 0;
  if ( v44 )
  {
    v20 = 0LL;
    do
    {
      v25 = 0LL;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      Microsoft::WRL::ComPtr<ID3D11LinkingNode>::operator=(&v25, &v46);
      v21 = *a3;
      v26 = v19;
      v33 = *(_WORD *)(v20 + v21);
      v34 = v25;
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
      v36 = v27;
      v37 = v28;
      v35 = v19;
      std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::insert<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
        ppLinker + 2,
        v42,
        &v33);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v34);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v25);
      ++v19;
      v20 += 32LL;
    }
    while ( v19 < v44 );
  }
LABEL_19:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v46);
  DynArrayImpl<1>::~DynArrayImpl<1>(&v30);
  return (unsigned int)v7;
}
