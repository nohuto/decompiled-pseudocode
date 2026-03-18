/*
 * XREFs of UseFragmentsModuleNoRef @ 0x180002254
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180002394 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x18000483C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(CShaderLinkingGraphBuilder *this, unsigned int a2, char a3, _QWORD *a4)
{
  CShaderLinkingGraphBuilder *v5; // r14
  int FragmentsModuleNoRef; // eax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  int v11; // eax
  HRESULT (__stdcall *BindResource)(ID3D11ModuleInstance *, UINT, UINT, UINT); // rax
  int v13; // eax
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-20h]
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D11ModuleInstance *v18; // [rsp+70h] [rbp+30h] BYREF

  v18 = 0LL;
  v5 = this;
  LOBYTE(this) = *((_BYTE *)this + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(this, &v17);
  v9 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v16 = 32;
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  v10 = v17;
  v11 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, struct ID3D11ModuleInstance **))(*(_QWORD *)v17 + 24LL))(
          v17,
          &word_1801EFD5E,
          &v18);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x21u);
    goto LABEL_9;
  }
  BindResource = v18->lpVtbl->BindResource;
  if ( a3 )
  {
    v15 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, _QWORD, __int64))BindResource)(
            v18,
            16LL,
            0LL,
            1LL);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x26u);
      goto LABEL_9;
    }
    FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v18->lpVtbl->BindSampler)(
                             v18,
                             0LL,
                             0LL,
                             1LL);
    v9 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      v16 = 39;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FragmentsModuleNoRef, v16);
      goto LABEL_9;
    }
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))BindResource)(
            v18,
            0LL,
            0LL,
            4LL);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x2Cu);
      goto LABEL_9;
    }
    FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v18->lpVtbl->BindSampler)(
                             v18,
                             0LL,
                             0LL,
                             4LL);
    v9 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      v16 = 45;
      goto LABEL_20;
    }
  }
  FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v18->lpVtbl->BindConstantBuffer)(
                           v18,
                           0LL,
                           0LL,
                           a2);
  v9 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v16 = 52;
    goto LABEL_20;
  }
  FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v18->lpVtbl->BindConstantBuffer)(
                           v18,
                           2LL,
                           2LL);
  v9 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v16 = 58;
    goto LABEL_20;
  }
  CShaderLinkingGraphBuilder::UseLibrary(v5, v18);
  *a4 = v10;
LABEL_9:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
  return v9;
}
