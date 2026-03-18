/*
 * XREFs of AppendLights @ 0x18001D404
 * Callers:
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     LinkLightShader @ 0x18001D218 (LinkLightShader.c)
 *     ?CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z @ 0x18001D6CC (-CreateNodeFromOutputArgument@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0H@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800D4DE4 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppendLights(unsigned __int16 a1, CShaderLinkingGraphBuilder *a2, _DWORD *a3, int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  unsigned __int16 v13; // si
  int NodeFromOutputArgument; // eax
  __int64 v15; // r8
  int v16; // eax
  unsigned __int16 v17; // r15
  int v18; // eax
  HRESULT v20; // eax
  int appended; // eax
  __int64 v22; // r8
  int v23; // eax
  int v24; // eax
  int v25; // r15d
  int v26; // eax
  int v27; // eax
  _WORD v28[8]; // [rsp+30h] [rbp-30h] BYREF
  struct ID3D11ModuleInstance *v29[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v30; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v31; // [rsp+90h] [rbp+30h] BYREF

  v31 = a1;
  if ( !ppModule )
  {
    v20 = D3DLoadModule(&unk_180240FE0, 0xEE3DuLL, &ppModule);
    v8 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x3F3u);
      return v8;
    }
  }
  v29[0] = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
  v7 = ((__int64 (__fastcall *)(struct ID3D11Module *, const unsigned __int16 *, struct ID3D11ModuleInstance **))ppModule->lpVtbl->CreateInstance)(
         ppModule,
         &word_18025290E,
         v29);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3F9u);
    goto LABEL_29;
  }
  v9 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64))v29[0]->lpVtbl->BindConstantBuffer)(
         v29[0],
         1LL,
         1LL);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3FFu);
    goto LABEL_29;
  }
  v10 = CShaderLinkingGraphBuilder::UseLibrary(a2, v29[0]);
  v8 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x401u);
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
    return v8;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)v29);
  v11 = *((_DWORD *)a2 + 20);
  v12 = v11 + 1;
  v13 = v11 | 0x500;
  *((_DWORD *)a2 + 20) = v12;
  if ( a4 < 0 )
  {
    v29[1] = (struct ID3D11ModuleInstance *)&v31;
    v29[0] = (struct ID3D11ModuleInstance *)1;
    v30 = *(_OWORD *)v29;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (_DWORD)a2,
                 v13,
                 (unsigned int)&word_18025290E,
                 (_DWORD)ppModule,
                 (__int64)"UnPremultiplyForLighting",
                 (__int64)&v30);
    v8 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x40Bu);
    }
    else
    {
      v29[0] = (struct ID3D11ModuleInstance *)1;
      v29[1] = (struct ID3D11ModuleInstance *)v28;
      v28[0] = v13;
      v30 = *(_OWORD *)v29;
      v23 = LinkLightShader((__int64)a2, a3, v22, (__int64 *)&v30, 0, (unsigned __int16 *)v29);
      v8 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x418u);
      }
      else
      {
        *((_QWORD *)&v30 + 1) = v29;
        *(_QWORD *)&v30 = 2LL;
        WORD1(v29[0]) = v31;
        v24 = CShaderLinkingGraphBuilder::AppendNode(
                (_DWORD)a2,
                v31,
                (unsigned int)&word_18025290E,
                (_DWORD)ppModule,
                (__int64)"PostLightingLib",
                (__int64)&v30);
        v8 = v24;
        if ( v24 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x41Fu);
      }
    }
  }
  else
  {
    NodeFromOutputArgument = CShaderLinkingGraphBuilder::CreateNodeFromOutputArgument(a2, v13, v31, (unsigned int)a4);
    v8 = NodeFromOutputArgument;
    if ( NodeFromOutputArgument < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NodeFromOutputArgument, 0x425u);
      return v8;
    }
    if ( *a3 == -1 )
    {
      v25 = *((_DWORD *)a2 + 20);
      v30 = 0LL;
      v26 = v25 + 1;
      v17 = v25 | 0x500;
      *((_DWORD *)a2 + 20) = v26;
      v27 = CShaderLinkingGraphBuilder::AppendNode(
              (_DWORD)a2,
              v17,
              (unsigned int)&word_18025290E,
              (_DWORD)ppModule,
              (__int64)"NoLightAccumulator",
              (__int64)&v30);
      v8 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x43Au);
        return v8;
      }
    }
    else
    {
      v28[0] = v31;
      *(_QWORD *)&v30 = 2LL;
      *((_QWORD *)&v30 + 1) = v28;
      v28[1] = v13;
      v16 = LinkLightShader((__int64)a2, a3, v15, (__int64 *)&v30, 1, (unsigned __int16 *)v29);
      v8 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x434u);
        return v8;
      }
      v17 = (unsigned __int16)v29[0];
    }
    *((_QWORD *)&v30 + 1) = v29;
    *(_QWORD *)&v30 = 2LL;
    LOWORD(v29[0]) = v17;
    WORD1(v29[0]) = v13;
    v18 = CShaderLinkingGraphBuilder::AppendNode(
            (_DWORD)a2,
            v31,
            (unsigned int)&word_18025290E,
            (_DWORD)ppModule,
            (__int64)"PostSceneLightingEffectLib",
            (__int64)&v30);
    v8 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x441u);
  }
  return v8;
}
