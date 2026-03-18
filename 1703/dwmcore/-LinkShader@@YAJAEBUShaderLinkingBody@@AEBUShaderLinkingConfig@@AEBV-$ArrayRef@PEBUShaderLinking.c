/*
 * XREFs of ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InitializeShaderLinkingInput @ 0x1800B842C (InitializeShaderLinkingInput.c)
 *     UseFragmentsModuleNoRef @ 0x1800B8630 (UseFragmentsModuleNoRef.c)
 *     LoadShaderBody @ 0x1800B8738 (LoadShaderBody.c)
 *     ?HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z @ 0x1800B8E48 (-HasNode@CShaderLinkingGraphBuilder@@QEBA_NW4ShaderLinkingArgument@@@Z.c)
 *     ?AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@@Z @ 0x1800B8F98 (-AppendNode@CShaderLinkingGraphBuilder@@QEAAJW4ShaderLinkingArgument@@PEBDPEAUID3D11Module@@1V-$.c)
 *     ?Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z @ 0x1800B92F4 (-Link@CShaderLinkingGraphBuilder@@QEAAJAEBUSignatureParameter@1@PEAPEAUID3D10Blob@@@Z.c)
 *     ??0CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B94D8 (--0CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ??1CShaderLinkingGraphBuilder@@QEAA@XZ @ 0x1800B9540 (--1CShaderLinkingGraphBuilder@@QEAA@XZ.c)
 *     ?Find@?$ArrayRef@$$CBW4ShaderLinkingArgument@@@@QEBAHAEBW4ShaderLinkingArgument@@@Z @ 0x1800BB88C (-Find@-$ArrayRef@$$CBW4ShaderLinkingArgument@@@@QEBAHAEBW4ShaderLinkingArgument@@@Z.c)
 *     DiscoverSamplers @ 0x1800BB8B8 (DiscoverSamplers.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     AppendLights @ 0x1801BAAA4 (AppendLights.c)
 */

__int64 __fastcall LinkShader(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, struct ID3D10Blob **a5)
{
  __int64 v8; // rcx
  unsigned int v9; // r13d
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // r15d
  int v13; // ebx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // r15d
  int v17; // ecx
  unsigned int v18; // eax
  int i; // r11d
  bool v20; // zf
  bool v21; // sf
  char v22; // al
  unsigned int v23; // r10d
  __int64 v24; // r8
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // eax
  int v28; // eax
  char v29; // r12
  unsigned int v30; // r13d
  int v31; // eax
  int v32; // eax
  const struct CShaderLinkingGraphBuilder::SignatureParameter *v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rcx
  unsigned int v40; // eax
  __int64 v41; // rcx
  int appended; // eax
  int v43; // eax
  __int64 v44; // rdi
  int ShaderBody; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  unsigned __int16 v52; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v53; // [rsp+48h] [rbp-B8h] BYREF
  int v54; // [rsp+50h] [rbp-B0h]
  unsigned int v55; // [rsp+58h] [rbp-A8h]
  __int64 v56; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v57; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v58; // [rsp+70h] [rbp-90h]
  struct ID3D10Blob **v59; // [rsp+78h] [rbp-88h]
  struct ID3D11Linker *ppLinker[12]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v61[32]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v62; // [rsp+100h] [rbp+0h] BYREF
  int v63; // [rsp+108h] [rbp+8h]
  _BYTE v64[12]; // [rsp+110h] [rbp+10h] BYREF
  char v65; // [rsp+11Ch] [rbp+1Ch]
  char v66; // [rsp+11Dh] [rbp+1Dh]

  v59 = a5;
  v57 = a4;
  v58 = (_QWORD *)a3;
  CShaderLinkingGraphBuilder::CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  v56 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v8, &EVTDESC_SHADER_LINK_Start);
  memset_0(v61, 0, sizeof(v61));
  v9 = *(_DWORD *)(a1 + 48);
  v62 = v61;
  v10 = 0;
  v11 = *(_DWORD *)(a3 + 8);
  v12 = 0;
  v55 = v11;
  v13 = 4;
  v63 = 4;
  if ( v11 )
  {
    v38 = v11;
    do
    {
      v39 = *(_QWORD *)(*(_QWORD *)a3 + 8LL * (int)v12);
      v9 += *(_DWORD *)(v39 + 48);
      v40 = DiscoverSamplers(v39, a2, &v62);
      if ( v10 <= v40 )
        v10 = v40;
      ++v12;
    }
    while ( v12 < v38 );
    v13 = 4;
  }
  v14 = DiscoverSamplers(a1, a2, &v62);
  if ( v10 <= v14 )
    v10 = v14;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  for ( i = 1; v18 < v10; ++v18 )
  {
    v15 = (int)v18;
    if ( v61[8 * v18 + 1] )
      *(_DWORD *)&v61[8 * v18 + 4] = v17++;
  }
  v62 = 0LL;
  if ( v10 <= 2 )
    v13 = 2;
  v20 = *(_DWORD *)(a2 + 48) == -1;
  HIDWORD(v62) = v13;
  if ( !v20
    || *(_BYTE *)(a1 + 52)
    || (v52 = 2, v21 = (int)ArrayRef<enum ShaderLinkingArgument const>::Find(a1, &v52) < 0, v22 = 0, !v21) )
  {
    v22 = i;
  }
  v23 = 0;
  while ( v23 < *(_DWORD *)(a3 + 8) )
  {
    if ( v22 )
      break;
    v41 = *(_QWORD *)(*(_QWORD *)a3 + 8LL * (int)v23);
    if ( !*(_BYTE *)(v41 + 52) )
    {
      v52 = 2;
      v21 = (int)ArrayRef<enum ShaderLinkingArgument const>::Find(v41, &v52) < 0;
      v22 = 0;
      if ( v21 )
        continue;
    }
    v22 = i;
    v23 += i;
  }
  v24 = (__int64)v57;
  LOBYTE(v62) = v22;
  BYTE2(v62) = *(_BYTE *)(a2 + 59);
  BYTE1(v62) = *(_BYTE *)(a2 + 57);
  *v57 = v62;
  LOBYTE(v15) = *(_BYTE *)(a1 + 32);
  v25 = InitializeShaderLinkingInput(ppLinker, v15, v24);
  v26 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x35Cu);
  }
  else
  {
    v27 = UseFragmentsModuleNoRef((CShaderLinkingGraphBuilder *)ppLinker, v9, &v57);
    v26 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x35Du);
    }
    else
    {
      if ( v10 > 2 )
      {
        LODWORD(v62) = 16843008;
        WORD2(v62) = 258;
        v54 = 3;
        v53 = (unsigned __int16 *)&v62;
        appended = CShaderLinkingGraphBuilder::AppendNode(
                     (unsigned int)ppLinker,
                     259,
                     (unsigned int)&word_1801EA0DE,
                     (_DWORD)v57,
                     (__int64)"DecodeTexcoord3",
                     (__int64)&v53);
        v26 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x369u);
          goto LABEL_32;
        }
      }
      if ( (unsigned __int8)CShaderLinkingGraphBuilder::HasNode(ppLinker, 1LL) )
      {
        v28 = *(_DWORD *)(a2 + 52);
        if ( v28 )
        {
          v53 = &v52;
          v52 = 1;
          v54 = 1;
          v43 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)ppLinker,
                  1,
                  (unsigned int)&word_1801EA0DE,
                  (_DWORD)v57,
                  (__int64)off_1801D12D0[v28 - 1],
                  (__int64)&v53);
          v26 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x370u);
            goto LABEL_32;
          }
        }
      }
      v29 = 0;
      v30 = 0;
      v62 = v61;
      v63 = v10;
      if ( v55 )
      {
        while ( 1 )
        {
          v44 = *(_QWORD *)(*v58 + 8LL * v16);
          qmemcpy(v64, "BodyFragment", sizeof(v64));
          v66 = 0;
          v52 = v16 | 0x400;
          v65 = v16 + 48;
          Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v56);
          ShaderBody = LoadShaderBody(
                         (CShaderLinkingGraphBuilder *)ppLinker,
                         v44,
                         a2,
                         (__int64)&v62,
                         v30,
                         (__int64)v64,
                         (struct ID3D11Module **)&v56);
          v26 = ShaderBody;
          if ( ShaderBody < 0 )
            break;
          v54 = *(_DWORD *)(v44 + 8);
          v53 = *(unsigned __int16 **)v44;
          v46 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)ppLinker,
                  v52,
                  (unsigned int)v64,
                  v56,
                  *(_QWORD *)(v44 + 40),
                  (__int64)&v53);
          v26 = v46;
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x382u);
            goto LABEL_32;
          }
          v30 += *(_DWORD *)(v44 + 48);
          if ( *(_BYTE *)(v44 + 52) )
          {
            v47 = AppendLights(v52, ppLinker, a2 + 48, *(unsigned int *)(v44 + 8));
            v26 = v47;
            if ( v47 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x38Au);
              goto LABEL_32;
            }
            v29 = 1;
          }
          if ( ++v16 >= v55 )
            goto LABEL_22;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderBody, 0x381u);
      }
      else
      {
LABEL_22:
        Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v56);
        v31 = LoadShaderBody(
                (CShaderLinkingGraphBuilder *)ppLinker,
                a1,
                a2,
                (__int64)&v62,
                v30,
                (__int64)&word_1801EA0DE,
                (struct ID3D11Module **)&v56);
        v26 = v31;
        if ( v31 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x391u);
        }
        else
        {
          v54 = *(_DWORD *)(a1 + 8);
          v53 = *(unsigned __int16 **)a1;
          v32 = CShaderLinkingGraphBuilder::AppendNode(
                  (unsigned int)ppLinker,
                  10,
                  (unsigned int)&word_1801EA0DE,
                  v56,
                  *(_QWORD *)(a1 + 40),
                  (__int64)&v53);
          v26 = v32;
          if ( v32 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x393u);
          }
          else
          {
            if ( *(_BYTE *)(a1 + 52) )
            {
              v48 = AppendLights(10LL, ppLinker, a2 + 48, *(unsigned int *)(a1 + 8));
              v26 = v48;
              if ( v48 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x399u);
                goto LABEL_32;
              }
              v29 = 1;
            }
            if ( *(_BYTE *)(a2 + 57)
              && (v53 = (unsigned __int16 *)&unk_1801FE960,
                  v54 = 5,
                  v49 = CShaderLinkingGraphBuilder::AppendNode(
                          (unsigned int)ppLinker,
                          10,
                          (unsigned int)&word_1801EA0DE,
                          (_DWORD)v57,
                          (__int64)"ApplyPSClipPlanes",
                          (__int64)&v53),
                  v26 = v49,
                  v49 < 0) )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x3ADu);
            }
            else if ( *(_BYTE *)(a2 + 60)
                   && (v54 = 2,
                       v53 = (unsigned __int16 *)&unk_1801E9F60,
                       v37 = CShaderLinkingGraphBuilder::AppendNode(
                               (unsigned int)ppLinker,
                               10,
                               (unsigned int)&word_1801EA0DE,
                               (_DWORD)v57,
                               (__int64)"AlphaMultiply",
                               (__int64)&v53),
                       v26 = v37,
                       v37 < 0) )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x3B9u);
            }
            else if ( v29
                   || *(_DWORD *)(a2 + 48) == -1
                   || (v50 = AppendLights(10LL, ppLinker, a2 + 48, 0xFFFFFFFFLL), v26 = v50, v50 >= 0) )
            {
              if ( *(_BYTE *)(a2 + 56)
                && (v53 = &v52,
                    v52 = 10,
                    v54 = 1,
                    v51 = CShaderLinkingGraphBuilder::AppendNode(
                            (unsigned int)ppLinker,
                            10,
                            (unsigned int)&word_1801EA0DE,
                            (_DWORD)v57,
                            (__int64)"MinBlend",
                            (__int64)&v53),
                    v26 = v51,
                    v51 < 0) )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x3C6u);
              }
              else
              {
                v34 = CShaderLinkingGraphBuilder::Link((CShaderLinkingGraphBuilder *)ppLinker, v33, v59);
                v26 = v34;
                if ( v34 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x3C9u);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x3C0u);
            }
          }
        }
      }
    }
  }
LABEL_32:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v35, &EVTDESC_SHADER_LINK_Stop);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v56);
  CShaderLinkingGraphBuilder::~CShaderLinkingGraphBuilder((CShaderLinkingGraphBuilder *)ppLinker);
  return v26;
}
