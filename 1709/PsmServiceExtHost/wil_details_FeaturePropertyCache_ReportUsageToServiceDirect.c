/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x18001EBA4
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x18001EB60 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     wil_details_RecordUsageInPropertyCache @ 0x18001EC18 (wil_details_RecordUsageInPropertyCache.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
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
    g_wil_details_recordFeatureUsage(10956236LL, &Feature_HamOptIn__private_propertyCache, &v10);
    if ( (Feature_HamOptIn__private_propertyCache & 0x30) == 0x20 )
    {
      v8[0] = 0LL;
      v9 = 0;
      v8[1] = a3;
      g_wil_details_recordFeatureUsage(10956236LL, 0LL, v8);
    }
  }
  LOBYTE(v6) = v11 == 0;
  return v6;
}
