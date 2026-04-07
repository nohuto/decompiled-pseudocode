/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180033E64
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180033DF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180033F74 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+58h] [rbp-20h]

  v5 = wil_details_RecordUsageInPropertyCache(v8, a1);
  v6 = 0;
  v10 = *(_OWORD *)v5;
  v11 = *(_DWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(0xB3D7A1u, a1, (struct wil_details_RecordUsageResult *)&v10);
    if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
    {
      v8[0] = 0LL;
      v9 = 0;
      v8[1] = a3;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(11786145LL, 0LL, v8);
    }
  }
  LOBYTE(v6) = v11 == 0;
  return v6;
}
