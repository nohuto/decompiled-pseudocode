/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180014F74
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014F00 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4Rep.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180015020 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180015070 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v5; // rax
  struct wil_details_RecordUsageResult *v6; // r9
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+40h] [rbp-30h]
  __int128 v11; // [rsp+48h] [rbp-28h] BYREF
  int v12; // [rsp+58h] [rbp-18h]

  v5 = wil_details_RecordUsageInPropertyCache(v9, a1);
  v7 = 0;
  v11 = *(_OWORD *)v5;
  v12 = *(_DWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x9A0B4E,
        a1,
        (union wil_details_FeaturePropertyCache *)&v11,
        v6);
    else
      g_wil_details_recordFeatureUsage(0x9A0B4Eu, a1, (struct wil_details_RecordUsageResult *)&v11);
    if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
    {
      v9[0] = 0LL;
      v10 = 0;
      v9[1] = a3;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10095438LL, 0LL, v9);
    }
  }
  LOBYTE(v7) = v12 == 0;
  return v7;
}
