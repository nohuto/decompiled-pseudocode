/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x140234964
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1402348EC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     wil_details_RecordUsageInPropertyCache @ 0x140234B2C (wil_details_RecordUsageInPropertyCache.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  _QWORD v8[2]; // [rsp+30h] [rbp-48h] BYREF
  int v9; // [rsp+40h] [rbp-38h]
  __int128 v10; // [rsp+48h] [rbp-30h] BYREF
  int v11; // [rsp+58h] [rbp-20h]

  v5 = wil_details_RecordUsageInPropertyCache((unsigned int)v8, a2, a3, a4, 1);
  v6 = 0;
  v10 = *(_OWORD *)v5;
  v11 = *(_DWORD *)(v5 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(9304334LL, &Feature_PowerButtonBugcheck__private_propertyCache, &v10);
    if ( (Feature_PowerButtonBugcheck__private_propertyCache & 0x30) == 0x20 )
    {
      v8[0] = 0LL;
      v9 = 0;
      v8[1] = a3;
      g_wil_details_recordFeatureUsage(9304334LL, 0LL, v8);
    }
  }
  LOBYTE(v6) = v11 == 0;
  return v6;
}
