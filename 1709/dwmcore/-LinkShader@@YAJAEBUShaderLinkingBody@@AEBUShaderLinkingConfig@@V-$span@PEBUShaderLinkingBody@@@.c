/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     AppendLights @ 0x1800016C8 (AppendLights.c)
 *     InitializeShaderLinkingInput @ 0x180001FD0 (InitializeShaderLinkingInput.c)
 *     UseFragmentsModuleNoRef @ 0x180002254 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800023DC (LoadShaderBody.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800046F0 (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x180004C18 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180004E04 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180004E5C (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     DiscoverSamplers @ 0x1800058FC (DiscoverSamplers.c)
 *     HasLighting @ 0x1800059A4 (HasLighting.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, struct ID3D10Blob **a5)
{
  __int64 v8; // r12
  _QWORD *v9; // r15
  unsigned int v10; // edi
  unsigned __int64 v11; // rbx
  int v12; // r13d
  _QWORD *v13; // rax
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // r15d
  int v18; // ecx
  char *v19; // rax
  __int128 v20; // xmm0
  bool v21; // zf
  __int64 v22; // r8
  _QWORD *v23; // r9
  char v24; // r10
  _QWORD *v25; // r11
  __int64 v26; // r8
  int appended; // eax
  int ShaderBody; // ebx
  int v29; // r12d
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v32; // rdx
  char v33; // di
  _DWORD *v34; // r14
  unsigned int v36; // r13d
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // r9
  int v40; // r9d
  __int64 v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+20h] [rbp-E0h]
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  char v45; // [rsp+40h] [rbp-C0h]
  __int128 v46; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v48; // [rsp+68h] [rbp-98h]
  _QWORD v49[2]; // [rsp+70h] [rbp-90h] BYREF
  struct ID3D10Blob **v50; // [rsp+80h] [rbp-80h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v52[4]; // [rsp+F0h] [rbp-10h] BYREF
  char v53; // [rsp+F4h] [rbp-Ch] BYREF
  unsigned int v54; // [rsp+110h] [rbp+10h] BYREF
  __int16 v55; // [rsp+114h] [rbp+14h]
  __int64 v56[4]; // [rsp+118h] [rbp+18h] BYREF

  v48 = a3;
  v50 = a5;
  v49[0] = a4;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v8 = 0LL;
  v47 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Start);
  memset_0(v52, 0, 0x20uLL);
  v9 = *(_QWORD **)a3;
  v10 = 0;
  v11 = *((_QWORD *)a3 + 1);
  v12 = 4;
  v56[0] = (__int64)v52;
  v54 = *(_DWORD *)(a1 + 48);
  v13 = &v9[v11];
  v56[1] = 4LL;
  v14 = (v11 * 8) >> 3;
  if ( v9 > v13 )
    v14 = 0LL;
  if ( v14 )
  {
    v36 = v54;
    do
    {
      v36 += *(_DWORD *)(*v9 + 48LL);
      v37 = DiscoverSamplers(*v9++, a2, v56);
      if ( v10 <= v37 )
        v10 = v37;
      ++v8;
    }
    while ( v8 != v14 );
    v54 = v36;
    v12 = 4;
  }
  v15 = DiscoverSamplers(a1, a2, v56);
  if ( v10 <= v15 )
    v10 = v15;
  v17 = 0;
  if ( *(_BYTE *)(a2 + 126) && v10 <= 2 )
    v10 = 2;
  v18 = 0;
  if ( v10 )
  {
    v19 = &v53;
    v16 = v10;
    do
    {
      if ( *(v19 - 3) )
        *(_DWORD *)v19 = v18++;
      v19 += 8;
      --v16;
    }
    while ( v16 );
  }
  v20 = *v48;
  v56[0] = 0LL;
  v46 = v20;
  if ( v10 <= 2 )
    v12 = 2;
  v21 = *(_DWORD *)(a2 + 96) == -1;
  HIDWORD(v56[0]) = v12;
  if ( !v21 || (unsigned __int8)HasLighting(a1, v16, 2LL) )
  {
LABEL_54:
    v24 = 1;
  }
  else
  {
    v23 = (_QWORD *)v46;
    v24 = 0;
    v25 = (_QWORD *)(v46 + 8LL * *((_QWORD *)&v46 + 1));
    while ( v23 != v25 )
    {
      if ( (unsigned __int8)HasLighting(*v23, v16, v22) )
        goto LABEL_54;
      v23 = (_QWORD *)(v39 + 8);
    }
  }
  v26 = v49[0];
  BYTE2(v56[0]) = *(_BYTE *)(a2 + 124);
  BYTE1(v56[0]) = *(_BYTE *)(a2 + 122);
  LOBYTE(v56[0]) = v24;
  *(_QWORD *)v49[0] = v56[0];
  LOBYTE(v16) = *(_BYTE *)(a1 + 32);
  appended = InitializeShaderLinkingInput(ppLinker, v16, v26);
  ShaderBody = appended;
  if ( appended < 0 )
  {
    v44 = 950;
    goto LABEL_84;
  }
  appended = UseFragmentsModuleNoRef((CShaderLinkingGraphBuilder *)ppLinker, v54, *(_BYTE *)(a2 + 126), v49);
  ShaderBody = appended;
  if ( appended < 0 )
  {
    v44 = 951;
    goto LABEL_84;
  }
  v29 = v49[0];
  if ( v10 > 2 )
  {
    *((_QWORD *)&v46 + 1) = 3LL;
    v54 = 16843008;
    v55 = 258;
    *(_QWORD *)&v46 = &v54;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (unsigned int)ppLinker,
                 259,
                 (unsigned int)&word_1801EFD5E,
                 v49[0],
                 (__int64)"DecodeTexcoord3",
                 (__int64)&v46);
    ShaderBody = appended;
    if ( appended < 0 )
    {
      v44 = 963;
LABEL_84:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, v44);
      goto LABEL_37;
    }
  }
  if ( (unsigned __int8)CShaderLinkingGraphBuilder::HasNode(ppLinker, 1LL) )
  {
    if ( *(_DWORD *)(a2 + 112) > 1u )
    {
      *((_QWORD *)&v46 + 1) = 1LL;
      *(_QWORD *)&v46 = &v54;
      v43 = *(_QWORD *)(a2 + 104);
      LOWORD(v54) = 1;
      appended = CShaderLinkingGraphBuilder::AppendNode(
                   (unsigned int)ppLinker,
                   1,
                   (unsigned int)&word_1801EFD5E,
                   v29,
                   v43,
                   (__int64)&v46);
      ShaderBody = appended;
      if ( appended < 0 )
      {
        v44 = 975;
        goto LABEL_84;
      }
    }
  }
  v49[1] = v10;
  v30 = v48;
  v31 = 0;
  v45 = 0;
  v49[0] = v52;
  if ( !*((_DWORD *)v48 + 2) )
  {
LABEL_26:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v47);
    appended = LoadShaderBody(
                 (CShaderLinkingGraphBuilder *)ppLinker,
                 a1,
                 a2,
                 (__int64)v49,
                 v31,
                 (__int64)&word_1801EFD5E,
                 (struct ID3D11Module **)&v47);
    ShaderBody = appended;
    if ( appended < 0 )
    {
      v44 = 1008;
      goto LABEL_84;
    }
    v41 = *(_QWORD *)(a1 + 40);
    v46 = *(_OWORD *)a1;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (unsigned int)ppLinker,
                 10,
                 (unsigned int)&word_1801EFD5E,
                 v47,
                 v41,
                 (__int64)&v46);
    ShaderBody = appended;
    if ( appended < 0 )
    {
      v44 = 1010;
      goto LABEL_84;
    }
    if ( *(_BYTE *)(a1 + 52) )
    {
      v40 = *(_DWORD *)(a1 + 8);
      v34 = (_DWORD *)(a2 + 96);
      appended = AppendLights(0xAu, (CShaderLinkingGraphBuilder *)ppLinker, (_DWORD *)(a2 + 96), v40);
      ShaderBody = appended;
      if ( appended < 0 )
      {
        v44 = 1016;
        goto LABEL_84;
      }
      v33 = 1;
    }
    else
    {
      v33 = v45;
      v34 = (_DWORD *)(a2 + 96);
    }
    if ( *(_BYTE *)(a2 + 122)
      && (*((_QWORD *)&v46 + 1) = 5LL,
          *(_QWORD *)&v46 = &unk_18021CDF0,
          appended = CShaderLinkingGraphBuilder::AppendNode(
                       (unsigned int)ppLinker,
                       10,
                       (unsigned int)&word_1801EFD5E,
                       v29,
                       (__int64)"ApplyPSClipPlanes",
                       (__int64)&v46),
          ShaderBody = appended,
          appended < 0) )
    {
      v44 = 1036;
    }
    else if ( *(_BYTE *)(a2 + 125)
           && (*((_QWORD *)&v46 + 1) = 2LL,
               *(_QWORD *)&v46 = "\n",
               appended = CShaderLinkingGraphBuilder::AppendNode(
                            (unsigned int)ppLinker,
                            10,
                            (unsigned int)&word_1801EFD5E,
                            v29,
                            (__int64)"AlphaMultiply",
                            (__int64)&v46),
               ShaderBody = appended,
               appended < 0) )
    {
      v44 = 1050;
    }
    else if ( v33
           || *v34 == -1
           || (appended = AppendLights(0xAu, (CShaderLinkingGraphBuilder *)ppLinker, v34, -1),
               ShaderBody = appended,
               appended >= 0) )
    {
      if ( *(_BYTE *)(a2 + 120)
        && (*((_QWORD *)&v46 + 1) = 1LL,
            *(_QWORD *)&v46 = "\n",
            appended = CShaderLinkingGraphBuilder::AppendNode(
                         (unsigned int)ppLinker,
                         10,
                         (unsigned int)&word_1801EFD5E,
                         v29,
                         (__int64)"BoostSDRLuminance",
                         (__int64)&v46),
            ShaderBody = appended,
            appended < 0) )
      {
        v44 = 1064;
      }
      else if ( *(_BYTE *)(a2 + 121)
             && (*((_QWORD *)&v46 + 1) = 1LL,
                 *(_QWORD *)&v46 = &v54,
                 LOWORD(v54) = 10,
                 appended = CShaderLinkingGraphBuilder::AppendNode(
                              (unsigned int)ppLinker,
                              10,
                              (unsigned int)&word_1801EFD5E,
                              v29,
                              (__int64)"MinBlend",
                              (__int64)&v46),
                 ShaderBody = appended,
                 appended < 0) )
      {
        v44 = 1070;
      }
      else
      {
        appended = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v32, v50);
        ShaderBody = appended;
        if ( appended >= 0 )
          goto LABEL_37;
        v44 = 1073;
      }
    }
    else
    {
      v44 = 1057;
    }
    goto LABEL_84;
  }
  while ( 1 )
  {
    v38 = *(_QWORD *)(*v30 + 8LL * v17);
    qmemcpy(v56, "BodyFragment", 12);
    LOWORD(v54) = v17 | 0x400;
    WORD2(v56[1]) = (unsigned __int8)(v17 + 48);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v47);
    ShaderBody = LoadShaderBody(
                   (CShaderLinkingGraphBuilder *)ppLinker,
                   v38,
                   a2,
                   (__int64)v49,
                   v31,
                   (__int64)v56,
                   (struct ID3D11Module **)&v47);
    if ( ShaderBody < 0 )
      break;
    v42 = *(_QWORD *)(v38 + 40);
    v46 = *(_OWORD *)v38;
    appended = CShaderLinkingGraphBuilder::AppendNode(
                 (unsigned int)ppLinker,
                 (unsigned __int16)v54,
                 (unsigned int)v56,
                 v47,
                 v42,
                 (__int64)&v46);
    ShaderBody = appended;
    if ( appended < 0 )
    {
      v44 = 993;
      goto LABEL_84;
    }
    v31 += *(_DWORD *)(v38 + 48);
    if ( *(_BYTE *)(v38 + 52) )
    {
      appended = AppendLights(v54, (CShaderLinkingGraphBuilder *)ppLinker, (_DWORD *)(a2 + 96), *(_DWORD *)(v38 + 8));
      ShaderBody = appended;
      if ( appended < 0 )
      {
        v44 = 1001;
        goto LABEL_84;
      }
      v45 = 1;
    }
    v30 = v48;
    if ( ++v17 >= *((_DWORD *)v48 + 2) )
      goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderBody, 0x3E0u);
LABEL_37:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Stop);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v47);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  return (unsigned int)ShaderBody;
}
