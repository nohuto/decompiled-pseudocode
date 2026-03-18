/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x1C00104F8
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0010498 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     wil_details_RecordUsageInPropertyCache @ 0x1C0010580 (wil_details_RecordUsageInPropertyCache.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v7; // rax
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+30h] [rbp-58h] BYREF
  int v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+48h] [rbp-40h] BYREF
  int v13; // [rsp+58h] [rbp-30h]

  v7 = wil_details_RecordUsageInPropertyCache((unsigned int)v10, (_DWORD)a1, a3, a4, 1);
  v8 = 0;
  v12 = *(_OWORD *)v7;
  v13 = *(_DWORD *)(v7 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a1, &v12);
    if ( (*a1 & 0x30) == 0x20 )
    {
      v10[0] = 0LL;
      v11 = 0;
      v10[1] = a3;
      g_wil_details_recordFeatureUsage(a2, 0LL, v10);
    }
  }
  LOBYTE(v8) = v13 == 0;
  return v8;
}
