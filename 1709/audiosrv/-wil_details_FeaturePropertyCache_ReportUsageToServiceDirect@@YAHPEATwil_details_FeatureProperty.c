/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180006E80
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180007208 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008D328 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180005FB0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180006F20 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rax
  struct wil_details_RecordUsageResult *v7; // r9
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+40h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-28h] BYREF
  int v13; // [rsp+58h] [rbp-18h]

  v6 = wil_details_RecordUsageInPropertyCache(v10, a1);
  v8 = 0;
  v12 = *(_OWORD *)v6;
  v13 = *(_DWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)a2,
        a1,
        (union wil_details_FeaturePropertyCache *)&v12,
        v7);
    else
      g_wil_details_recordFeatureUsage(a2, a1, (struct wil_details_RecordUsageResult *)&v12);
    if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
    {
      v10[0] = 0LL;
      v11 = 0;
      v10[1] = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v10);
    }
  }
  LOBYTE(v8) = v13 == 0;
  return v8;
}
