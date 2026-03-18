/*
 * XREFs of ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10
 * Callers:
 *     ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801A7528 (-GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXG.c)
 * Callees:
 *     ?GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11Module@@@Z @ 0x180002394 (-GetFragmentsModuleNoRef@CShaderLinkingGraphBuilder@@SAJW4D3DShaderProfileVersion@@PEAPEAUID3D11.c)
 *     ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x18000483C (-UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$span@$$CBW4ShaderLinkingArgument@@@gsl@@@Z @ 0x180004850 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@@gsl@@@Z @ 0x180004938 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x180004C18 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180004E04 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x180004E5C (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     AppendColorConversion @ 0x1800056A8 (AppendColorConversion.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x18006E0F8 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18006E174 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z @ 0x1801D8948 (-CopyNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@0@Z.c)
 */

__int64 __fastcall CreateCompositingShader(int a1, _QWORD *a2, enum DXGI_COLOR_SPACE_TYPE a3, struct ID3D10Blob **a4)
{
  enum DXGI_COLOR_SPACE_TYPE v5; // r15d
  char v7; // di
  signed int v8; // eax
  unsigned int v9; // ebx
  signed int FragmentsModuleNoRef; // eax
  __int64 v11; // r14
  signed int v12; // eax
  signed int v13; // eax
  signed int v14; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v15; // rdx
  unsigned int v16; // edi
  unsigned __int16 v17; // si
  signed int v18; // eax
  signed int v19; // eax
  signed int appended; // eax
  __int64 v21; // rdx
  int v22; // ecx
  __int64 v23; // rdx
  int ColorChannelDepth; // r8d
  char v25; // bl
  int v26; // r8d
  signed int v27; // eax
  signed int ConversionShader; // eax
  signed int v29; // eax
  signed int v30; // eax
  signed int v31; // eax
  signed int v32; // eax
  signed int v33; // eax
  signed int v34; // eax
  bool v36[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v37; // [rsp+34h] [rbp-CCh] BYREF
  enum DXGI_COLOR_SPACE_TYPE v38; // [rsp+38h] [rbp-C8h]
  struct ID3D11ModuleInstance *v39; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v40[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v41; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v42; // [rsp+60h] [rbp-A0h] BYREF
  enum DXGI_COLOR_SPACE_TYPE v43[4]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  struct ID3D10Blob **v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+A0h] [rbp-60h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v48[13]; // [rsp+110h] [rbp+10h] BYREF
  char v49; // [rsp+11Dh] [rbp+1Dh]
  char v50; // [rsp+11Eh] [rbp+1Eh]

  v39 = 0LL;
  v45 = a4;
  v5 = a3;
  v38 = a3;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  *(_QWORD *)&v41 = &unk_1801EB7B0;
  v7 = a1 >= 37632;
  *((_QWORD *)&v41 + 1) = a2[1] + 1LL;
  v44 = v41;
  v8 = CShaderLinkingGraphBuilder::Initialize(ppLinker, a1 >= 37632, (__int64 *)&v44);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x452u);
  }
  else
  {
    FragmentsModuleNoRef = CShaderLinkingGraphBuilder::GetFragmentsModuleNoRef(v7, (struct ID3D11Module **)v43);
    v9 = FragmentsModuleNoRef;
    if ( FragmentsModuleNoRef < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, FragmentsModuleNoRef, 0x455u);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
      v11 = *(_QWORD *)v43;
      v12 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct ID3D11ModuleInstance **))(**(_QWORD **)v43 + 24LL))(
              *(_QWORD *)v43,
              &word_1801EFD5E,
              &v39);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x456u);
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
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x45Cu);
        }
        else
        {
          v14 = CShaderLinkingGraphBuilder::UseLibrary((CShaderLinkingGraphBuilder *)ppLinker, v39);
          v9 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x45Eu);
          }
          else
          {
            v16 = 0;
            if ( *((_DWORD *)a2 + 2) )
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
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x466u);
                  goto LABEL_40;
                }
                v49 = v16 + 48;
                *(_QWORD *)&v46 = &v37;
                qmemcpy(v48, "SampleTexture", sizeof(v48));
                *((_QWORD *)&v46 + 1) = 1LL;
                v37 = v16 | 0x100;
                v50 = 0;
                v42 = v46;
                appended = CShaderLinkingGraphBuilder::AppendNode(
                             (__int64)ppLinker,
                             v17,
                             (__int64)&word_1801EFD5E,
                             v11,
                             (__int64)v48,
                             &v42);
                v9 = appended;
                if ( appended < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x46Cu);
                  goto LABEL_40;
                }
                v21 = *a2;
                DWORD2(v41) = 0;
                *(_QWORD *)&v42 = v21;
                v22 = *(_DWORD *)(v21 + 12LL * (int)v16);
                *(_QWORD *)&v41 = "NoOp";
                ColorChannelDepth = GetColorChannelDepth(v22);
                v25 = *(_DWORD *)(v23 + 12LL * (int)v16 + 4) == 3;
                v43[0] = *(enum DXGI_COLOR_SPACE_TYPE *)(v23 + 12LL * (int)v16 + 8);
                if ( (int)ColorConversion::GetConversionShader(
                            v43[0],
                            v25,
                            ColorChannelDepth,
                            v5,
                            (struct ColorConversion::Shader *)&v41,
                            v36) < 0 )
                {
                  if ( v38 == DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
                    v5 = DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
                  ConversionShader = ColorConversion::GetConversionShader(
                                       v43[0],
                                       v25,
                                       v26,
                                       v5,
                                       (struct ColorConversion::Shader *)&v41,
                                       v36);
                  v9 = ConversionShader;
                  if ( ConversionShader < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ConversionShader, 0x482u);
                    goto LABEL_40;
                  }
                  *(_OWORD *)v43 = v41;
                  v29 = AppendColorConversion((__int64)ppLinker, v11, v17, (__int64)v43, v36[0]);
                  v9 = v29;
                  if ( v29 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x483u);
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
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v30, 0x489u);
                    goto LABEL_40;
                  }
                  v42 = v41;
                  v31 = AppendColorConversion((__int64)ppLinker, v11, v17, (__int64)&v42, v36[0]);
                  v9 = v31;
                  if ( v31 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, 0x48Au);
                    goto LABEL_40;
                  }
                  v5 = v38;
                }
                else
                {
                  v42 = v41;
                  v27 = AppendColorConversion((__int64)ppLinker, v11, v17, (__int64)&v42, v36[0]);
                  v9 = v27;
                  if ( v27 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, 0x478u);
                    goto LABEL_40;
                  }
                }
                if ( v16 )
                {
                  *((_QWORD *)&v44 + 1) = 2LL;
                  v40[0] = 10;
                  *(_QWORD *)&v44 = v40;
                  v40[1] = v16 | 0x100;
                  v42 = v44;
                  v33 = CShaderLinkingGraphBuilder::AppendNode(
                          (__int64)ppLinker,
                          10,
                          (__int64)&word_1801EFD5E,
                          v11,
                          (__int64)"CompositeSourceOver",
                          &v42);
                  v9 = v33;
                  if ( v33 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v33, 0x496u);
                    goto LABEL_40;
                  }
                }
                else
                {
                  v32 = CShaderLinkingGraphBuilder::CopyNode(ppLinker, 10LL, v17);
                  v9 = v32;
                  if ( v32 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v32, 0x490u);
                    goto LABEL_40;
                  }
                }
                if ( ++v16 >= *((_DWORD *)a2 + 2) )
                  goto LABEL_25;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v18, 0x465u);
            }
            else
            {
LABEL_25:
              v34 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v15, v45);
              v9 = v34;
              if ( v34 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x49Au);
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
