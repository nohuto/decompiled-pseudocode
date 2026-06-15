/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E13C
 * Callers:
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18009E030 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180002CB0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000D2D0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002DB40 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180079C64 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180098F40 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18009991C (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z @ 0x18009BDBC (-DisconnectHelper@CPolicyConfig@@CAXPEAUIMMDevice@@@Z.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x18009ED34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x1800BC5EC (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1800BEE48 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
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
  int updated; // eax
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15[3]; // [rsp+38h] [rbp-38h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp-20h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int16 *v18; // [rsp+C8h] [rbp+58h] BYREF

  v15[1] = -2LL;
  pv = 0LL;
  v6 = 0;
  v14 = 0LL;
  v15[0] = 0LL;
  v7 = 0;
  v18 = 0LL;
  v8 = (struct IMMDevice *)*((_QWORD *)this + 2);
  v15[2] = (__int64)v8;
  ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->AddRef)(v8);
  EndpointId = CEndpointCharacteristics::GetEndpointId(this, &v18);
  if ( EndpointId < 0 )
    goto LABEL_24;
  EndpointId = (*(__int64 (__fastcall **)(CPolicyConfig *, unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyConfig
                                                                                                + 32LL))(
                 g_PolicyConfig,
                 v18,
                 0LL,
                 &pv);
  if ( EndpointId < 0 )
    goto LABEL_24;
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
  EndpointId = CPolicyConfig::GetProcessingPeriodInternal(this, 0, &v14, 0LL);
  if ( EndpointId < 0 )
    goto LABEL_24;
  EndpointId = ValidateUncompressedWaveFormatEx(a3);
  if ( EndpointId < 0 )
    goto LABEL_24;
  CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
    this,
    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
    &v16,
    0LL,
    0LL);
  v10 = v16;
  v11 = CPolicyConfig::ConfirmDeviceFormat(this, a3, &v16, a2, 0);
  EndpointId = v11;
  if ( v11 == -2004287480 )
  {
    CPolicyConfig::DisconnectHelper(v8);
    v7 = 1;
    EndpointId = CEndpointCharacteristics::TryAddFormat(this, a3);
    if ( EndpointId < 0 )
      goto LABEL_24;
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
LABEL_24:
    CEndpointCharacteristics::ClearMixFormatCache(this);
    if ( EndpointId < 0 )
      AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 3014, EndpointId);
    goto LABEL_26;
  }
  v6 = 1;
  EndpointId = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(this, 0);
  if ( EndpointId < 0 || (EndpointId = CPolicyConfig::DeriveAndCacheMixFormatsForConnector(this, 3u), EndpointId < 0) )
  {
LABEL_22:
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                this,
                0,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                (const struct tWAVEFORMATEX *)pv);
    if ( updated < 0 )
      AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetDeviceFormatSwAudioEngine", 3009, updated);
    goto LABEL_24;
  }
  if ( !v7 )
  {
    EndpointId = CPolicyConfig::SetProcessingPeriodInternal(this, v15);
    if ( EndpointId < 0 )
      goto LABEL_22;
    goto LABEL_16;
  }
LABEL_17:
  if ( a3 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      this,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
      &v16,
      0LL,
      0LL);
    EndpointId = CPolicyConfig::ConfirmDeviceFormat(this, a3, &v16, a2, 1);
    if ( EndpointId >= 0 )
      goto LABEL_26;
    CPolicyConfig::SetProcessingPeriodInternal(this, &v14);
  }
  if ( EndpointId < 0 )
  {
    if ( v6 )
      goto LABEL_22;
    goto LABEL_24;
  }
LABEL_26:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x12u,
      (__int64)&WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
      EndpointId);
  }
  if ( v8 )
    ((void (__fastcall *)(struct IMMDevice *))v8->lpVtbl->Release)(v8);
  CoTaskMemFree(v18);
  return (unsigned int)EndpointId;
}
