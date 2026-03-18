/*
 * XREFs of AppendLights @ 0x1801BAAA4
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800B8F84 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     LinkLightShader @ 0x1801BB070 (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x1801BFC74 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, CShaderLinkingGraphBuilder *a2, _DWORD *a3, int a4)
{
  HRESULT v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  unsigned __int16 v14; // r14
  int v15; // eax
  int v16; // r8d
  int v17; // eax
  int v18; // eax
  int NodeFromOutputArgument; // eax
  int v20; // r8d
  int v21; // eax
  __int16 v22; // si
  int v23; // esi
  int v24; // eax
  int appended; // eax
  int v26; // eax
  _WORD v28[4]; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11ModuleInstance *v29; // [rsp+38h] [rbp-28h] BYREF
  int v30; // [rsp+40h] [rbp-20h]
  struct ID3D11ModuleInstance **v31; // [rsp+48h] [rbp-18h] BYREF
  int v32; // [rsp+50h] [rbp-10h]
  unsigned __int16 v33; // [rsp+90h] [rbp+30h] BYREF

  v33 = a1;
  if ( !qword_180241C80 )
  {
    v7 = D3DLoadModule(&unk_1801FE970, 0xD371uLL, &qword_180241C80);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2D8u);
      return v8;
    }
  }
  v29 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v29);
  v9 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, struct ID3D11ModuleInstance **))qword_180241C80->lpVtbl->CreateInstance)(
         qword_180241C80,
         &word_1801EA0DE,
         &v29);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2DEu);
    goto LABEL_28;
  }
  v10 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v29->lpVtbl->BindConstantBuffer)(
          v29,
          1LL,
          1LL);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2E1u);
    goto LABEL_28;
  }
  v11 = CShaderLinkingGraphBuilder::UseLibrary(a2, v29);
  v8 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2E3u);
LABEL_28:
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v29);
    return v8;
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v29);
  v12 = *((_DWORD *)a2 + 20);
  v13 = v12 + 1;
  v14 = v12 | 0x500;
  *((_DWORD *)a2 + 20) = v13;
  if ( a4 >= 0 )
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v14, v33, (unsigned int)a4);
    v8 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, NodeFromOutputArgument, 0x307u);
      return v8;
    }
    if ( *a3 == -1 )
    {
      v23 = *((_DWORD *)a2 + 20);
      v32 = 0;
      v31 = 0LL;
      v24 = v23 + 1;
      v22 = v23 | 0x500;
      *((_DWORD *)a2 + 20) = v24;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (__int64)a2,
                   v22,
                   (__int64)&word_1801EA0DE,
                   (__int64)qword_180241C80,
                   (__int64)"NoLightAccumulator",
                   (__int64)&v31);
      v8 = appended;
      if ( appended < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x31Cu);
        return v8;
      }
    }
    else
    {
      v28[0] = v33;
      v28[1] = v14;
      v31 = (struct ID3D11ModuleInstance **)v28;
      v32 = 2;
      v21 = LinkLightShader((_DWORD)a2, (_DWORD)a3, v20, (unsigned int)&v31, 1, (__int64)&v29);
      v8 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x316u);
        return v8;
      }
      v22 = (__int16)v29;
    }
    v31 = &v29;
    LOWORD(v29) = v22;
    WORD1(v29) = v14;
    v32 = 2;
    v26 = CShaderLinkingGraphBuilder::AppendNode(
            (__int64)a2,
            v33,
            (__int64)&word_1801EA0DE,
            (__int64)qword_180241C80,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v31);
    v8 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x323u);
  }
  else
  {
    v29 = (struct ID3D11ModuleInstance *)&v33;
    v30 = 1;
    v15 = CShaderLinkingGraphBuilder::AppendNode(
            (__int64)a2,
            v14,
            (__int64)&word_1801EA0DE,
            (__int64)qword_180241C80,
            (__int64)"UnPremultiplyForLighting",
            (__int64)&v29);
    v8 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2EDu);
    }
    else
    {
      v28[0] = v14;
      v31 = (struct ID3D11ModuleInstance **)v28;
      v32 = 1;
      v17 = LinkLightShader((_DWORD)a2, (_DWORD)a3, v16, (unsigned int)&v31, 0, (__int64)&v29);
      v8 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x2FAu);
      }
      else
      {
        v31 = &v29;
        WORD1(v29) = v33;
        v32 = 2;
        v18 = CShaderLinkingGraphBuilder::AppendNode(
                (__int64)a2,
                v33,
                (__int64)&word_1801EA0DE,
                (__int64)qword_180241C80,
                (__int64)"PostLightingLib",
                (__int64)&v31);
        v8 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x301u);
      }
    }
  }
  return v8;
}
