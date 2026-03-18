/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288
 * Callers:
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShade.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     AppendLights @ 0x18001D404 (AppendLights.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     InitializeShaderLinkingInput @ 0x1800D39CC (InitializeShaderLinkingInput.c)
 *     UseFragmentsModuleNoRef @ 0x1800D3C44 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800D3DAC (LoadShaderBody.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800D4C50 (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800D5214 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800D5400 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800D5470 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     HasWhiteNoise @ 0x1800D59A8 (HasWhiteNoise.c)
 *     DiscoverSamplers @ 0x1800D5A30 (DiscoverSamplers.c)
 *     GetExpectedVertexShaderDesc @ 0x1800D5B84 (GetExpectedVertexShaderDesc.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18017E928 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, struct ID3D10Blob **a5)
{
  unsigned int v8; // r13d
  __int64 v9; // r15
  unsigned int v10; // edi
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // ecx
  char *v14; // rax
  __int64 v15; // rdx
  char v16; // r15
  __int64 v17; // r13
  __int64 i; // rbx
  __int64 ExpectedVertexShaderDesc; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // eax
  int v25; // edx
  int v26; // r13d
  unsigned int v27; // ebx
  __int64 v28; // r15
  int v29; // eax
  int v30; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v31; // rdx
  char v32; // di
  int v33; // eax
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rdi
  int ShaderBody; // eax
  int v40; // eax
  bool v41; // zf
  int v42; // eax
  int appended; // eax
  __int64 v44; // rax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int ConversionShader; // eax
  int v50; // eax
  int v51; // eax
  __int64 *v52; // rax
  int v53; // eax
  struct ColorConversion::Shader *v54; // [rsp+20h] [rbp-E0h]
  struct ColorConversion::Shader *v55; // [rsp+20h] [rbp-E0h]
  char v56; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v57[6]; // [rsp+44h] [rbp-BCh] BYREF
  __int128 v58; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A0h] BYREF
  struct ID3D10Blob **v60; // [rsp+68h] [rbp-98h]
  struct ID3D11Linker *v61[12]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v62[4]; // [rsp+D0h] [rbp-30h] BYREF
  char v63; // [rsp+D4h] [rbp-2Ch] BYREF
  __int128 v64; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65[2]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v66[12]; // [rsp+110h] [rbp+10h] BYREF
  char v67; // [rsp+11Ch] [rbp+1Ch]
  char v68; // [rsp+11Dh] [rbp+1Dh]

  v60 = a5;
  v65[0] = a4;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v61);
  v59 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Start);
  memset_0(v62, 0, 0x20uLL);
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *a3;
  v10 = 0;
  *((_QWORD *)&v64 + 1) = v62;
  v11 = 0LL;
  *(_QWORD *)&v64 = 4LL;
  while ( v11 != v9 )
  {
    v36 = *(_QWORD *)(a3[1] + 8 * v11);
    v8 += *(_DWORD *)(v36 + 48);
    v37 = DiscoverSamplers(v36, a2, &v64);
    if ( v10 <= v37 )
      v10 = v37;
    ++v11;
  }
  *(_DWORD *)v57 = v8;
  v12 = DiscoverSamplers(a1, a2, &v64);
  if ( v10 <= v12 )
    v10 = v12;
  if ( *(_BYTE *)(a2 + 158) && v10 <= 2 )
    v10 = 2;
  v13 = 0;
  if ( v10 )
  {
    v14 = &v63;
    v15 = v10;
    do
    {
      if ( *(v14 - 3) )
        *(_DWORD *)v14 = v13++;
      v14 += 8;
      --v15;
    }
    while ( v15 );
  }
  v16 = HasWhiteNoise(a1);
  if ( !v16 )
  {
    v17 = *a3;
    for ( i = 0LL; i != v17; ++i )
    {
      if ( (unsigned __int8)HasWhiteNoise(*(_QWORD *)(a3[1] + 8 * i)) )
      {
        v16 = 1;
        break;
      }
    }
    v8 = *(_DWORD *)v57;
  }
  v58 = *(_OWORD *)a3;
  ExpectedVertexShaderDesc = GetExpectedVertexShaderDesc(a1, (unsigned int)&v58, a2, v10, v16);
  v20 = v65[0];
  *(_QWORD *)v65[0] = ExpectedVertexShaderDesc;
  LOBYTE(v21) = *(_BYTE *)(a1 + 32);
  v22 = InitializeShaderLinkingInput(v61, v21, v20);
  v23 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x48Au);
  }
  else
  {
    v24 = UseFragmentsModuleNoRef((CShaderLinkingGraphBuilder *)v61, v8, *(_BYTE *)(a2 + 158), v65);
    v23 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x48Bu);
    }
    else
    {
      v26 = v65[0];
      if ( v10 > 2 || v16 )
      {
        *(_QWORD *)&v64 = 3LL;
        WORD2(v65[0]) = 258;
        LODWORD(v65[0]) = 16843008;
        *((_QWORD *)&v64 + 1) = v65;
        v58 = v64;
        LOWORD(v25) = v16 != 0 ? 12 : 259;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     (unsigned int)v61,
                     v25,
                     (unsigned int)&word_18025290E,
                     v26,
                     (__int64)"DecodeTexcoord3",
                     (__int64)&v58);
        v23 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x497u);
          goto LABEL_37;
        }
      }
      if ( (unsigned __int8)CShaderLinkingGraphBuilder::HasNode(v61, 1LL) )
      {
        if ( *(_DWORD *)(a2 + 144) > 1u )
        {
          *(_QWORD *)&v64 = 1LL;
          *((_QWORD *)&v64 + 1) = v57;
          v44 = *(_QWORD *)(a2 + 136);
          v58 = v64;
          v57[0] = 1;
          v45 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)v61,
                  1,
                  (unsigned int)&word_18025290E,
                  v26,
                  v44,
                  (__int64)&v58);
          v23 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x4A3u);
            goto LABEL_37;
          }
        }
      }
      v27 = 0;
      v56 = 0;
      v28 = 0LL;
      *(_QWORD *)&v64 = v10;
      *((_QWORD *)&v64 + 1) = v62;
      LODWORD(v65[0]) = 0;
      if ( *(_DWORD *)a3 )
      {
        while ( 1 )
        {
          v38 = *(_QWORD *)(a3[1] + 8 * v28);
          qmemcpy(v66, "BodyFragment", sizeof(v66));
          v57[0] = v28 | 0x400;
          v67 = v28 + 48;
          v68 = 0;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v59);
          ShaderBody = LoadShaderBody(
                         (CShaderLinkingGraphBuilder *)v61,
                         v38,
                         a2,
                         (__int64)&v64,
                         v27,
                         (__int64)v66,
                         (struct ID3D11Module **)&v59);
          v23 = ShaderBody;
          if ( ShaderBody < 0 )
            break;
          v55 = *(struct ColorConversion::Shader **)(v38 + 40);
          v58 = *(_OWORD *)v38;
          v40 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)v61,
                  v57[0],
                  (unsigned int)v66,
                  v59,
                  (__int64)v55,
                  (__int64)&v58);
          v23 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x4B5u);
            goto LABEL_37;
          }
          v27 = *(_DWORD *)(v38 + 48) + LODWORD(v65[0]);
          v41 = *(_BYTE *)(v38 + 52) == 0;
          LODWORD(v65[0]) = v27;
          if ( !v41 )
          {
            v42 = AppendLights(v57[0], (CShaderLinkingGraphBuilder *)v61, (_DWORD *)(a2 + 128), *(_DWORD *)v38);
            v23 = v42;
            if ( v42 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x4BDu);
              goto LABEL_37;
            }
            v27 = v65[0];
            v56 = 1;
          }
          v28 = (unsigned int)(v28 + 1);
          if ( (unsigned int)v28 >= *(_DWORD *)a3 )
            goto LABEL_24;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShaderBody, 0x4B4u);
      }
      else
      {
LABEL_24:
        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v59);
        v29 = LoadShaderBody(
                (CShaderLinkingGraphBuilder *)v61,
                a1,
                a2,
                (__int64)&v64,
                v27,
                (__int64)&word_18025290E,
                (struct ID3D11Module **)&v59);
        v23 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x4C4u);
        }
        else
        {
          v54 = *(struct ColorConversion::Shader **)(a1 + 40);
          v58 = *(_OWORD *)a1;
          v30 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)v61,
                  10,
                  (unsigned int)&word_18025290E,
                  v59,
                  (__int64)v54,
                  (__int64)&v58);
          v23 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x4C6u);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 52) )
            {
              v46 = AppendLights(0xAu, (CShaderLinkingGraphBuilder *)v61, (_DWORD *)(a2 + 128), *(_DWORD *)a1);
              v23 = v46;
              if ( v46 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x4CCu);
                goto LABEL_37;
              }
              v32 = 1;
            }
            else
            {
              v32 = v56;
            }
            if ( *(_BYTE *)(a2 + 154) )
            {
              *(_QWORD *)&v64 = 5LL;
              *((_QWORD *)&v64 + 1) = &unk_1802780D8;
              v58 = v64;
              v47 = CShaderLinkingGraphBuilder::AppendNode(
                      (unsigned int)v61,
                      10,
                      (unsigned int)&word_18025290E,
                      v26,
                      (__int64)"ApplyPSClipPlanes",
                      (__int64)&v58);
              v23 = v47;
              if ( v47 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v47, 0x4E0u);
                goto LABEL_37;
              }
            }
            if ( *(_BYTE *)(a2 + 157) )
            {
              *(_QWORD *)&v64 = 2LL;
              *((_QWORD *)&v64 + 1) = "\n";
              v58 = v64;
              v35 = CShaderLinkingGraphBuilder::AppendNode(
                      (unsigned int)v61,
                      10,
                      (unsigned int)&word_18025290E,
                      v26,
                      (__int64)"AlphaMultiply",
                      (__int64)&v58);
              v23 = v35;
              if ( v35 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x4EEu);
                goto LABEL_37;
              }
            }
            if ( !v32 && *(_DWORD *)(a2 + 128) != -1 )
            {
              v48 = AppendLights(0xAu, (CShaderLinkingGraphBuilder *)v61, (_DWORD *)(a2 + 128), -1);
              v23 = v48;
              if ( v48 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x4F5u);
                goto LABEL_37;
              }
            }
            if ( *(_BYTE *)(a2 + 159) && *(_BYTE *)(a2 + 160) )
            {
              v65[0] = (__int64)"NoOp";
              ConversionShader = ColorConversion::GetConversionShader(
                                   DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709,
                                   0,
                                   8u,
                                   DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
                                   (struct ColorConversion::Shader *)v65,
                                   0LL);
              v23 = ConversionShader;
              if ( ConversionShader < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConversionShader, 0x502u);
                goto LABEL_37;
              }
              *(_QWORD *)&v64 = 1LL;
              *((_QWORD *)&v64 + 1) = "\n";
              v58 = v64;
              v50 = CShaderLinkingGraphBuilder::AppendNode(
                      (unsigned int)v61,
                      10,
                      (unsigned int)&word_18025290E,
                      v26,
                      v65[0],
                      (__int64)&v58);
              v23 = v50;
              if ( v50 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x503u);
                goto LABEL_37;
              }
            }
            if ( *(_BYTE *)(a2 + 152)
              && (*(_QWORD *)&v64 = 1LL,
                  *((_QWORD *)&v64 + 1) = "\n",
                  v58 = v64,
                  v51 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)v61,
                          10,
                          (unsigned int)&word_18025290E,
                          v26,
                          (__int64)"BoostSDRLuminance",
                          (__int64)&v58),
                  v23 = v51,
                  v51 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x50Au);
            }
            else
            {
              if ( !*(_BYTE *)(a2 + 153) )
                goto LABEL_35;
              v41 = *(_BYTE *)(a2 + 159) == 0;
              *((_QWORD *)&v58 + 1) = v57;
              *(_QWORD *)&v58 = 1LL;
              v52 = v65;
              if ( !v41 )
                v52 = (__int64 *)&v64;
              strcpy((char *)v65, "MinBlend");
              strcpy((char *)&v64, "MinBlend_HDR");
              v57[0] = 10;
              v53 = CShaderLinkingGraphBuilder::AppendNode(
                      (unsigned int)v61,
                      10,
                      (unsigned int)&word_18025290E,
                      v26,
                      (__int64)v52,
                      (__int64)&v58);
              v23 = v53;
              if ( v53 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x514u);
              }
              else
              {
LABEL_35:
                v33 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)v61, v31, v60);
                v23 = v33;
                if ( v33 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x517u);
              }
            }
          }
        }
      }
    }
  }
LABEL_37:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SHADER_LINK_Stop);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v59);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)v61);
  return v23;
}
