/*
 * XREFs of ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18021794C
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801E006C (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x18001D5E4 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180071BBC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x1800D4DE4 (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@@Z @ 0x1800D4DF8 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1800D4EE8 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800D5214 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800D5400 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800D5470 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     AppendColorConversion @ 0x1800D570C (AppendColorConversion.c)
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x1800D5938 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18017E928 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall CreateCompositingShader(int a1, _QWORD *a2, enum DXGI_COLOR_SPACE_TYPE a3, struct ID3D10Blob **a4)
{
  enum DXGI_COLOR_SPACE_TYPE v5; // r15d
  char v7; // di
  int v8; // eax
  unsigned int v9; // ebx
  int FragmentsModuleNoRef; // eax
  __int64 v11; // r14
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v15; // rdx
  unsigned int v16; // edi
  __int16 v17; // si
  int v18; // eax
  int v19; // eax
  int appended; // eax
  __int64 v21; // rdx
  int v22; // ecx
  char v23; // bl
  unsigned int ColorChannelDepth; // eax
  __int64 v25; // rdx
  enum DXGI_COLOR_SPACE_TYPE v26; // ecx
  int v27; // eax
  int ConversionShader; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  bool v36[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v38; // [rsp+38h] [rbp-C8h]
  struct ID3D11ModuleInstance *v39; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v40[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43; // [rsp+70h] [rbp-90h]
  enum DXGI_COLOR_SPACE_TYPE v44[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v45; // [rsp+90h] [rbp-70h] BYREF
  struct ID3D10Blob **v46; // [rsp+A0h] [rbp-60h]
  __int128 v47; // [rsp+B0h] [rbp-50h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v49[13]; // [rsp+120h] [rbp+20h] BYREF
  char v50; // [rsp+12Dh] [rbp+2Dh]
  char v51; // [rsp+12Eh] [rbp+2Eh]

  v39 = 0LL;
  v46 = a4;
  v5 = a3;
  v38 = a3;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v7 = a1 >= 37632;
  *(_QWORD *)&v41 = *a2 + 1LL;
  *((_QWORD *)&v41 + 1) = &unk_180234B80;
  v45 = v41;
  v8 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1 >= 37632, (__int64 *)&v45);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x538u);
  }
  else
  {
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(v7, (struct ID3D11Module **)v44);
    v9 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FragmentsModuleNoRef, 0x53Bu);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
      v11 = *(_QWORD *)v44;
      v12 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct ID3D11ModuleInstance **))(**(_QWORD **)v44 + 24LL))(
              *(_QWORD *)v44,
              &word_18025290E,
              &v39);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x53Cu);
      }
      else
      {
        v13 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, __int64, __int64, _QWORD))v39->lpVtbl->BindConstantBuffer)(
                v39,
                2LL,
                2LL,
                0LL);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x542u);
        }
        else
        {
          v14 = CShaderLinkingGraphBuilder::UseLibrary((CShaderLinkingGraphBuilder *)ppLinker, v39);
          v9 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x544u);
          }
          else
          {
            v16 = 0;
            if ( *(_DWORD *)a2 )
            {
              while ( 1 )
              {
                v17 = v16 | 0x100;
                v18 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v39->lpVtbl->BindResource)(
                        v39,
                        v16,
                        v16,
                        1LL);
                v9 = v18;
                if ( v18 < 0 )
                  break;
                v19 = ((__int64 (__fastcall *)(struct ID3D11ModuleInstance *, _QWORD, _QWORD, __int64))v39->lpVtbl->BindSampler)(
                        v39,
                        v16,
                        v16,
                        1LL);
                v9 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x54Cu);
                  goto LABEL_40;
                }
                v50 = v16 + 48;
                *((_QWORD *)&v47 + 1) = &v37;
                qmemcpy(v49, "SampleTexture", sizeof(v49));
                *(_QWORD *)&v47 = 1LL;
                v37 = v16 | 0x100;
                v51 = 0;
                v42 = v47;
                appended = CShaderLinkingGraphBuilder::AppendNode(
                             ppLinker,
                             v17,
                             (__int64)&word_18025290E,
                             v11,
                             (__int64)v49,
                             &v42);
                v9 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x552u);
                  goto LABEL_40;
                }
                v21 = a2[1];
                DWORD2(v41) = 0;
                *(_QWORD *)&v42 = v21;
                v22 = *(_DWORD *)(v21 + 12LL * (int)v16);
                v23 = *(_DWORD *)(v21 + 12LL * (int)v16 + 4) == 3;
                *(_QWORD *)&v41 = "NoOp";
                ColorChannelDepth = GetColorChannelDepth(v22);
                v26 = *(_DWORD *)(v25 + 12LL * (int)v16 + 8);
                v43 = ColorChannelDepth;
                v44[0] = v26;
                if ( (int)ColorConversion::GetConversionShader(
                            v26,
                            v23,
                            ColorChannelDepth,
                            v5,
                            (struct ColorConversion::Shader *)&v41,
                            v36) < 0 )
                {
                  if ( v38 == DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                    v5 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                  ConversionShader = ColorConversion::GetConversionShader(
                                       v44[0],
                                       v23,
                                       v43,
                                       v5,
                                       (struct ColorConversion::Shader *)&v41,
                                       v36);
                  v9 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ConversionShader, 0x568u);
                    goto LABEL_40;
                  }
                  *(_OWORD *)v44 = v41;
                  v29 = AppendColorConversion(ppLinker, v11, v17, (__int64)v44, v36[0]);
                  v9 = v29;
                  if ( v29 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x569u);
                    goto LABEL_40;
                  }
                  v30 = ColorConversion::GetConversionShader(
                          v5,
                          *(_DWORD *)(v42 + 12LL * (int)v16 + 4) == 3,
                          v5 != DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 ? 16 : 8,
                          v38,
                          (struct ColorConversion::Shader *)&v41,
                          v36);
                  v9 = v30;
                  if ( v30 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x56Fu);
                    goto LABEL_40;
                  }
                  v42 = v41;
                  v31 = AppendColorConversion(ppLinker, v11, v17, (__int64)&v42, v36[0]);
                  v9 = v31;
                  if ( v31 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x570u);
                    goto LABEL_40;
                  }
                  v5 = v38;
                }
                else
                {
                  v42 = v41;
                  v27 = AppendColorConversion(ppLinker, v11, v17, (__int64)&v42, v36[0]);
                  v9 = v27;
                  if ( v27 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x55Eu);
                    goto LABEL_40;
                  }
                }
                if ( v16 )
                {
                  *(_QWORD *)&v45 = 2LL;
                  v40[0] = 10;
                  *((_QWORD *)&v45 + 1) = v40;
                  v40[1] = v16 | 0x100;
                  v42 = v45;
                  v33 = CShaderLinkingGraphBuilder::AppendNode(
                          ppLinker,
                          10,
                          (__int64)&word_18025290E,
                          v11,
                          (__int64)"CompositeSourceOver",
                          &v42);
                  v9 = v33;
                  if ( v33 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x57Cu);
                    goto LABEL_40;
                  }
                }
                else
                {
                  v32 = CShaderLinkingGraphBuilder::CopyNode(ppLinker, 10, v17);
                  v9 = v32;
                  if ( v32 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x576u);
                    goto LABEL_40;
                  }
                }
                if ( ++v16 >= *(_DWORD *)a2 )
                  goto LABEL_25;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x54Bu);
            }
            else
            {
LABEL_25:
              v34 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v15, v46);
              v9 = v34;
              if ( v34 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x580u);
            }
          }
        }
      }
    }
  }
LABEL_40:
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
  return v9;
}
