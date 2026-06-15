/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800336DC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x180041520 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800416A4 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x1800428E0 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180044920 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180046BC0 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(
        CEndpointCharacteristics *this,
        char a2)
{
  int v4; // r14d
  int v5; // r12d
  unsigned int v6; // edx
  const struct _GUID *v7; // r8
  int v8; // ebx
  int ConnectorSignalProcessingModes; // eax
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // r8d
  BOOL v13; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v14; // r14d
  GUID *v15; // rdx
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-E0h]
  unsigned int v19[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v22; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v23; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v26; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v27[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _GUID *v28; // [rsp+68h] [rbp-A0h] BYREF
  struct _GUID *v29; // [rsp+70h] [rbp-98h] BYREF
  struct _GUID *v30; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID *v31; // [rsp+80h] [rbp-88h] BYREF
  struct _GUID *v32; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID *v33; // [rsp+90h] [rbp-78h] BYREF
  struct _GUID *v34; // [rsp+98h] [rbp-70h] BYREF
  struct _tagpropertykey v35; // [rsp+A8h] [rbp-60h] BYREF
  struct _tagpropertykey v36; // [rsp+C8h] [rbp-40h] BYREF
  struct _tagpropertykey v37; // [rsp+E8h] [rbp-20h] BYREF
  struct _tagpropertykey v38; // [rsp+108h] [rbp+0h] BYREF
  PROPVARIANT pvar[4]; // [rsp+128h] [rbp+20h] BYREF
  struct _tagpropertykey v40; // [rsp+148h] [rbp+40h] BYREF
  struct _tagpropertykey v41; // [rsp+168h] [rbp+60h] BYREF
  struct _tagpropertykey v42; // [rsp+188h] [rbp+80h] BYREF
  struct _tagpropertykey v43; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _tagpropertykey v44; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v45; // [rsp+1E8h] [rbp+E0h]
  struct _tagpropertykey v46; // [rsp+1F8h] [rbp+F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]

  v45 = -2LL;
  pv = 0LL;
  v4 = 0;
  v5 = 0;
  v34 = 0LL;
  v26 = 0;
  v33 = 0LL;
  v27[0] = 0;
  v32 = 0LL;
  v21 = 0;
  v31 = 0LL;
  v22 = 0;
  v30 = 0LL;
  v23 = 0;
  v29 = 0LL;
  v24 = 0;
  v28 = 0LL;
  v25 = 0;
  memset(pvar, 0, 24);
  *((_DWORD *)this + 12) = 0;
  if ( GetHostConnectorSignalProcessingModes(*((struct IPropertyStore **)this + 4), v19, (struct _GUID **)&pv) >= 0
    && (v6 = v19[0]) != 0 )
  {
    *((_DWORD *)this + 10) = 1;
    v7 = (const struct _GUID *)pv;
  }
  else
  {
    *((_DWORD *)this + 10) = 0;
    v7 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v6 = 1;
  }
  v8 = CAudioSignalProcessingModeArray::AddMultiple((CEndpointCharacteristics *)((char *)this + 64), v6, v7);
  if ( v8 < 0 )
    goto LABEL_35;
  CoTaskMemFree(pv);
  v8 = 0;
  pv = 0LL;
  v19[0] = 0;
  v46.fmtid.Data1 = 590439624;
  *(_DWORD *)&v46.fmtid.Data2 = 1283267372;
  *(_DWORD *)v46.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v46.fmtid.Data4[4] = 1730509416;
  v46.pid = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 4),
                                     &v46,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     v19,
                                     (struct _GUID **)&pv);
  if ( ConnectorSignalProcessingModes >= 0 && v19[0] )
  {
    v8 = CAudioSignalProcessingModeArray::AddMultiple(
           (CEndpointCharacteristics *)((char *)this + 112),
           v19[0],
           (const struct _GUID *)pv);
    *((_DWORD *)this + 13) = 1;
    goto LABEL_44;
  }
  if ( ConnectorSignalProcessingModes != -2147023728 )
  {
    v8 = -2147418113;
LABEL_44:
    if ( v8 < 0 )
      goto LABEL_35;
    goto LABEL_8;
  }
  *((_DWORD *)this + 13) = 0;
LABEL_8:
  CoTaskMemFree(pv);
  pv = 0LL;
  v10 = 0;
  v19[0] = 0;
  v11 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 11) = v11;
  if ( v11 )
  {
    v46.fmtid.Data1 = 590439624;
    *(_DWORD *)&v46.fmtid.Data2 = 1283267372;
    *(_DWORD *)v46.fmtid.Data4 = 1907779772;
    *(_DWORD *)&v46.fmtid.Data4[4] = 1730509416;
    v46.pid = 1;
    v8 = GetConnectorSignalProcessingModes(
           *((struct IPropertyStore **)this + 4),
           &v46,
           &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
           v19,
           (struct _GUID **)&pv);
    v10 = v19[0];
    if ( v8 >= 0 && v19[0] )
    {
      v8 = CAudioSignalProcessingModeArray::AddMultiple(
             (CEndpointCharacteristics *)((char *)this + 80),
             v19[0],
             (const struct _GUID *)pv);
      v10 = v19[0];
    }
    else if ( v8 == -2147023728 )
    {
      v8 = 0;
    }
  }
  if ( v8 >= 0 )
  {
    if ( !v10 )
      v8 = CAudioSignalProcessingModeArray::AddMultiple(
             (CEndpointCharacteristics *)((char *)this + 80),
             1u,
             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    if ( v8 >= 0 )
    {
      v46 = PKEY_CompositeFX_StreamEffectClsid;
      v40 = PKEY_FX_StreamEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v40, &v46, &v21, &v32);
      v41 = PKEY_CompositeFX_ModeEffectClsid;
      v42 = PKEY_FX_ModeEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v42, &v41, &v22, &v31);
      v43 = PKEY_CompositeFX_EndpointEffectClsid;
      v44 = PKEY_FX_EndpointEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v44, &v43, &v23, &v30);
      v35 = PKEY_CompositeFX_Offload_StreamEffectClsid;
      v36 = PKEY_FX_Offload_StreamEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v36, &v35, &v24, &v29);
      v37 = PKEY_CompositeFX_Offload_ModeEffectClsid;
      v38 = PKEY_FX_Offload_ModeEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v38, &v37, &v25, &v28);
      if ( v21 || v22 || v23 || v24 || v25 )
        v4 = 1;
      memset(&v38, 0, sizeof(v38));
      v37 = PKEY_FX_PreMixEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v37, &v38, &v26, &v34);
      memset(&v36, 0, sizeof(v36));
      v35 = PKEY_FX_PostMixEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v35, &v36, v27, &v33);
      if ( v26 == 1 || v27[0] == 1 )
        v5 = 1;
      v13 = *((_DWORD *)this + 10) && (v4 || !v5);
      *((_DWORD *)this + 10) = v13;
      *((_QWORD *)this + 172) = 0LL;
      *((_QWORD *)this + 173) = 0LL;
      v14 = eHostProcessConnector;
      while ( 1 )
      {
        if ( v14 != eLoopbackConnector )
        {
          v8 = CEndpointCharacteristics::FixupProcessingModeSupport(this, v14, v12, v5);
          if ( v8 < 0 )
            break;
        }
        if ( (unsigned int)++v14 >= eConnectorCount )
        {
          if ( a2 )
          {
            v8 = CEndpointCharacteristics::AddOsProcessingModeSupport(this);
            if ( v8 < 0 )
              break;
          }
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               (__int64 *)this + 8,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
          {
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                 (__int64 *)this + 8,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
              v15 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                              (__int64)this + 64,
                              0);
            else
              v15 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          }
          v46.fmtid = *v15;
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                               (__int64)this + 128,
                               &v46) )
          {
            v46.fmtid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                 (__int64)this + 608,
                                 &v46) )
              break;
            v8 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1FB,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              (const char *)0x8007000ELL,
              v17);
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x523,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x8007000ELL,
              v18);
          }
          else
          {
            v8 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x520,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x8007000ELL,
              v17);
          }
          goto LABEL_36;
        }
      }
    }
  }
LABEL_35:
  PropVariantClear(pvar);
  CoTaskMemFree(pv);
LABEL_36:
  CoTaskMemFree(v28);
  CoTaskMemFree(v29);
  CoTaskMemFree(v30);
  CoTaskMemFree(v31);
  CoTaskMemFree(v32);
  CoTaskMemFree(v33);
  CoTaskMemFree(v34);
  return (unsigned int)v8;
}
