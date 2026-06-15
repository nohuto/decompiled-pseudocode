/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087E20
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087CF0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z @ 0x180036398 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18005A438 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18005A44C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180080228 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180081300 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x1800837A8 (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x180088AB4 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800B8308 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::SetDeviceFormatSwAudioEngine(
        struct CEndpointCharacteristics *this,
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
  v8 = (struct IMMDevice *)*((_QWORD *)this + 2);
  v15[2] = (__int64)v8;
  ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
  EndpointId = CEndpointCharacteristics::GetEndpointId(this, &v18);
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
                   this,
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
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, &v16, 0LL, 0LL);
  v10 = v16;
  v11 = CPolicyConfig::ConfirmDeviceFormat(this, a3, &v16, a2, 0);
  EndpointId = v11;
  if ( v11 == -2004287480 )
  {
    CPolicyConfig::DisconnectHelper(v8);
    v7 = 1;
    EndpointId = CEndpointCharacteristics::TryAddFormat(this, a3);
    if ( EndpointId < 0 )
      goto LABEL_23;
    v16 = v10;
    v11 = CPolicyConfig::ConfirmDeviceFormat(this, a3, &v16, a2, 0);
    EndpointId = v11;
  }
  if ( v11 < 0
    || (EndpointId = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                       this,
                       0,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                       a3),
        EndpointId < 0) )
  {
LABEL_23:
    CEndpointCharacteristics::ClearMixFormatCache((struct IPropertyStore **)this, 0);
    if ( EndpointId < 0 )
      AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 3014, EndpointId);
    goto LABEL_25;
  }
  v6 = 1;
  EndpointId = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(this, eHostProcessConnector);
  if ( EndpointId < 0 )
    goto LABEL_21;
  v12 = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(this, eKeywordDetectorConnector);
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 2960, v12);
  if ( !v7 )
  {
    EndpointId = CPolicyConfig::SetProcessingPeriodInternal(this, v15);
    if ( EndpointId < 0 )
      goto LABEL_21;
    goto LABEL_16;
  }
LABEL_17:
  if ( a3 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(this, a2, &v16, 0LL, 0LL);
    EndpointId = CPolicyConfig::ConfirmDeviceFormat(this, a3, &v16, a2, 1);
  }
  if ( EndpointId < 0 )
  {
    if ( v6 )
    {
LABEL_21:
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                  this,
                  0,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                  (const struct tWAVEFORMATEX *)pv);
      if ( updated < 0 )
        AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 3009, updated);
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
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
      EndpointId);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  CoTaskMemFree(v18);
  return (unsigned int)EndpointId;
}
