/*
 * XREFs of UseFragmentsModuleNoRef @ 0x1800B8630
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800B8F84 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800BB6E8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UseFragmentsModuleNoRef(CShaderLinkingGraphBuilder *this, unsigned int a2, _QWORD *a3)
{
  CShaderLinkingGraphBuilder *v4; // rsi
  int FragmentsModuleNoRef; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct ID3D11ModuleInstance *v14; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0LL;
  v4 = this;
  LOBYTE(this) = *((_BYTE *)this + 84);
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(this, &v15);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v13 = 26;
    goto LABEL_13;
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v14);
  v8 = v15;
  v9 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, struct ID3D11ModuleInstance **))(*(_QWORD *)v15 + 24LL))(
         v15,
         &word_1801EA0DE,
         &v14);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1Bu);
    goto LABEL_7;
  }
  v10 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v14->lpVtbl->BindResource)(
          v14,
          0LL,
          0LL,
          4LL);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Eu);
    goto LABEL_7;
  }
  v11 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v14->lpVtbl->BindSampler)(
          v14,
          0LL,
          0LL,
          4LL);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1Fu);
    goto LABEL_7;
  }
  FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, _QWORD))v14->lpVtbl->BindConstantBuffer)(
                           v14,
                           0LL,
                           0LL,
                           a2);
  v7 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v13 = 37;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FragmentsModuleNoRef, v13);
    goto LABEL_7;
  }
  CShaderLinkingGraphBuilder::UseLibrary(v4, v14);
  *a3 = v8;
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v14);
  return v7;
}
