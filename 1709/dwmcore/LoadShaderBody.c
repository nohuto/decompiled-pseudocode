/*
 * XREFs of LoadShaderBody @ 0x1800023DC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180002394 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     BuildSampler @ 0x180002630 (BuildSampler.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x18000483C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadShaderBody(
        CShaderLinkingGraphBuilder *this,
        __int64 a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        struct ID3D11Module **a7)
{
  int FragmentsModuleNoRef; // eax
  unsigned int v12; // ebx
  struct ID3D11Module *v13; // rdi
  HRESULT v14; // eax
  struct ID3D11Module *v15; // rbx
  int v16; // eax
  __int64 v17; // rsi
  _BYTE *v18; // r9
  int v19; // eax
  struct ID3D11Module *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-20h]
  struct ID3D11Module *ppModule[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D11ModuleInstance *v24; // [rsp+70h] [rbp+30h] BYREF

  ppModule[0] = 0LL;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(
                           *((_BYTE *)this + 84),
                           (struct ID3D11Module **)&v24);
  v12 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FragmentsModuleNoRef, 0x28Cu);
    goto LABEL_12;
  }
  v13 = (struct ID3D11Module *)v24;
  if ( *(_QWORD *)(a2 + 24) )
  {
    v24 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppModule);
    v14 = D3DLoadModule(*(LPCVOID *)(a2 + 16), *(_QWORD *)(a2 + 24), ppModule);
    v12 = v14;
    if ( v14 < 0 )
    {
      v22 = 659;
    }
    else
    {
      v15 = ppModule[0];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
      v16 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11ModuleInstance **))v15->lpVtbl->CreateInstance)(
              v15,
              a6,
              &v24);
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x294u);
LABEL_21:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        goto LABEL_12;
      }
      ((void (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v24->lpVtbl->BindConstantBuffer)(
        v24,
        0LL,
        0LL,
        a5);
      ((void (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v24->lpVtbl->BindConstantBuffer)(
        v24,
        1LL,
        1LL);
      v14 = CShaderLinkingGraphBuilder::UseLibrary(this, v24);
      v12 = v14;
      if ( v14 >= 0 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        goto LABEL_7;
      }
      v22 = 675;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v22);
    goto LABEL_21;
  }
  if ( (struct ID3D11ModuleInstance *)ppModule[0] != v24 )
  {
    if ( v24 )
      ((void (__fastcall *)(struct ID3D11ModuleInstance *))v24->lpVtbl->AddRef)(v24);
    v24 = (struct ID3D11ModuleInstance *)ppModule[0];
    ppModule[0] = v13;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v24);
  }
LABEL_7:
  v17 = 0LL;
  if ( *(_DWORD *)(a4 + 8) )
  {
    while ( 1 )
    {
      v18 = (_BYTE *)(*(_QWORD *)a4 + 8 * v17);
      if ( *v18 )
      {
        v19 = BuildSampler((_DWORD)this, a3, v17, (_DWORD)v18, (__int64)v13);
        v12 = v19;
        if ( v19 < 0 )
          break;
      }
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= *(_DWORD *)(a4 + 8) )
        goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x2B1u);
  }
  else
  {
LABEL_11:
    v20 = ppModule[0];
    ppModule[0] = 0LL;
    *a7 = v20;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)ppModule);
  return v12;
}
