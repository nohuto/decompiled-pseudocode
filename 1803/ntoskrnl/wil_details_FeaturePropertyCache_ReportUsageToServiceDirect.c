/*
 * XREFs of wil_details_FeaturePropertyCache_ReportUsageToServiceDirect @ 0x140178894
 * Callers:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1401787F0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 * Callees:
 *     wil_details_RecordUsageInPropertyCache @ 0x140178914 (wil_details_RecordUsageInPropertyCache.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5)
{
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v11; // edx
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+44h] [rbp-2Ch]
  __int128 v15; // [rsp+48h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]

  v8 = wil_details_RecordUsageInPropertyCache((unsigned int)v12, (_DWORD)a1, a3, a4, a5);
  v9 = 0;
  v15 = *(_OWORD *)v8;
  v16 = *(_QWORD *)(v8 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(a2, a1, &v15);
    v11 = *a1;
    if ( (*a1 & 0x30) == 0x20 )
    {
      v13 = 0;
      v14 = (v11 >> 2) & 1;
      v12[0] = 0LL;
      v12[1] = a3;
      g_wil_details_recordFeatureUsage(a2, 0LL, v12);
    }
  }
  LOBYTE(v9) = (_DWORD)v16 == 0;
  return v9;
}
