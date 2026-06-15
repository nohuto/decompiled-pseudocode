/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDFF8
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDE10 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180064B58 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180095AB0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8B74 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B94C8 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800BB6F4 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800BEC34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BF5F8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800ED3F8 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800ED620 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine(
        struct CEndpointCharacteristics *a1,
        __int32 a2,
        const struct tWAVEFORMATEX *a3)
{
  int v6; // r12d
  char v7; // r13
  struct IMMDevice *v8; // rbx
  int EndpointId; // edi
  struct _GUID v10; // xmm6
  int v11; // eax
  int v12; // eax
  int updated; // eax
  __int64 v15[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int16 *v18; // [rsp+C8h] [rbp+58h] BYREF

  v15[1] = -2LL;
  pv = 0LL;
  v6 = 0;
  v15[0] = 0LL;
  v7 = 0;
  v18 = 0LL;
  v8 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
  v15[2] = (__int64)v8;
  ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
  EndpointId = CEndpointCharacteristics::GetEndpointId(a1, &v18);
  if ( EndpointId < 0 )
    goto LABEL_23;
  EndpointId = (*(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyConfig
                                                                                                + 32LL))(
                 g_PolicyConfig,
                 v18,
                 0LL,
                 &pv);
  if ( EndpointId < 0 )
    goto LABEL_23;
  if ( !a3 )
  {
    EndpointId = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                   a1,
                   0,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                   0LL);
LABEL_16:
    CPolicyConfig::DisconnectHelper(v8);
    goto LABEL_17;
  }
  EndpointId = ValidateUncompressedWaveFormatEx(a3);
  if ( EndpointId < 0 )
    goto LABEL_23;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(a1, a2, &v16, 0LL, 0LL);
  v10 = v16;
  v11 = CPolicyConfig::ConfirmDeviceFormat(a1, a3, &v16, a2, 0);
  EndpointId = v11;
  if ( v11 == -2004287480 )
  {
    CPolicyConfig::DisconnectHelper(v8);
    v7 = 1;
    EndpointId = CEndpointCharacteristics::TryAddFormat(a1, a3);
    if ( EndpointId < 0 )
      goto LABEL_23;
    v16 = v10;
    v11 = CPolicyConfig::ConfirmDeviceFormat(a1, a3, &v16, a2, 0);
    EndpointId = v11;
  }
  if ( v11 < 0
    || (EndpointId = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                       a1,
                       0,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                       a3),
        EndpointId < 0) )
  {
LABEL_23:
    CEndpointCharacteristics::ClearMixFormatCache((__int64)a1, 0);
    if ( EndpointId < 0 )
      AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 3022, EndpointId);
    goto LABEL_25;
  }
  v6 = 1;
  EndpointId = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(a1, 0);
  if ( EndpointId < 0 )
    goto LABEL_21;
  v12 = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(a1, 3);
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 2968, v12);
  if ( !v7 )
  {
    EndpointId = CPolicyConfig::SetProcessingPeriodInternal(a1, v15);
    if ( EndpointId < 0 )
      goto LABEL_21;
    goto LABEL_16;
  }
LABEL_17:
  if ( a3 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(a1, a2, &v16, 0LL, 0LL);
    EndpointId = CPolicyConfig::ConfirmDeviceFormat(a1, a3, &v16, a2, 1);
  }
  if ( EndpointId < 0 )
  {
    if ( v6 )
    {
LABEL_21:
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                  a1,
                  0,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                  (const struct tWAVEFORMATEX *)pv);
      if ( updated < 0 )
        AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 3017, updated);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
LABEL_25:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
      (unsigned int)EndpointId);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  CoTaskMemFree(v18);
  return (unsigned int)EndpointId;
}
