/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800BAE58
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800BAD78 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x180055480 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        volatile signed __int32 *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5)
{
  __int64 v8; // rax
  struct wil_details_RecordUsageResult *v9; // r9
  unsigned int v10; // ebx
  volatile unsigned __int32 v11; // edx
  _QWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+44h] [rbp-2Ch]
  __int128 v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]

  v8 = wil_details_RecordUsageInPropertyCache((__int64)v13, a1, a3, a4, a5);
  v10 = 0;
  v16 = *(_OWORD *)v8;
  v17 = *(_QWORD *)(v8 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)a2,
        (union wil_details_FeaturePropertyCache *)a1,
        (union wil_details_FeaturePropertyCache *)&v16,
        v9);
    else
      g_wil_details_recordFeatureUsage(
        a2,
        (union wil_details_FeaturePropertyCache *)a1,
        (struct wil_details_RecordUsageResult *)&v16);
    v11 = *a1;
    if ( (*a1 & 0x30) == 0x20 )
    {
      v14 = 0;
      v15 = (v11 >> 2) & 1;
      v13[0] = 0LL;
      v13[1] = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v13);
    }
  }
  LOBYTE(v10) = (_DWORD)v17 == 0;
  return v10;
}
