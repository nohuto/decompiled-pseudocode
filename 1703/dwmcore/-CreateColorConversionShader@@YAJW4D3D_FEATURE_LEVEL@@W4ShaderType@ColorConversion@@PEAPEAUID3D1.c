/*
 * XREFs of ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800B8F84 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV?$ArrayRef@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@@@Z @ 0x1800B9084 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@AEBV-$ArrayRef@$$CBUSign.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B92F4 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B94D8 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B9540 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800BB6E8 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateColorConversionShader(int a1, int a2, struct ID3D10Blob **a3)
{
  char v6; // di
  int FragmentsModuleNoRef; // eax
  unsigned int v8; // ebx
  struct ID3D11Module *v9; // rdi
  int v10; // eax
  int v11; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v12; // rdx
  unsigned int v14; // [rsp+20h] [rbp-49h]
  struct ID3D11Module *v15; // [rsp+30h] [rbp-39h] BYREF
  int v16; // [rsp+38h] [rbp-31h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+40h] [rbp-29h] BYREF
  __int16 v18; // [rsp+D0h] [rbp+67h] BYREF
  struct ID3D11ModuleInstance *v19; // [rsp+E8h] [rbp+7Fh] BYREF

  v19 = 0LL;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v15 = (struct ID3D11Module *)&unk_1801D13C0;
  v6 = a1 >= 37632;
  v16 = 1;
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1 >= 37632, (__int64)&v15);
  v8 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v14 = 996;
    goto LABEL_19;
  }
  FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(v6, &v15);
  v8 = FragmentsModuleNoRef;
  if ( FragmentsModuleNoRef < 0 )
  {
    v14 = 999;
    goto LABEL_19;
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v19);
  v9 = v15;
  v10 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, struct ID3D11ModuleInstance **))v15->lpVtbl->CreateInstance)(
          v15,
          &word_1801EA0DE,
          &v19);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3E8u);
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v19->lpVtbl->BindResource)(
            v19,
            0LL,
            0LL,
            1LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3EAu);
    }
    else
    {
      FragmentsModuleNoRef = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v19->lpVtbl->BindSampler)(
                               v19,
                               0LL,
                               0LL,
                               1LL);
      v8 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 1003;
        goto LABEL_19;
      }
      FragmentsModuleNoRef = CShaderLinkingGraphBuilder::UseLibrary((CShaderLinkingGraphBuilder *)ppLinker, v19);
      v8 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 1005;
        goto LABEL_19;
      }
      v16 = 1;
      v18 = 256;
      v15 = (struct ID3D11Module *)&v18;
      FragmentsModuleNoRef = CShaderLinkingGraphBuilder::AppendNode(
                               (__int64)ppLinker,
                               10,
                               (__int64)&word_1801EA0DE,
                               (__int64)v9,
                               (__int64)"SampleTexture0",
                               (__int64)&v15);
      v8 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 1009;
        goto LABEL_19;
      }
      v18 = 10;
      v15 = (struct ID3D11Module *)&v18;
      v16 = 1;
      FragmentsModuleNoRef = CShaderLinkingGraphBuilder::AppendNode(
                               (__int64)ppLinker,
                               10,
                               (__int64)&word_1801EA0DE,
                               (__int64)v9,
                               (__int64)off_1801D12D0[a2 - 1],
                               (__int64)&v15);
      v8 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 1014;
        goto LABEL_19;
      }
      FragmentsModuleNoRef = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v12, a3);
      v8 = FragmentsModuleNoRef;
      if ( FragmentsModuleNoRef < 0 )
      {
        v14 = 1017;
LABEL_19:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, FragmentsModuleNoRef, v14);
      }
    }
  }
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v19);
  return v8;
}
