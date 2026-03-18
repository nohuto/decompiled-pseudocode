/*
 * XREFs of AppendLights @ 0x1800016C8
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 * Callees:
 *     LinkLightShader @ 0x1800018B0 (LinkLightShader.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x18000483C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x180004BA4 (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, CShaderLinkingGraphBuilder *a2, _DWORD *a3, int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // r14d
  __int64 v12; // r8
  int v13; // eax
  unsigned __int16 v14; // r14
  int NodeFromOutputArgument; // eax
  int v16; // r8d
  int v17; // eax
  unsigned __int16 v18; // r15
  int v19; // eax
  HRESULT v21; // eax
  int v22; // esi
  int v23; // eax
  unsigned __int16 v24; // si
  int appended; // eax
  int v26; // r8d
  int v27; // eax
  int v28; // eax
  int v29; // r15d
  int v30; // eax
  int v31; // eax
  _WORD v32[8]; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11ModuleInstance *v33[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v34; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v35; // [rsp+90h] [rbp+30h] BYREF

  v35 = a1;
  if ( !ppModule )
  {
    v21 = D3DLoadModule(&unk_1801F1760, 0xE6A5uLL, &ppModule);
    v8 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x32Fu);
      return v8;
    }
  }
  v33[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
  v7 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, struct ID3D11ModuleInstance **))ppModule->lpVtbl->CreateInstance)(
         ppModule,
         &word_1801EFD5E,
         v33);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x335u);
    goto LABEL_29;
  }
  v9 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v33[0]->lpVtbl->BindConstantBuffer)(
         v33[0],
         1LL,
         1LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x338u);
    goto LABEL_29;
  }
  v10 = CShaderLinkingGraphBuilder::UseLibrary(a2, v33[0]);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x33Au);
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
    return v8;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
  if ( a4 < 0 )
  {
    v22 = *((_DWORD *)a2 + 20);
    v33[1] = (struct ID3D11ModuleInstance *)1;
    v23 = v22 + 1;
    v24 = v22 | 0x500;
    *((_DWORD *)a2 + 20) = v23;
    v33[0] = (struct ID3D11ModuleInstance *)&v35;
    v34 = *(_OWORD *)v33;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v24,
                 (unsigned int)&word_1801EFD5E,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v34);
    v8 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x344u);
    }
    else
    {
      v33[1] = (struct ID3D11ModuleInstance *)1;
      v33[0] = (struct ID3D11ModuleInstance *)v32;
      v32[0] = v24;
      v34 = *(_OWORD *)v33;
      v27 = LinkLightShader((_DWORD)a2, (_DWORD)a3, v26, (unsigned int)&v34, 0, (__int64)v33);
      v8 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x351u);
      }
      else
      {
        *(_QWORD *)&v34 = v33;
        *((_QWORD *)&v34 + 1) = 2LL;
        WORD1(v33[0]) = v35;
        v28 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v35,
                (unsigned int)&word_1801EFD5E,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v34);
        v8 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x358u);
      }
    }
  }
  else
  {
    v11 = *((_DWORD *)a2 + 20);
    v12 = v35;
    v13 = v11 + 1;
    v14 = v11 | 0x500;
    *((_DWORD *)a2 + 20) = v13;
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v14, v12, (unsigned int)a4);
    v8 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NodeFromOutputArgument, 0x35Eu);
      return v8;
    }
    if ( *a3 == -1 )
    {
      v29 = *((_DWORD *)a2 + 20);
      v34 = 0LL;
      v30 = v29 + 1;
      v18 = v29 | 0x500;
      *((_DWORD *)a2 + 20) = v30;
      v31 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v18,
              (unsigned int)&word_1801EFD5E,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v34);
      v8 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x373u);
        return v8;
      }
    }
    else
    {
      v32[0] = v35;
      *((_QWORD *)&v34 + 1) = 2LL;
      *(_QWORD *)&v34 = v32;
      v32[1] = v14;
      v17 = LinkLightShader((_DWORD)a2, (_DWORD)a3, v16, (unsigned int)&v34, 1, (__int64)v33);
      v8 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x36Du);
        return v8;
      }
      v18 = (unsigned __int16)v33[0];
    }
    *(_QWORD *)&v34 = v33;
    *((_QWORD *)&v34 + 1) = 2LL;
    LOWORD(v33[0]) = v18;
    WORD1(v33[0]) = v14;
    v19 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v35,
            (unsigned int)&word_1801EFD5E,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v34);
    v8 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x37Au);
  }
  return v8;
}
