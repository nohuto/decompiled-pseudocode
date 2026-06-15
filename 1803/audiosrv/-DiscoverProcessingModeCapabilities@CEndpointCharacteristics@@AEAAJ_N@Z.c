/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800521D4
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180017ECC (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x1800507C8 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800508E0 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800511A4 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180051604 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x1800529C4 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x180053194 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800536D0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180053910 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180053A28 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180053F00 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(
        CEndpointCharacteristics *this,
        char a2)
{
  int v4; // r15d
  int HostConnectorSignalProcessingModes; // r14d
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  void *v8; // rcx
  unsigned int v9; // edx
  char *v10; // r12
  int v11; // eax
  int ConnectorSignalProcessingModes; // ebx
  __int64 v13; // rsi
  _QWORD *v14; // r14
  void *v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rsi
  _QWORD *v19; // r14
  void *v20; // rcx
  unsigned int v21; // eax
  int v22; // eax
  _QWORD *v23; // rbx
  struct _GUID *v24; // rcx
  struct _GUID *v25; // rsi
  _QWORD *v26; // rbx
  void *v27; // rcx
  struct _GUID *v28; // rsi
  _QWORD *v29; // rbx
  void *v30; // rcx
  struct _GUID *v31; // rsi
  _QWORD *v32; // rbx
  void *v33; // rcx
  struct _GUID *v34; // rsi
  _QWORD *v35; // rbx
  void *v36; // rcx
  struct _GUID *v37; // rsi
  int v38; // r14d
  _QWORD *v39; // rbx
  void *v40; // rcx
  struct _GUID *v41; // rsi
  void *v42; // rcx
  unsigned int v43; // r8d
  _QWORD *v44; // rbx
  struct _GUID *v45; // rsi
  int v46; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 i; // esi
  int APOModesSupportedForStreaming; // eax
  struct IPropertyStore *v49; // rdx
  GUID *v50; // rdx
  unsigned __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r9
  int v59; // [rsp+28h] [rbp-E0h]
  int v60; // [rsp+28h] [rbp-E0h]
  unsigned int v61[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *v62; // [rsp+40h] [rbp-C8h]
  struct _GUID *v63; // [rsp+48h] [rbp-C0h] BYREF
  char v64; // [rsp+50h] [rbp-B8h]
  struct _tagpropertykey v65; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v66[2]; // [rsp+78h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-88h] BYREF
  struct _tagpropertykey v68; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v69; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v70; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v71; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID v72; // [rsp+B8h] [rbp-50h] BYREF
  LPVOID v73; // [rsp+C0h] [rbp-48h] BYREF
  LPVOID v74; // [rsp+C8h] [rbp-40h] BYREF
  LPVOID v75; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v76; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v77; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v78[2]; // [rsp+E8h] [rbp-20h] BYREF
  struct _tagpropertykey v79; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v78[1] = (LPVOID)-2LL;
  v4 = 0;
  *((_DWORD *)this + 12) = 0;
  pv = 0LL;
  *(_QWORD *)&v65.fmtid.Data1 = &pv;
  *(_QWORD *)v65.fmtid.Data4 = 0LL;
  LOBYTE(v65.pid) = 1;
  HostConnectorSignalProcessingModes = GetHostConnectorSignalProcessingModes(
                                         *((struct IPropertyStore **)this + 4),
                                         v61,
                                         (struct _GUID **)v65.fmtid.Data4);
  if ( LOBYTE(v65.pid) )
  {
    v6 = *(_QWORD *)v65.fmtid.Data4;
    v7 = *(_QWORD **)&v65.fmtid.Data1;
    v8 = **(void ***)&v65.fmtid.Data1;
    if ( *(_QWORD *)v65.fmtid.Data4 != **(_QWORD **)&v65.fmtid.Data1 )
    {
      if ( v8 )
        CoTaskMemFree(v8);
      *v7 = v6;
    }
  }
  if ( HostConnectorSignalProcessingModes >= 0 )
  {
    v9 = v61[0];
    if ( v61[0] )
    {
      *((_DWORD *)this + 10) = 1;
      v10 = (char *)this + 64;
      v11 = CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + 64),
              v9,
              (const struct _GUID *)pv);
      ConnectorSignalProcessingModes = v11;
      if ( v11 >= 0 )
        goto LABEL_9;
      v52 = (unsigned int)v11;
      v53 = 1165LL;
LABEL_136:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v53,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v52,
        v59);
      goto LABEL_81;
    }
  }
  *((_DWORD *)this + 10) = 0;
  v10 = (char *)this + 64;
  v54 = CAudioSignalProcessingModeArray::AddMultiple(
          (CEndpointCharacteristics *)((char *)this + 64),
          1u,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  ConnectorSignalProcessingModes = v54;
  if ( v54 < 0 )
  {
    v52 = (unsigned int)v54;
    v53 = 1170LL;
    goto LABEL_136;
  }
LABEL_9:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v61[0] = 0;
  v79.fmtid.Data1 = 590439624;
  *(_DWORD *)&v79.fmtid.Data2 = 1283267372;
  *(_DWORD *)v79.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v79.fmtid.Data4[4] = 1730509416;
  v79.pid = 1;
  *(_QWORD *)&v65.fmtid.Data1 = &pv;
  *(_QWORD *)v65.fmtid.Data4 = 0LL;
  LOBYTE(v65.pid) = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 4),
                                     &v79,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     v61,
                                     (struct _GUID **)v65.fmtid.Data4);
  if ( LOBYTE(v65.pid) )
  {
    v13 = *(_QWORD *)v65.fmtid.Data4;
    v14 = *(_QWORD **)&v65.fmtid.Data1;
    v15 = **(void ***)&v65.fmtid.Data1;
    if ( *(_QWORD *)v65.fmtid.Data4 != **(_QWORD **)&v65.fmtid.Data1 )
    {
      if ( v15 )
        CoTaskMemFree(v15);
      *v14 = v13;
    }
  }
  if ( ConnectorSignalProcessingModes >= 0 && v61[0] )
  {
    v55 = CAudioSignalProcessingModeArray::AddMultiple(
            (CEndpointCharacteristics *)((char *)this + 112),
            v61[0],
            (const struct _GUID *)pv);
    ConnectorSignalProcessingModes = v55;
    if ( v55 < 0 )
    {
      v52 = (unsigned int)v55;
      v53 = 1183LL;
      goto LABEL_136;
    }
    v16 = 1;
  }
  else
  {
    if ( ConnectorSignalProcessingModes != -2147023728 )
    {
      if ( ConnectorSignalProcessingModes >= 0 )
        goto LABEL_81;
      v53 = 1192LL;
      goto LABEL_135;
    }
    v16 = 0;
  }
  *((_DWORD *)this + 13) = v16;
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v61[0] = 0;
  v17 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 11) = v17;
  if ( v17 )
  {
    *(_QWORD *)&v65.fmtid.Data1 = &pv;
    *(_QWORD *)v65.fmtid.Data4 = 0LL;
    LOBYTE(v65.pid) = 1;
    ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                       *((struct IPropertyStore **)this + 4),
                                       &v79,
                                       &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                       v61,
                                       (struct _GUID **)v65.fmtid.Data4);
    if ( LOBYTE(v65.pid) )
    {
      v18 = *(_QWORD *)v65.fmtid.Data4;
      v19 = *(_QWORD **)&v65.fmtid.Data1;
      v20 = **(void ***)&v65.fmtid.Data1;
      if ( *(_QWORD *)v65.fmtid.Data4 != **(_QWORD **)&v65.fmtid.Data1 )
      {
        if ( v20 )
          CoTaskMemFree(v20);
        *v19 = v18;
      }
    }
    v21 = v61[0];
    if ( ConnectorSignalProcessingModes >= 0 && v61[0] )
    {
      v56 = CAudioSignalProcessingModeArray::AddMultiple(
              (CEndpointCharacteristics *)((char *)this + 80),
              v61[0],
              (const struct _GUID *)pv);
      ConnectorSignalProcessingModes = v56;
      if ( v56 < 0 )
      {
        v52 = (unsigned int)v56;
        v53 = 1206LL;
        goto LABEL_136;
      }
      v21 = v61[0];
LABEL_23:
      if ( v21 )
        goto LABEL_25;
      goto LABEL_24;
    }
    if ( ConnectorSignalProcessingModes == -2147023728 )
      goto LABEL_23;
    if ( ConnectorSignalProcessingModes >= 0 )
      goto LABEL_81;
    v53 = 1210LL;
LABEL_135:
    v52 = (unsigned int)ConnectorSignalProcessingModes;
    goto LABEL_136;
  }
LABEL_24:
  v22 = CAudioSignalProcessingModeArray::AddMultiple(
          (CEndpointCharacteristics *)((char *)this + 80),
          1u,
          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  ConnectorSignalProcessingModes = v22;
  if ( v22 < 0 )
  {
    v52 = (unsigned int)v22;
    v53 = 1217LL;
    goto LABEL_136;
  }
LABEL_25:
  v78[0] = 0LL;
  v69 = 0;
  v77 = 0LL;
  v70 = 0;
  v76 = 0LL;
  v71 = 0;
  v62 = v78;
  v63 = 0LL;
  v64 = 1;
  v68 = PKEY_CompositeFX_StreamEffectClsid;
  v65 = PKEY_FX_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v65, &v68, &v69, &v63);
  if ( v64 )
  {
    v23 = v62;
    v24 = (struct _GUID *)*v62;
    v25 = v63;
    if ( v63 != *v62 )
    {
      if ( v24 )
        CoTaskMemFree(v24);
      *v23 = v25;
    }
  }
  v62 = &v77;
  v63 = 0LL;
  v64 = 1;
  v65 = PKEY_CompositeFX_ModeEffectClsid;
  v68 = PKEY_FX_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v65, &v70, &v63);
  if ( v64 )
  {
    v26 = v62;
    v27 = *v62;
    v28 = v63;
    if ( v63 != *v62 )
    {
      if ( v27 )
        CoTaskMemFree(v27);
      *v26 = v28;
    }
  }
  v62 = &v76;
  v63 = 0LL;
  v64 = 1;
  v65 = PKEY_CompositeFX_EndpointEffectClsid;
  v68 = PKEY_FX_EndpointEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v65, &v71, &v63);
  if ( v64 )
  {
    v29 = v62;
    v30 = *v62;
    v31 = v63;
    if ( v63 != *v62 )
    {
      if ( v30 )
        CoTaskMemFree(v30);
      *v29 = v31;
    }
  }
  v75 = 0LL;
  v66[0] = 0;
  v74 = 0LL;
  v66[1] = 0;
  v62 = &v75;
  v63 = 0LL;
  v64 = 1;
  v65 = PKEY_CompositeFX_Offload_StreamEffectClsid;
  v68 = PKEY_FX_Offload_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v65, v66, &v63);
  if ( v64 )
  {
    v32 = v62;
    v33 = *v62;
    v34 = v63;
    if ( v63 != *v62 )
    {
      if ( v33 )
        CoTaskMemFree(v33);
      *v32 = v34;
    }
  }
  v62 = &v74;
  v63 = 0LL;
  v64 = 1;
  v65 = PKEY_CompositeFX_Offload_ModeEffectClsid;
  v68 = PKEY_FX_Offload_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v65, &v66[1], &v63);
  if ( v64 )
  {
    v35 = v62;
    v36 = *v62;
    v37 = v63;
    if ( v63 != *v62 )
    {
      if ( v36 )
        CoTaskMemFree(v36);
      *v35 = v37;
    }
  }
  if ( v69 || v70 || v71 || v66[0] || v66[1] )
    v4 = 1;
  v38 = 0;
  v73 = 0LL;
  v66[1] = 0;
  v72 = 0LL;
  v66[0] = 0;
  v62 = &v73;
  v63 = 0LL;
  v64 = 1;
  memset(&v65, 0, sizeof(v65));
  v68 = PKEY_FX_PreMixEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v65, &v66[1], &v63);
  if ( v64 )
  {
    v39 = v62;
    v40 = *v62;
    v41 = v63;
    if ( v63 != *v62 )
    {
      if ( v40 )
        CoTaskMemFree(v40);
      *v39 = v41;
    }
  }
  v62 = &v72;
  v63 = 0LL;
  v64 = 1;
  memset(&v65, 0, sizeof(v65));
  v68 = PKEY_FX_PostMixEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v65, v66, &v63);
  if ( v64 )
  {
    v44 = v62;
    v42 = *v62;
    v45 = v63;
    if ( v63 != *v62 )
    {
      if ( v42 )
        CoTaskMemFree(v42);
      *v44 = v45;
    }
  }
  v46 = 1;
  if ( v66[1] == 1 || v66[0] == 1 )
    v38 = 1;
  if ( !*((_DWORD *)this + 10) || !v4 && v38 )
    v46 = 0;
  *((_DWORD *)this + 10) = v46;
  *((_QWORD *)this + 173) = 0LL;
  *((_QWORD *)this + 174) = 0LL;
  for ( i = eHostProcessConnector; (unsigned int)i < eConnectorCount; ++i )
  {
    if ( i != eLoopbackConnector )
    {
      APOModesSupportedForStreaming = CEndpointCharacteristics::FixupProcessingModeSupport(this, i, v43, v38);
      ConnectorSignalProcessingModes = APOModesSupportedForStreaming;
      if ( APOModesSupportedForStreaming < 0 )
      {
        v57 = 1271LL;
        goto LABEL_131;
      }
    }
  }
  v49 = (struct IPropertyStore *)*((_QWORD *)this + 7);
  if ( v49
    && (v65 = PKEY_APO_SWFallback_ProcessingModes,
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          (CEndpointCharacteristics *)v42,
                                          v49,
                                          &v65,
                                          0,
                                          (CEndpointCharacteristics *)((char *)this + 1560)),
        ConnectorSignalProcessingModes = APOModesSupportedForStreaming,
        APOModesSupportedForStreaming < 0) )
  {
    v57 = 1277LL;
  }
  else if ( a2
         && (APOModesSupportedForStreaming = CEndpointCharacteristics::AddOsProcessingModeSupport(this),
             ConnectorSignalProcessingModes = APOModesSupportedForStreaming,
             APOModesSupportedForStreaming < 0) )
  {
    v57 = 1283LL;
  }
  else
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v10,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v10,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        v50 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)v10, 0);
      else
        v50 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    v68.fmtid = *v50;
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 128, &v68) )
    {
      ConnectorSignalProcessingModes = -2147024882;
      v58 = 2147942414LL;
      v57 = 1295LL;
      goto LABEL_132;
    }
    v68.fmtid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    APOModesSupportedForStreaming = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(
                                      (CEndpointCharacteristics *)((char *)this + 616),
                                      &v68.fmtid);
    ConnectorSignalProcessingModes = APOModesSupportedForStreaming;
    if ( APOModesSupportedForStreaming >= 0 )
    {
      ConnectorSignalProcessingModes = 0;
      goto LABEL_67;
    }
    v57 = 1298LL;
  }
LABEL_131:
  v58 = (unsigned int)APOModesSupportedForStreaming;
LABEL_132:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v58,
    v60);
LABEL_67:
  if ( v72 )
    CoTaskMemFree(v72);
  if ( v73 )
    CoTaskMemFree(v73);
  if ( v74 )
    CoTaskMemFree(v74);
  if ( v75 )
    CoTaskMemFree(v75);
  if ( v76 )
    CoTaskMemFree(v76);
  if ( v77 )
    CoTaskMemFree(v77);
  if ( v78[0] )
    CoTaskMemFree(v78[0]);
LABEL_81:
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)ConnectorSignalProcessingModes;
}
