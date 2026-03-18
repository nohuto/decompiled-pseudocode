/*
 * XREFs of ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV?$ArrayRef@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@@@Z @ 0x1800B9084
 * Callers:
 *     InitializeShaderLinkingInput @ 0x1800B842C (InitializeShaderLinkingInput.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$insert@U?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@?$_Hash@V?$_Umap_traits@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@V?$_Uhash_compare@W4ShaderLinkingArgument@@U?$hash@W4ShaderLinkingArgument@@@std@@U?$equal_to@W4ShaderLinkingArgument@@@3@@std@@V?$allocator@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@1@@Z @ 0x1800BAFAC (--$insert@U-$pair@W4ShaderLinkingArgument@@UNode@CShaderLinkingGraphBuilder@@@std@@@-$_Hash@V-$_.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800BB1F0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ToD3D11ParameterDesc @ 0x1800BB28C (ToD3D11ParameterDesc.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShaderLinkingGraphBuilder::Initialize(struct ID3D11Linker **ppLinker, char a2, __int64 a3)
{
  unsigned int v3; // r15d
  __int64 *v4; // r13
  int v6; // eax
  int v7; // ebx
  int v8; // r12d
  unsigned int v9; // esi
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int128 v12; // xmm2
  __int64 v13; // xmm1_8
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  struct ID3D11Linker *v17; // rbx
  unsigned int i; // edi
  __int64 v19; // rax
  int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-B9h]
  __int64 v23; // [rsp+30h] [rbp-A9h] BYREF
  char v24; // [rsp+38h] [rbp-A1h]
  int v25; // [rsp+39h] [rbp-A0h]
  __int16 v26; // [rsp+3Dh] [rbp-9Ch]
  char v27; // [rsp+3Fh] [rbp-9Ah]
  __int128 v28; // [rsp+40h] [rbp-99h] BYREF
  __int64 v29; // [rsp+50h] [rbp-89h]
  unsigned int v30; // [rsp+58h] [rbp-81h]
  __int16 v31; // [rsp+60h] [rbp-79h] BYREF
  __int64 v32; // [rsp+68h] [rbp-71h] BYREF
  char v33; // [rsp+70h] [rbp-69h]
  int v34; // [rsp+71h] [rbp-68h]
  char v35; // [rsp+75h] [rbp-64h]
  __int128 v36; // [rsp+80h] [rbp-59h] BYREF
  __int128 v37; // [rsp+90h] [rbp-49h]
  __int128 v38; // [rsp+A0h] [rbp-39h]
  __int64 v39; // [rsp+B0h] [rbp-29h]
  char v40[16]; // [rsp+B8h] [rbp-21h] BYREF
  char v41[104]; // [rsp+C8h] [rbp-11h] BYREF
  __int64 v42; // [rsp+140h] [rbp+67h] BYREF
  unsigned int v43; // [rsp+148h] [rbp+6Fh]
  __int64 *v44; // [rsp+150h] [rbp+77h]

  v44 = (__int64 *)a3;
  *((_BYTE *)ppLinker + 84) = a2;
  v3 = *(_DWORD *)(a3 + 8);
  v4 = (__int64 *)a3;
  v29 = 0LL;
  v30 = 0;
  v42 = 0LL;
  v28 = 0LL;
  v6 = DynArrayImpl<0>::Grow((__int64)&v28, 0x38u, v3, 1, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v22 = 58;
    goto LABEL_29;
  }
  v8 = 0;
  v9 = v30;
  if ( !v3 )
  {
LABEL_12:
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)ppLinker);
    v6 = D3DCreateLinker(ppLinker);
    v7 = v6;
    if ( v6 < 0 )
    {
      v22 = 68;
    }
    else
    {
      Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)ppLinker + 1);
      v6 = D3DCreateFunctionLinkingGraph(0, (struct ID3D11FunctionLinkingGraph **)ppLinker + 1);
      v7 = v6;
      if ( v6 < 0 )
      {
        v22 = 69;
      }
      else
      {
        v17 = ppLinker[1];
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v42);
        v6 = ((__int64 (__fastcall *)(struct ID3D11Linker *, _QWORD, _QWORD, __int64 *))v17->lpVtbl->UseLibrary)(
               v17,
               v28,
               v9,
               &v42);
        v7 = v6;
        if ( v6 >= 0 )
        {
          for ( i = 0; i < v3; ++i )
          {
            v23 = 0LL;
            v24 = 0;
            v25 = 0;
            v26 = 0;
            v27 = 0;
            Microsoft::WRL::ComPtr<IImageSource>::operator=(&v23, &v42);
            v19 = *v4;
            v24 = i;
            v31 = *(_WORD *)(32LL * (int)i + v19);
            v32 = v23;
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
            v34 = v25;
            v35 = v26;
            v33 = i;
            std::_Hash<std::_Umap_traits<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node,std::_Uhash_compare<enum ShaderLinkingArgument,std::hash<enum ShaderLinkingArgument>,std::equal_to<enum ShaderLinkingArgument>>,std::allocator<std::pair<enum ShaderLinkingArgument const,CShaderLinkingGraphBuilder::Node>>,0>>::insert<std::pair<enum ShaderLinkingArgument,CShaderLinkingGraphBuilder::Node>>(
              ppLinker + 2,
              v40,
              &v31);
            Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v32);
            Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v23);
          }
          goto LABEL_19;
        }
        v22 = 73;
      }
    }
LABEL_29:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v22);
    goto LABEL_19;
  }
  v10 = v43;
  while ( 1 )
  {
    v11 = ToD3D11ParameterDesc(v41, *v44 + 32LL * v8, 1LL);
    v12 = *(_OWORD *)v11;
    v36 = *(_OWORD *)v11;
    v37 = *(_OWORD *)(v11 + 16);
    v38 = *(_OWORD *)(v11 + 32);
    v13 = *(_QWORD *)(v11 + 48);
    v14 = v9 + 1;
    v39 = v13;
    if ( v9 + 1 >= v9 )
      v10 = v9 + 1;
    v7 = v14 < v9 ? 0x80070216 : 0;
    if ( v14 < v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
    }
    else if ( v10 > HIDWORD(v29) )
    {
      v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v28, 0x38u, 1, &v36);
      v7 = v21;
      if ( v21 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
      v9 = v30;
    }
    else
    {
      v15 = v9;
      v9 = v10;
      v30 = v10;
      v16 = v28 + 56 * v15;
      *(_OWORD *)v16 = v12;
      *(_OWORD *)(v16 + 16) = v37;
      *(_OWORD *)(v16 + 32) = v38;
      *(_QWORD *)(v16 + 48) = v39;
    }
    if ( v7 < 0 )
      break;
    if ( ++v8 >= v3 )
    {
      v4 = v44;
      goto LABEL_12;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x40u);
LABEL_19:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v42);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v28);
  return (unsigned int)v7;
}
