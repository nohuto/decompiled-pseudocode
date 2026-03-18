/*
 * XREFs of LoadShaderBody @ 0x1800B8738
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     BuildSampler @ 0x1800B8890 (BuildSampler.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800B8F84 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800BB6E8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
  CShaderLinkingGraphBuilder *v8; // r15
  int FragmentsModuleNoRef; // eax
  unsigned int v12; // ebx
  struct ID3D11Module *v13; // rdi
  SIZE_T v14; // rdx
  const void *v15; // rcx
  HRESULT v16; // eax
  int v17; // eax
  int v18; // esi
  _BYTE *v19; // r9
  int v20; // eax
  struct ID3D11Module *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-20h]
  struct ID3D11Module *ppModule[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D11ModuleInstance *v25; // [rsp+70h] [rbp+30h] BYREF

  ppModule[0] = 0LL;
  v8 = this;
  LOBYTE(this) = *((_BYTE *)this + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(this, &v25);
  v12 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FragmentsModuleNoRef, 0x236u);
    goto LABEL_12;
  }
  v13 = (struct ID3D11Module *)v25;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v14 = *(int *)(a2 + 24);
    v15 = *(const void **)(a2 + 16);
    v25 = 0LL;
    v16 = D3DLoadModule(v15, v14, ppModule);
    v12 = v16;
    if ( v16 < 0 )
    {
      v23 = 573;
    }
    else
    {
      v17 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11ModuleInstance **))ppModule[0]->lpVtbl->CreateInstance)(
              ppModule[0],
              a6,
              &v25);
      v12 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x23Eu);
LABEL_17:
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v25);
        goto LABEL_12;
      }
      ((void (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v25->lpVtbl->BindConstantBuffer)(
        v25,
        0LL,
        0LL,
        a5);
      ((void (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v25->lpVtbl->BindConstantBuffer)(
        v25,
        1LL,
        1LL);
      v16 = CShaderLinkingGraphBuilder::UseLibrary(v8, v25);
      v12 = v16;
      if ( v16 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v25);
        goto LABEL_7;
      }
      v23 = 588;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v23);
    goto LABEL_17;
  }
  if ( (struct ID3D11ModuleInstance *)ppModule[0] != v25 )
  {
    if ( v25 )
      ((void (__fastcall *)(struct ID3D11ModuleInstance *))v25->lpVtbl->AddRef)(v25);
    v25 = (struct ID3D11ModuleInstance *)ppModule[0];
    ppModule[0] = v13;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)&v25);
  }
LABEL_7:
  v18 = 0;
  if ( *(_DWORD *)(a4 + 8) )
  {
    while ( 1 )
    {
      v19 = (_BYTE *)(*(_QWORD *)a4 + 8LL * v18);
      if ( *v19 )
      {
        v20 = BuildSampler((_DWORD)v8, a3, v18, (_DWORD)v19, (__int64)v13);
        v12 = v20;
        if ( v20 < 0 )
          break;
      }
      if ( (unsigned int)++v18 >= *(_DWORD *)(a4 + 8) )
        goto LABEL_11;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x25Au);
  }
  else
  {
LABEL_11:
    v21 = ppModule[0];
    ppModule[0] = 0LL;
    *a7 = v21;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)ppModule);
  return v12;
}
