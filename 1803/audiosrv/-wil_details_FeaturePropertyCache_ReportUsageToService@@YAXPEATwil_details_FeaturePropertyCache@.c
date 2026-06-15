/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180015804
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800032C4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18004FD1C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180015A20 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180015A84 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rax
  struct wil_details_RecordUsageResult *v11; // r9
  unsigned int v12; // ecx
  _BYTE v13[24]; // [rsp+50h] [rbp-39h] BYREF
  _QWORD v14[2]; // [rsp+68h] [rbp-21h] BYREF
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  __int128 v17; // [rsp+80h] [rbp-9h] BYREF
  __int64 v18; // [rsp+90h] [rbp+7h]

  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v9 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v9 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v9 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v9 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v9 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v9 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v9 = 255;
        else
          v9 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    v10 = wil_details_RecordUsageInPropertyCache(v13, a1, v9);
    v17 = *(_OWORD *)v10;
    v18 = *(_QWORD *)(v10 + 16);
    if ( g_wil_details_recordFeatureUsage )
    {
      if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
        wil::details::RecordFeatureUsageCallback(
          (wil::details *)a2,
          a1,
          (union wil_details_FeaturePropertyCache *)&v17,
          v11);
      else
        g_wil_details_recordFeatureUsage(a2, a1, (struct wil_details_RecordUsageResult *)&v17);
      v12 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
      {
        v15 = 0;
        v16 = (v12 >> 2) & 1;
        v14[0] = 0LL;
        v14[1] = v9;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v14);
      }
    }
    if ( !(_DWORD)v18 && g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    if ( g_wil_details_queueBackgroundSRUMUsageReporting && (v9 - 100 <= 0x31 || !v9) )
      g_wil_details_queueBackgroundSRUMUsageReporting(a2, v9, 1u);
  }
}
