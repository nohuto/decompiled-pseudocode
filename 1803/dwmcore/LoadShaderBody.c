/*
 * XREFs of LoadShaderBody @ 0x1800D3DAC
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     BuildSampler @ 0x1800D3F98 (BuildSampler.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800D4DE4 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800D5938 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadShaderBody(
        CShaderLinkingGraphBuilder *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        struct ID3D11Module **a7)
{
  CShaderLinkingGraphBuilder *v8; // r13
  int FragmentsModuleNoRef; // eax
  unsigned int v12; // ebx
  struct ID3D11Module *v13; // rdi
  HRESULT v14; // eax
  struct ID3D11Module *v15; // rbx
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  struct ID3D11Module *v22; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  _BYTE *v26; // r9
  int v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-30h]
  struct ID3D11ModuleInstance *v29; // [rsp+30h] [rbp-20h] BYREF
  struct ID3D11Module *ppModule; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+80h] [rbp+30h]

  v32 = (int)this;
  ppModule = 0LL;
  v8 = this;
  LOBYTE(this) = *((_BYTE *)this + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(this, &v29);
  v12 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FragmentsModuleNoRef, 0x335u);
    goto LABEL_15;
  }
  v13 = (struct ID3D11Module *)v29;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    if ( ppModule != (struct ID3D11Module *)v29 )
    {
      if ( v29 )
        ((void (__fastcall *)(struct ID3D11ModuleInstance *))v29->lpVtbl->AddRef)(v29);
      v29 = (struct ID3D11ModuleInstance *)ppModule;
      ppModule = v13;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v29);
    }
    goto LABEL_7;
  }
  v29 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&ppModule);
  v14 = D3DLoadModule(*(LPCVOID *)(a2 + 24), *(_QWORD *)(a2 + 16), &ppModule);
  v12 = v14;
  if ( v14 < 0 )
  {
    v28 = 828;
    goto LABEL_23;
  }
  v15 = ppModule;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
  v16 = ((__int64 (__fastcall *)(struct ID3D11Module *, __int64, struct ID3D11ModuleInstance **))v15->lpVtbl->CreateInstance)(
          v15,
          a6,
          &v29);
  v12 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x33Du);
LABEL_24:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
    goto LABEL_15;
  }
  ((void (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v29->lpVtbl->BindConstantBuffer)(
    v29,
    0LL,
    0LL,
    a5);
  ((void (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v29->lpVtbl->BindConstantBuffer)(v29, 1LL, 1LL);
  v14 = CShaderLinkingGraphBuilder::UseLibrary(v8, v29);
  v12 = v14;
  if ( v14 < 0 )
  {
    v28 = 850;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v28);
    goto LABEL_24;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v29);
LABEL_7:
  v17 = 0;
  for ( LODWORD(v29) = 0; v17 < *(_DWORD *)a4; ++v17 )
  {
    v18 = *(_QWORD *)(a4 + 8);
    v31 = 8LL * v17;
    if ( *(_BYTE *)(v31 + v18) && !*((_BYTE *)&v29 + v17) )
    {
      v19 = 32LL * v17;
      LODWORD(v20) = v18;
      if ( *(_BYTE *)(v19 + a3 + 29) )
      {
        v24 = *(unsigned int *)(v19 + a3 + 20);
        v25 = v24;
        v26 = (_BYTE *)(v18 + 8 * v24);
        if ( *v26 )
        {
          if ( !*((_BYTE *)&v29 + v24) )
          {
            v27 = BuildSampler(v32, a3, v24, (_DWORD)v26, (__int64)v13);
            v12 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x36Fu);
              goto LABEL_15;
            }
            v20 = *(_QWORD *)(a4 + 8);
            *((_BYTE *)&v29 + v25) = 1;
          }
        }
      }
      v21 = BuildSampler(v32, a3, v17, (int)v20 + (int)v31, (__int64)v13);
      v12 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x374u);
        goto LABEL_15;
      }
      *((_BYTE *)&v29 + v17) = 1;
    }
  }
  v22 = ppModule;
  ppModule = 0LL;
  *a7 = v22;
LABEL_15:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&ppModule);
  return v12;
}
