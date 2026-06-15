/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800511A4
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800521D4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800508E0 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x180051138 (-GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800529C4 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800533D0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18005366C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800536D0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180053A60 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x1800F0DC8 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  __int64 v7; // r14
  struct _GUID *v8; // rsi
  int v9; // r12d
  struct IPropertyStore *v10; // rdx
  unsigned __int64 v11; // rcx
  GUID v12; // xmm0
  DWORD v13; // eax
  int APOModesSupportedForStreaming; // eax
  unsigned int v15; // r14d
  unsigned __int64 v16; // rcx
  GUID v17; // xmm0
  DWORD v18; // eax
  int v19; // eax
  CEndpointCharacteristics *v20; // rcx
  GUID v21; // xmm0
  DWORD v22; // eax
  int v23; // eax
  void *v24; // rdi
  struct _GUID *v25; // rbx
  GUID fmtid; // xmm0
  DWORD pid; // eax
  GUID v28; // xmm1
  DWORD v29; // ecx
  int ConnectorFXModeEffectPKEY; // eax
  CEndpointCharacteristics *v31; // rcx
  int v32; // r14d
  GUID v34; // xmm0
  DWORD v35; // eax
  GUID v36; // xmm1
  DWORD v37; // ecx
  __int64 v38; // rax
  CAudioSignalProcessingModeArray *v39; // rbx
  int v40; // eax
  unsigned int v41; // ebx
  struct _GUID *v42; // rdi
  int v43; // eax
  unsigned int v44; // esi
  struct _GUID *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rax
  int v52; // [rsp+28h] [rbp-E0h]
  int v53; // [rsp+28h] [rbp-E0h]
  _DWORD v54[8]; // [rsp+40h] [rbp-C8h] BYREF
  struct _GUID *v55; // [rsp+68h] [rbp-A0h] BYREF
  struct _tagpropertykey v56; // [rsp+78h] [rbp-90h] BYREF
  int v57[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-68h]
  struct _tagpropertykey v59; // [rsp+A8h] [rbp-60h] BYREF
  struct _tagpropertykey v60; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v62; // [rsp+F0h] [rbp-18h]
  struct _tagpropertykey v63; // [rsp+F8h] [rbp-10h] BYREF
  struct _tagpropertykey v64; // [rsp+118h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+138h] [rbp+30h] BYREF
  __int64 v66; // [rsp+140h] [rbp+38h]
  struct _GUID *v67; // [rsp+148h] [rbp+40h] BYREF
  SystemEffectDescriptor *v68; // [rsp+150h] [rbp+48h]
  __int64 v69; // [rsp+158h] [rbp+50h]
  __int64 v70[15]; // [rsp+160h] [rbp+58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]
  struct _GUID *v72; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned int v73; // [rsp+1F0h] [rbp+E8h] BYREF
  unsigned int v74; // [rsp+1F8h] [rbp+F0h] BYREF

  v74 = a3;
  v69 = -2LL;
  v5 = a2;
  v7 = a2;
  v8 = 0LL;
  if ( !*((_DWORD *)this + a2 + 10) )
  {
    if ( a2 != eKeywordDetectorConnector )
    {
      v39 = (CEndpointCharacteristics *)((char *)this + 16 * a2 + 64);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
      v40 = CAudioSignalProcessingModeArray::AddMultiple(v39, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      v41 = v40;
      if ( v40 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x84E,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v40,
          v52);
        return v41;
      }
      if ( a4 && !(_DWORD)v5 )
      {
        v72 = 0LL;
        v74 = 0;
        v55 = 0LL;
        v73 = 0;
        memset(&v54[2], 0, 20);
        v59 = PKEY_FX_PreMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v59, (struct _tagpropertykey *)&v54[2], &v74, &v72);
        memset(&v56, 0, sizeof(v56));
        v60 = PKEY_FX_PostMixEffectClsid;
        GetFxClsids(*((struct IMMDevice **)this + 2), &v60, &v56, &v73, &v55);
        v56.fmtid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v42 = v72;
        v43 = SystemEffectDescriptor::SetDefaultEffectChain(
                (CEndpointCharacteristics *)((char *)this + 96 * v5 + 232),
                &v56.fmtid,
                v74,
                v72);
        v44 = v43;
        v45 = v55;
        if ( v43 >= 0 )
        {
          v56.fmtid = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v43 = SystemEffectDescriptor::SetDefaultEffectChain(
                  (CEndpointCharacteristics *)((char *)this + 96 * v5 + 616),
                  &v56.fmtid,
                  v73,
                  v55);
          v44 = v43;
          if ( v43 >= 0 )
          {
            CoTaskMemFree(v45);
            CoTaskMemFree(v42);
            return 0LL;
          }
          v46 = 2144LL;
        }
        else
        {
          v46 = 2143LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v46,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v43,
          v53);
        CoTaskMemFree(v45);
        CoTaskMemFree(v42);
        return v44;
      }
    }
    return 0LL;
  }
  if ( (a2 & 0xFFFFFFFC) != 0 || a2 == eLoopbackConnector )
    return 0LL;
  *(_QWORD *)v57 = 0LL;
  v9 = 0;
  v58 = 0LL;
  *(_QWORD *)&v60.fmtid.Data1 = 0LL;
  *(_QWORD *)v60.fmtid.Data4 = 0LL;
  *(_QWORD *)&v56.fmtid.Data1 = 0LL;
  *(_QWORD *)v56.fmtid.Data4 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v10 = (struct IPropertyStore *)*((_QWORD *)this + 7);
  if ( !v10 )
  {
LABEL_18:
    v55 = 0LL;
    v74 = 0;
    v24 = 0LL;
    pv = 0LL;
    v73 = 0;
    v25 = 0LL;
    v67 = 0LL;
    LODWORD(v72) = 0;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 == 1 )
      {
        fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
        pid = PKEY_FX_Offload_StreamEffectClsid.pid;
        v28 = PKEY_CompositeFX_Offload_StreamEffectClsid.fmtid;
        v29 = PKEY_CompositeFX_Offload_StreamEffectClsid.pid;
      }
      else
      {
        if ( (_DWORD)v5 != 3 )
        {
          v15 = -2147023728;
          v49 = 2147943568LL;
          v50 = 2187LL;
LABEL_71:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v50,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)v49,
            v52);
          CoTaskMemFree(v25);
          CoTaskMemFree(v24);
          CoTaskMemFree(v8);
          goto LABEL_72;
        }
        fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
        pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
        v28 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.fmtid;
        v29 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.pid;
      }
    }
    else
    {
      fmtid = PKEY_FX_StreamEffectClsid.fmtid;
      pid = PKEY_FX_StreamEffectClsid.pid;
      v28 = PKEY_CompositeFX_StreamEffectClsid.fmtid;
      v29 = PKEY_CompositeFX_StreamEffectClsid.pid;
    }
    *(GUID *)&v54[2] = fmtid;
    v54[6] = pid;
    v59.fmtid = v28;
    v59.pid = v29;
    v63.fmtid = v28;
    v63.pid = v29;
    v64.fmtid = fmtid;
    v64.pid = pid;
    GetFxClsids(*((struct IMMDevice **)this + 2), &v64, &v63, &v74, &v55);
    v66 = 96 * v7;
    v8 = v55;
    ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                  (CEndpointCharacteristics *)((char *)this + 96 * v7 + 232),
                                  (struct CAudioSignalProcessingModeArray *)v57,
                                  v74,
                                  v55);
    v15 = ConnectorFXModeEffectPKEY;
    if ( ConnectorFXModeEffectPKEY < 0 )
    {
      v50 = 2189LL;
    }
    else
    {
      ConnectorFXModeEffectPKEY = CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
                                    v31,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                    (struct _tagpropertykey *)&v54[2],
                                    &v59);
      v15 = ConnectorFXModeEffectPKEY;
      if ( ConnectorFXModeEffectPKEY < 0 )
      {
        v50 = 2191LL;
      }
      else
      {
        v64 = v59;
        v63 = *(struct _tagpropertykey *)&v54[2];
        GetFxClsids(*((struct IMMDevice **)this + 2), &v63, &v64, &v73, (struct _GUID **)&pv);
        v68 = (CEndpointCharacteristics *)((char *)this + v66 + 616);
        v24 = pv;
        ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                      v68,
                                      (struct CAudioSignalProcessingModeArray *)&v60,
                                      v73,
                                      (const struct _GUID *)pv);
        v15 = ConnectorFXModeEffectPKEY;
        if ( ConnectorFXModeEffectPKEY < 0 )
        {
          v50 = 2193LL;
        }
        else
        {
          if ( (_DWORD)v5 )
          {
            if ( (_DWORD)v5 != 3 )
              goto LABEL_26;
            v34 = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
            v35 = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
            v36 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.fmtid;
            v37 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.pid;
          }
          else
          {
            v34 = PKEY_FX_EndpointEffectClsid.fmtid;
            v35 = PKEY_FX_EndpointEffectClsid.pid;
            v36 = PKEY_CompositeFX_EndpointEffectClsid.fmtid;
            v37 = PKEY_CompositeFX_EndpointEffectClsid.pid;
          }
          v64.fmtid = v36;
          v64.pid = v37;
          v63.fmtid = v34;
          v63.pid = v35;
          GetFxClsids(*((struct IMMDevice **)this + 2), &v63, &v64, (unsigned int *)&v72, &v67);
          v25 = v67;
          ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                        (CEndpointCharacteristics *)((char *)this + v66 + 1000),
                                        (struct CAudioSignalProcessingModeArray *)&v56,
                                        (unsigned int)v72,
                                        v67);
          v15 = ConnectorFXModeEffectPKEY;
          if ( ConnectorFXModeEffectPKEY >= 0 )
          {
LABEL_26:
            v32 = 0;
            if ( v9 > 0 )
            {
              do
              {
                v38 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v57, v32);
                if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&v60, v38) == -1 )
                {
                  v51 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v57, v32);
                  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v61, v51) )
                  {
                    v15 = -2147024882;
                    v49 = 2147942414LL;
                    v50 = 2216LL;
                    goto LABEL_71;
                  }
                }
                ++v32;
              }
              while ( v32 < v9 );
              if ( (int)v62 > 0 )
              {
                v70[7] = 0LL;
                ConnectorFXModeEffectPKEY = SystemEffectDescriptor::CreateOverridingChain(
                                              v68,
                                              (struct CAudioSignalProcessingModeArray *)&v61,
                                              2,
                                              1,
                                              (__int64)v70);
                v15 = ConnectorFXModeEffectPKEY;
                if ( ConnectorFXModeEffectPKEY < 0 )
                {
                  v50 = 2223LL;
                  goto LABEL_70;
                }
              }
            }
            CoTaskMemFree(v25);
            CoTaskMemFree(v24);
            CoTaskMemFree(v8);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v61);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v56);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v60);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v57);
            return 0LL;
          }
          v50 = 2199LL;
        }
      }
    }
LABEL_70:
    v49 = (unsigned int)ConnectorFXModeEffectPKEY;
    goto LABEL_71;
  }
  v11 = (unsigned int)v5;
  if ( (_DWORD)v5 )
  {
    v11 = (unsigned int)(v5 - 1);
    if ( (_DWORD)v5 == 1 )
    {
      v12 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
      v13 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
    }
    else
    {
      if ( (_DWORD)v5 != 3 )
      {
        v47 = 2162LL;
        v15 = -2147023728;
        v48 = 2147943568LL;
        goto LABEL_58;
      }
      v12 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
      v13 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
    }
  }
  else
  {
    v12 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
    v13 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
  }
  *(GUID *)&v54[2] = v12;
  v54[6] = v13;
  APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                    (CEndpointCharacteristics *)v11,
                                    v10,
                                    (struct _tagpropertykey *)&v54[2],
                                    1,
                                    (struct CAudioSignalProcessingModeArray *)&v60);
  v15 = APOModesSupportedForStreaming;
  if ( APOModesSupportedForStreaming < 0 )
  {
    v48 = (unsigned int)APOModesSupportedForStreaming;
    v47 = 2163LL;
  }
  else
  {
    v16 = (unsigned int)v5;
    if ( (_DWORD)v5 )
    {
      v16 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 == 1 )
      {
        v17 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        v18 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        v17 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v18 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      }
    }
    else
    {
      v17 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
      v18 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
    }
    *(GUID *)&v54[2] = v17;
    v54[6] = v18;
    v19 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
            (CEndpointCharacteristics *)v16,
            *((struct IPropertyStore **)this + 7),
            (struct _tagpropertykey *)&v54[2],
            0,
            (struct CAudioSignalProcessingModeArray *)v57);
    v15 = v19;
    if ( v19 < 0 )
    {
      v48 = (unsigned int)v19;
      v47 = 2167LL;
    }
    else
    {
      if ( (int)v5 > 1 )
      {
        v21 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v22 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        v21 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
        v22 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
      }
      *(GUID *)&v54[2] = v21;
      v54[6] = v22;
      v23 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
              v20,
              *((struct IPropertyStore **)this + 7),
              (struct _tagpropertykey *)&v54[2],
              0,
              (struct CAudioSignalProcessingModeArray *)&v56);
      v15 = v23;
      if ( v23 >= 0 )
      {
        v9 = v58;
        v7 = v5;
        goto LABEL_18;
      }
      v48 = (unsigned int)v23;
      v47 = 2171LL;
    }
  }
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v47,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v48,
    v52);
LABEL_72:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v61);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v56);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v60);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v57);
  return v15;
}
