/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C000BAD8
 * Callers:
 *     ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C00F1E3C (-BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x1C000BB54 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-48h] BYREF
  int v8; // [rsp+40h] [rbp-38h]
  __int128 v9; // [rsp+48h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-20h]

  v4 = wil_details_RecordUsageInPropertyCache(v7);
  v5 = 0;
  v9 = *(_OWORD *)v4;
  v10 = *(_DWORD *)(v4 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    g_wil_details_recordFeatureUsage(
      0x9A5847u,
      (union wil_details_FeaturePropertyCache *)&Feature_DisplayKernelAdvancedColorSupport__private_propertyCache,
      (struct wil_details_RecordUsageResult *)&v9);
    if ( (Feature_DisplayKernelAdvancedColorSupport__private_propertyCache & 0x30) == 0x20 )
    {
      v7[0] = 0LL;
      v8 = 0;
      v7[1] = a3;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(10115143LL, 0LL, v7);
    }
  }
  LOBYTE(v5) = v10 == 0;
  return v5;
}
