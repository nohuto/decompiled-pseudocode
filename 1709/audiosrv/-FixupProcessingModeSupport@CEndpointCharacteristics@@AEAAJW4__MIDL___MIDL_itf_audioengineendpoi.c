/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800B4464
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800B38F0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800B14EC (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800B4D18 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?GetConnectorFXEndpointEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x1800B5224 (-GetConnectorFXEndpointEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x1800B5294 (-GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?GetConnectorFXStreamEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x1800B532C (-GetConnectorFXStreamEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetConnectorProcessingModeSFXKey@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@@Z @ 0x1800B53C4 (-GetConnectorProcessingModeSFXKey@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengine.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800BC078 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x1800BD6D0 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x1800BD750 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800D9D48 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  char *v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  void *v11; // rdi
  int v12; // eax
  unsigned int v13; // esi
  struct _GUID *v14; // rbx
  __int64 v15; // rdx
  int v16; // r12d
  struct IPropertyStore *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  int APOModesSupportedForStreaming; // eax
  CEndpointCharacteristics *v23; // rcx
  unsigned int v24; // r14d
  __int64 v25; // r9
  int ConnectorProcessingModeSFXKey; // eax
  CEndpointCharacteristics *v27; // rcx
  int v28; // eax
  CEndpointCharacteristics *v29; // rcx
  GUID v30; // xmm0
  DWORD v31; // eax
  int v32; // eax
  struct _GUID *v33; // rsi
  struct _GUID *v34; // rdi
  struct _GUID *v35; // rbx
  int ConnectorFXStreamEffectPKEY; // eax
  __int64 v37; // rdx
  CEndpointCharacteristics *v38; // rcx
  CEndpointCharacteristics *v39; // rcx
  int v40; // r14d
  _QWORD *v41; // rax
  _OWORD *v42; // rax
  _DWORD v43[8]; // [rsp+40h] [rbp-C8h] BYREF
  struct _GUID *v44; // [rsp+68h] [rbp-A0h] BYREF
  PROPERTYKEY v45; // [rsp+78h] [rbp-90h] BYREF
  struct _tagpropertykey v46; // [rsp+98h] [rbp-70h] BYREF
  int v47[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-48h]
  struct _tagpropertykey v49; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v51; // [rsp+F0h] [rbp-18h]
  struct _tagpropertykey v52; // [rsp+F8h] [rbp-10h] BYREF
  struct _tagpropertykey v53; // [rsp+118h] [rbp+10h] BYREF
  struct _GUID *v54; // [rsp+138h] [rbp+30h] BYREF
  __int64 v55; // [rsp+140h] [rbp+38h]
  struct _GUID *v56; // [rsp+148h] [rbp+40h] BYREF
  SystemEffectDescriptor *v57; // [rsp+150h] [rbp+48h]
  __int64 v58; // [rsp+158h] [rbp+50h]
  _BYTE v59[56]; // [rsp+160h] [rbp+58h] BYREF
  __int64 v60; // [rsp+198h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]
  LPVOID pv; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int v63; // [rsp+1F0h] [rbp+E8h] BYREF
  unsigned int v64; // [rsp+1F8h] [rbp+F0h] BYREF

  v64 = a3;
  v58 = -2LL;
  v5 = a2;
  if ( !*((_DWORD *)this + a2 + 10) )
  {
    if ( a2 != eKeywordDetectorConnector )
    {
      v7 = (char *)this + 16 * a2 + 64;
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v7);
      v8 = CAudioSignalProcessingModeArray::AddMultiple(
             (CAudioSignalProcessingModeArray *)v7,
             1u,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x849,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      if ( a4 && !(_DWORD)v5 )
      {
        pv = 0LL;
        v64 = 0;
        v44 = 0LL;
        v63 = 0;
        memset(&v43[2], 0, 20);
        v45 = PKEY_FX_PreMixEffectClsid;
        GetFxClsids(
          *((struct IMMDevice **)this + 2),
          &v45,
          (struct _tagpropertykey *)&v43[2],
          &v64,
          (struct _GUID **)&pv);
        memset(&v46, 0, sizeof(v46));
        v49 = PKEY_FX_PostMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v49, &v46, &v63, &v44);
        v46.fmtid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v11 = pv;
        v12 = SystemEffectDescriptor::SetDefaultEffectChain(
                (CEndpointCharacteristics *)((char *)this + 96 * v5 + 232),
                &v46.fmtid,
                v64,
                (const struct _GUID *)pv);
        v13 = v12;
        v14 = v44;
        if ( v12 < 0 )
        {
          v15 = 2138LL;
LABEL_11:
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)v15,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12);
          CoTaskMemFree(v14);
          CoTaskMemFree(v11);
          return v13;
        }
        v46.fmtid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v12 = SystemEffectDescriptor::SetDefaultEffectChain(
                (CEndpointCharacteristics *)((char *)this + 96 * v5 + 616),
                &v46.fmtid,
                v63,
                v44);
        v13 = v12;
        if ( v12 < 0 )
        {
          v15 = 2139LL;
          goto LABEL_11;
        }
        CoTaskMemFree(v14);
        CoTaskMemFree(v11);
      }
    }
    return 0LL;
  }
  if ( (a2 & 0xFFFFFFFC) != 0 || a2 == eLoopbackConnector )
    return 0LL;
  *(_QWORD *)v47 = 0LL;
  v16 = 0;
  v48 = 0LL;
  *(_QWORD *)&v49.fmtid.Data1 = 0LL;
  *(_QWORD *)v49.fmtid.Data4 = 0LL;
  *(_QWORD *)&v46.fmtid.Data1 = 0LL;
  *(_QWORD *)v46.fmtid.Data4 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v17 = (struct IPropertyStore *)*((_QWORD *)this + 7);
  if ( v17 )
  {
    v18 = (unsigned int)v5;
    if ( (_DWORD)v5 )
    {
      v18 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 == 1 )
      {
        fmtid = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        pid = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        if ( (_DWORD)v5 != 3 )
        {
          v19 = 2157LL;
LABEL_38:
          v24 = -2147023728;
          v25 = 2147943568LL;
          goto LABEL_39;
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
    *(GUID *)&v43[2] = fmtid;
    v43[6] = pid;
    APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                      (CEndpointCharacteristics *)v18,
                                      v17,
                                      (struct _tagpropertykey *)&v43[2],
                                      1,
                                      (struct CAudioSignalProcessingModeArray *)&v49);
    v24 = APOModesSupportedForStreaming;
    if ( APOModesSupportedForStreaming < 0 )
    {
      v25 = (unsigned int)APOModesSupportedForStreaming;
      v19 = 2158LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v25);
LABEL_62:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v50);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v46);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v49);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v47);
      return v24;
    }
    ConnectorProcessingModeSFXKey = CEndpointCharacteristics::GetConnectorProcessingModeSFXKey(
                                      v23,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                      (struct _tagpropertykey *)&v43[2]);
    v24 = ConnectorProcessingModeSFXKey;
    if ( ConnectorProcessingModeSFXKey < 0 )
    {
      v25 = (unsigned int)ConnectorProcessingModeSFXKey;
      v19 = 2161LL;
      goto LABEL_39;
    }
    v45 = *(struct _tagpropertykey *)&v43[2];
    v28 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
            v27,
            *((struct IPropertyStore **)this + 7),
            &v45,
            0,
            (struct CAudioSignalProcessingModeArray *)v47);
    v24 = v28;
    if ( v28 < 0 )
    {
      v25 = (unsigned int)v28;
      v19 = 2162LL;
      goto LABEL_39;
    }
    if ( (int)v5 >= 0 )
    {
      if ( (int)v5 <= 1 )
      {
        v30 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
        v31 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
        goto LABEL_34;
      }
      if ( (_DWORD)v5 == 3 )
      {
        v30 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v31 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
LABEL_34:
        *(GUID *)&v43[2] = v30;
        v43[6] = v31;
        v32 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                v29,
                *((struct IPropertyStore **)this + 7),
                (struct _tagpropertykey *)&v43[2],
                0,
                (struct CAudioSignalProcessingModeArray *)&v46);
        v24 = v32;
        if ( v32 < 0 )
        {
          v25 = (unsigned int)v32;
          v19 = 2166LL;
          goto LABEL_39;
        }
        v16 = v48;
        goto LABEL_40;
      }
    }
    v19 = 2165LL;
    goto LABEL_38;
  }
LABEL_40:
  v33 = 0LL;
  v44 = 0LL;
  v64 = 0;
  v34 = 0LL;
  v54 = 0LL;
  v63 = 0;
  v35 = 0LL;
  v56 = 0LL;
  LODWORD(pv) = 0;
  ConnectorFXStreamEffectPKEY = CEndpointCharacteristics::GetConnectorFXStreamEffectPKEY(
                                  this,
                                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                  (struct _tagpropertykey *)&v43[2],
                                  &v45);
  v24 = ConnectorFXStreamEffectPKEY;
  if ( ConnectorFXStreamEffectPKEY < 0 )
  {
    v37 = 2182LL;
    goto LABEL_60;
  }
  v52 = v45;
  v53 = *(struct _tagpropertykey *)&v43[2];
  GetFxClsids(*((struct IMMDevice **)this + 2), &v53, &v52, &v64, &v44);
  v55 = 96 * v5;
  v33 = v44;
  ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                  (CEndpointCharacteristics *)((char *)this + 96 * v5 + 232),
                                  (struct CAudioSignalProcessingModeArray *)v47,
                                  v64,
                                  v44);
  v24 = ConnectorFXStreamEffectPKEY;
  if ( ConnectorFXStreamEffectPKEY < 0 )
  {
    v37 = 2184LL;
    goto LABEL_60;
  }
  ConnectorFXStreamEffectPKEY = CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
                                  v38,
                                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                  (struct _tagpropertykey *)&v43[2],
                                  &v45);
  v24 = ConnectorFXStreamEffectPKEY;
  if ( ConnectorFXStreamEffectPKEY < 0 )
  {
    v37 = 2186LL;
    goto LABEL_60;
  }
  v53 = v45;
  v52 = *(struct _tagpropertykey *)&v43[2];
  GetFxClsids(*((struct IMMDevice **)this + 2), &v52, &v53, &v63, &v54);
  v57 = (CEndpointCharacteristics *)((char *)this + v55 + 616);
  v34 = v54;
  ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                  v57,
                                  (struct CAudioSignalProcessingModeArray *)&v49,
                                  v63,
                                  v54);
  v24 = ConnectorFXStreamEffectPKEY;
  if ( ConnectorFXStreamEffectPKEY < 0 )
  {
    v37 = 2188LL;
    goto LABEL_60;
  }
  if ( (int)CEndpointCharacteristics::GetConnectorFXEndpointEffectPKEY(
              v39,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
              (struct _tagpropertykey *)&v43[2],
              &v45) >= 0 )
  {
    v53 = v45;
    v52 = *(struct _tagpropertykey *)&v43[2];
    GetFxClsids(*((struct IMMDevice **)this + 2), &v52, &v53, (unsigned int *)&pv, &v56);
    v35 = v56;
    ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                    (CEndpointCharacteristics *)((char *)this + v55 + 1000),
                                    (struct CAudioSignalProcessingModeArray *)&v46,
                                    (unsigned int)pv,
                                    v56);
    v24 = ConnectorFXStreamEffectPKEY;
    if ( ConnectorFXStreamEffectPKEY < 0 )
    {
      v37 = 2194LL;
      goto LABEL_60;
    }
  }
  v40 = 0;
  if ( v16 > 0 )
  {
    do
    {
      v41 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v47, v40);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)&v49, v41) == -1 )
      {
        v42 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v47, v40);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)&v50, v42) )
        {
          v24 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8A3,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_61;
        }
      }
      ++v40;
    }
    while ( v40 < v16 );
    if ( (int)v51 > 0 )
    {
      v60 = 0LL;
      ConnectorFXStreamEffectPKEY = SystemEffectDescriptor::CreateOverridingChain(
                                      v57,
                                      (struct CAudioSignalProcessingModeArray *)&v50,
                                      2,
                                      1,
                                      (__int64)v59);
      v24 = ConnectorFXStreamEffectPKEY;
      if ( ConnectorFXStreamEffectPKEY < 0 )
      {
        v37 = 2218LL;
LABEL_60:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v37,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)ConnectorFXStreamEffectPKEY);
LABEL_61:
        CoTaskMemFree(v35);
        CoTaskMemFree(v34);
        CoTaskMemFree(v33);
        goto LABEL_62;
      }
    }
  }
  CoTaskMemFree(v35);
  CoTaskMemFree(v34);
  CoTaskMemFree(v33);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v50);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v46);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v49);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v47);
  return 0LL;
}
