/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00DA71C
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00DA6BC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C00DA954 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  _QWORD v9[2]; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+40h] [rbp-48h]
  __int128 v11; // [rsp+48h] [rbp-40h] BYREF
  int v12; // [rsp+58h] [rbp-30h]

  v6 = wil_details_RecordUsageInPropertyCache(v9, a1);
  v7 = 0;
  v11 = *(_OWORD *)v6;
  v12 = *(_DWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a1, (struct wil_details_RecordUsageResult *)&v11);
    if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
    {
      v9[0] = 0LL;
      v10 = 0;
      v9[1] = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v9);
    }
  }
  LOBYTE(v7) = v12 == 0;
  return v7;
}
