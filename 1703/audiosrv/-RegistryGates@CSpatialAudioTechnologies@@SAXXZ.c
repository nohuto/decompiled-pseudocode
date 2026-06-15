/*
 * XREFs of ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18003BCD0 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003C980 (-IsTechnologySupported@CSpatialAudioDolbyStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003D670 (-IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_00.c)
 *     ?IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003D960 (-IsTechnologySupported@CSpatialAudioDolbyHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x1800286E0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180029074 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800470F0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllo.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180047198 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllow.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::RegistryGates(__int64 a1, __int64 a2, __int64 a3, signed __int32 a4)
{
  __int64 v4; // rax
  struct wil_details_RecordUsageResult *v5; // r9
  __int64 v6; // rax
  struct wil_details_RecordUsageResult *v7; // r9
  int v8; // [rsp+58h] [rbp-9h] BYREF
  int v9; // [rsp+60h] [rbp-1h] BYREF
  __int16 v10; // [rsp+64h] [rbp+3h]
  _BYTE v11[24]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v12; // [rsp+80h] [rbp+1Fh] BYREF
  int v13; // [rsp+90h] [rbp+2Fh]
  __int128 v14; // [rsp+98h] [rbp+37h] BYREF
  int v15; // [rsp+A8h] [rbp+47h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetCachedFeatureEnabledState();
  v8 = 3;
  BYTE4(v12) = 0;
  LODWORD(v12) = 0;
  v9 = 0;
  v10 = WORD2(v12);
  v4 = wil_details_RecordUsageInPropertyCache(
         (__int64)v11,
         (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
         6,
         a4,
         1u);
  v14 = *(_OWORD *)v4;
  v15 = *(_DWORD *)(v4 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x98C3BD,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v14,
        v5);
    else
      g_wil_details_recordFeatureUsage(
        0x98C3BDu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v14);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      *(_QWORD *)&v12 = 0LL;
      v13 = 0;
      *((_QWORD *)&v12 + 1) = 6LL;
      ((void (__fastcall *)(__int64, _QWORD, __int128 *))g_wil_details_recordFeatureUsage)(10011581LL, 0LL, &v12);
    }
  }
  if ( !v15 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x98C3BDu,
      (const struct FEATURE_LOGGED_TRAITS *)&v9,
      0LL,
      0,
      (const enum wil_ReportingKind *)&v8,
      0LL,
      0,
      1uLL);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetCachedFeatureEnabledState();
  BYTE4(v12) = 0;
  v10 = WORD2(v12);
  LODWORD(v12) = 0;
  v9 = 0;
  v8 = 3;
  v6 = wil_details_RecordUsageInPropertyCache(
         (__int64)v11,
         (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data,
         6,
         (signed __int32)v5,
         1u);
  v12 = *(_OWORD *)v6;
  v13 = *(_DWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x9C34DB,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v12,
        v7);
    else
      g_wil_details_recordFeatureUsage(
        0x9C34DBu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v12);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      *(_QWORD *)&v14 = 0LL;
      v15 = 0;
      *((_QWORD *)&v14 + 1) = 6LL;
      ((void (__fastcall *)(__int64, _QWORD, __int128 *))g_wil_details_recordFeatureUsage)(10237147LL, 0LL, &v14);
    }
  }
  if ( !v13 )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x9C34DBu,
        (const struct FEATURE_LOGGED_TRAITS *)&v9,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v8,
        0LL,
        0,
        1uLL);
  }
}
