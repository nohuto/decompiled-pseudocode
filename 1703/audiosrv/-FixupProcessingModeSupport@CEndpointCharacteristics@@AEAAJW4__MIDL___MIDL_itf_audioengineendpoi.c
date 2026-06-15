/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800416A4 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetConnectorFXEndpointEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x180041AC4 (-GetConnectorFXEndpointEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x18004230C (-GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?GetConnectorFXStreamEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x1800423A4 (-GetConnectorFXStreamEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetConnectorProcessingModeSFXKey@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@@Z @ 0x18004243C (-GetConnectorProcessingModeSFXKey@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x180043C90 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180044370 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800443E0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180044920 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x1800C127C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  int v7; // r12d
  struct IPropertyStore *v8; // rdx
  unsigned __int64 v9; // rcx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int APOModesSupportedForStreaming; // eax
  CEndpointCharacteristics *v13; // rcx
  unsigned int v14; // r14d
  int ConnectorProcessingModeSFXKey; // eax
  CEndpointCharacteristics *v16; // rcx
  int v17; // eax
  CEndpointCharacteristics *v18; // rcx
  GUID v19; // xmm0
  DWORD v20; // eax
  int v21; // eax
  struct _GUID *v22; // rsi
  void *v23; // rdi
  struct _GUID *v24; // rbx
  int ConnectorFXStreamEffectPKEY; // eax
  CEndpointCharacteristics *v26; // rcx
  CEndpointCharacteristics *v27; // rcx
  int v28; // r14d
  _QWORD *v30; // rax
  CAudioSignalProcessingModeArray *v31; // rbx
  int v32; // eax
  unsigned int v33; // ebx
  struct _GUID *v34; // rdi
  int v35; // eax
  unsigned int v36; // esi
  struct _GUID *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // r9
  __int64 v41; // rdx
  _OWORD *v42; // rax
  int v43; // [rsp+28h] [rbp-E0h]
  int v44; // [rsp+28h] [rbp-E0h]
  _DWORD v45[8]; // [rsp+40h] [rbp-C8h] BYREF
  struct _GUID *v46; // [rsp+68h] [rbp-A0h] BYREF
  PROPERTYKEY v47; // [rsp+78h] [rbp-90h] BYREF
  struct _tagpropertykey v48; // [rsp+98h] [rbp-70h] BYREF
  int v49[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-48h]
  struct _tagpropertykey v51; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v53; // [rsp+F0h] [rbp-18h]
  struct _tagpropertykey v54; // [rsp+F8h] [rbp-10h] BYREF
  struct _tagpropertykey v55; // [rsp+118h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+138h] [rbp+30h] BYREF
  __int64 v57; // [rsp+140h] [rbp+38h]
  struct _GUID *v58; // [rsp+148h] [rbp+40h] BYREF
  SystemEffectDescriptor *v59; // [rsp+150h] [rbp+48h]
  __int64 v60; // [rsp+158h] [rbp+50h]
  _BYTE v61[56]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v62; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]
  struct _GUID *v64; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int v65; // [rsp+1F0h] [rbp+E8h] BYREF
  unsigned int v66; // [rsp+1F8h] [rbp+F0h] BYREF

  v66 = a3;
  v60 = -2LL;
  v5 = a2;
  if ( !*((_DWORD *)this + a2 + 10) )
  {
    if ( a2 != eKeywordDetectorConnector )
    {
      v31 = (CEndpointCharacteristics *)((char *)this + 16 * a2 + 64);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v31);
      v32 = CAudioSignalProcessingModeArray::AddMultiple(v31, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v33 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x808,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v32,
          v43);
        return v33;
      }
      if ( a4 && !(_DWORD)v5 )
      {
        v64 = 0LL;
        v66 = 0;
        v46 = 0LL;
        v65 = 0;
        memset(&v45[2], 0, 20);
        v47 = PKEY_FX_PreMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v47, (struct _tagpropertykey *)&v45[2], &v66, &v64);
        memset(&v48, 0, sizeof(v48));
        v51 = PKEY_FX_PostMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v51, &v48, &v65, &v46);
        v48.fmtid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v34 = v64;
        v35 = SystemEffectDescriptor::SetDefaultEffectChain(
                (CEndpointCharacteristics *)((char *)this + 96 * v5 + 224),
                &v48.fmtid,
                v66,
                v64);
        v36 = v35;
        v37 = v46;
        if ( v35 >= 0 )
        {
          v48.fmtid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v35 = SystemEffectDescriptor::SetDefaultEffectChain(
                  (CEndpointCharacteristics *)((char *)this + 96 * v5 + 608),
                  &v48.fmtid,
                  v65,
                  v46);
          v36 = v35;
          if ( v35 >= 0 )
          {
            CoTaskMemFree(v37);
            CoTaskMemFree(v34);
            return 0LL;
          }
          v38 = 2074LL;
        }
        else
        {
          v38 = 2073LL;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v38,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v35,
          v44);
        CoTaskMemFree(v37);
        CoTaskMemFree(v34);
        return v36;
      }
    }
    return 0LL;
  }
  if ( (a2 & 0xFFFFFFFC) != 0 || a2 == eLoopbackConnector )
    return 0LL;
  *(_QWORD *)v49 = 0LL;
  v7 = 0;
  v50 = 0LL;
  *(_QWORD *)&v51.fmtid.Data1 = 0LL;
  *(_QWORD *)v51.fmtid.Data4 = 0LL;
  *(_QWORD *)&v48.fmtid.Data1 = 0LL;
  *(_QWORD *)v48.fmtid.Data4 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v8 = (struct IPropertyStore *)*((_QWORD *)this + 7);
  if ( !v8 )
  {
LABEL_16:
    v22 = 0LL;
    v46 = 0LL;
    v66 = 0;
    v23 = 0LL;
    pv = 0LL;
    v65 = 0;
    v24 = 0LL;
    v58 = 0LL;
    LODWORD(v64) = 0;
    ConnectorFXStreamEffectPKEY = CEndpointCharacteristics::GetConnectorFXStreamEffectPKEY(
                                    this,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                    (struct _tagpropertykey *)&v45[2],
                                    &v47);
    v14 = ConnectorFXStreamEffectPKEY;
    if ( ConnectorFXStreamEffectPKEY < 0 )
    {
      v41 = 2117LL;
      goto LABEL_63;
    }
    v54 = v47;
    v55 = *(struct _tagpropertykey *)&v45[2];
    GetFxClsids(*((struct IMMDevice **)this + 2), &v55, &v54, &v66, &v46);
    v57 = 96 * v5;
    v22 = v46;
    ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                    (CEndpointCharacteristics *)((char *)this + 96 * v5 + 224),
                                    (struct CAudioSignalProcessingModeArray *)v49,
                                    v66,
                                    v46);
    v14 = ConnectorFXStreamEffectPKEY;
    if ( ConnectorFXStreamEffectPKEY < 0 )
    {
      v41 = 2119LL;
      goto LABEL_63;
    }
    ConnectorFXStreamEffectPKEY = CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
                                    v26,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                    (struct _tagpropertykey *)&v45[2],
                                    &v47);
    v14 = ConnectorFXStreamEffectPKEY;
    if ( ConnectorFXStreamEffectPKEY < 0 )
    {
      v41 = 2121LL;
      goto LABEL_63;
    }
    v55 = v47;
    v54 = *(struct _tagpropertykey *)&v45[2];
    GetFxClsids(*((struct IMMDevice **)this + 2), &v54, &v55, &v65, (struct _GUID **)&pv);
    v59 = (CEndpointCharacteristics *)((char *)this + v57 + 608);
    v23 = pv;
    ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                    v59,
                                    (struct CAudioSignalProcessingModeArray *)&v51,
                                    v65,
                                    (const struct _GUID *)pv);
    v14 = ConnectorFXStreamEffectPKEY;
    if ( ConnectorFXStreamEffectPKEY < 0 )
    {
      v41 = 2123LL;
      goto LABEL_63;
    }
    if ( (int)CEndpointCharacteristics::GetConnectorFXEndpointEffectPKEY(
                v27,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                (struct _tagpropertykey *)&v45[2],
                &v47) >= 0 )
    {
      v55 = v47;
      v54 = *(struct _tagpropertykey *)&v45[2];
      GetFxClsids(*((struct IMMDevice **)this + 2), &v54, &v55, (unsigned int *)&v64, &v58);
      v24 = v58;
      ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                      (CEndpointCharacteristics *)((char *)this + v57 + 992),
                                      (struct CAudioSignalProcessingModeArray *)&v48,
                                      (unsigned int)v64,
                                      v58);
      v14 = ConnectorFXStreamEffectPKEY;
      if ( ConnectorFXStreamEffectPKEY < 0 )
      {
        v41 = 2129LL;
        goto LABEL_63;
      }
    }
    v28 = 0;
    if ( v7 > 0 )
    {
      do
      {
        v30 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v49, v28);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&v51, v30) == -1 )
        {
          v42 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v49, v28);
          if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v52, v42) )
          {
            v14 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x862,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x8007000ELL,
              v43);
            goto LABEL_64;
          }
        }
        ++v28;
      }
      while ( v28 < v7 );
      if ( (int)v53 > 0 )
      {
        v62 = 0LL;
        ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::CreateOverridingChain(
                                        v59,
                                        (struct CAudioSignalProcessingModeArray *)&v52,
                                        2,
                                        1,
                                        (__int64)v61);
        v14 = ConnectorFXStreamEffectPKEY;
        if ( ConnectorFXStreamEffectPKEY < 0 )
        {
          v41 = 2153LL;
LABEL_63:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v41,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)ConnectorFXStreamEffectPKEY,
            v43);
LABEL_64:
          CoTaskMemFree(v24);
          CoTaskMemFree(v23);
          CoTaskMemFree(v22);
          goto LABEL_65;
        }
      }
    }
    CoTaskMemFree(v24);
    CoTaskMemFree(v23);
    CoTaskMemFree(v22);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v52);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v48);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v51);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v49);
    return 0LL;
  }
  v9 = (unsigned int)v5;
  if ( (_DWORD)v5 )
  {
    v9 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 == 1 )
    {
      fmtid = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
      pid = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
    }
    else
    {
      if ( (_DWORD)v5 != 3 )
      {
        v39 = 2092LL;
LABEL_52:
        v14 = -2147023728;
        v40 = 2147943568LL;
        goto LABEL_53;
      }
      fmtid = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
      pid = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
    }
  }
  else
  {
    fmtid = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
    pid = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
  }
  *(GUID *)&v45[2] = fmtid;
  v45[6] = pid;
  APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                    (CEndpointCharacteristics *)v9,
                                    v8,
                                    (struct _tagpropertykey *)&v45[2],
                                    1,
                                    (struct CAudioSignalProcessingModeArray *)&v51);
  v14 = APOModesSupportedForStreaming;
  if ( APOModesSupportedForStreaming < 0 )
  {
    v40 = (unsigned int)APOModesSupportedForStreaming;
    v39 = 2093LL;
    goto LABEL_53;
  }
  ConnectorProcessingModeSFXKey = CEndpointCharacteristics::GetConnectorProcessingModeSFXKey(
                                    v13,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                    (struct _tagpropertykey *)&v45[2]);
  v14 = ConnectorProcessingModeSFXKey;
  if ( ConnectorProcessingModeSFXKey < 0 )
  {
    v40 = (unsigned int)ConnectorProcessingModeSFXKey;
    v39 = 2096LL;
    goto LABEL_53;
  }
  v47 = *(struct _tagpropertykey *)&v45[2];
  v17 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
          v16,
          *((struct IPropertyStore **)this + 7),
          &v47,
          0,
          (struct CAudioSignalProcessingModeArray *)v49);
  v14 = v17;
  if ( v17 < 0 )
  {
    v40 = (unsigned int)v17;
    v39 = 2097LL;
    goto LABEL_53;
  }
  if ( (int)v5 < 0 )
  {
LABEL_51:
    v39 = 2100LL;
    goto LABEL_52;
  }
  if ( (int)v5 > 1 )
  {
    if ( (_DWORD)v5 == 3 )
    {
      v19 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
      v20 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      goto LABEL_14;
    }
    goto LABEL_51;
  }
  v19 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
  v20 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
LABEL_14:
  *(GUID *)&v45[2] = v19;
  v45[6] = v20;
  v21 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
          v18,
          *((struct IPropertyStore **)this + 7),
          (struct _tagpropertykey *)&v45[2],
          0,
          (struct CAudioSignalProcessingModeArray *)&v48);
  v14 = v21;
  if ( v21 >= 0 )
  {
    v7 = v50;
    goto LABEL_16;
  }
  v40 = (unsigned int)v21;
  v39 = 2101LL;
LABEL_53:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v39,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v40,
    v43);
LABEL_65:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v52);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v48);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v51);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v49);
  return v14;
}
