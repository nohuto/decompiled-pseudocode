/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180030880
 * Callers:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Variant_HamOptIn@@W4VariantReportingKind@2@_K@Z @ 0x180030714 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Varian.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180030818 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180030930 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18003099C (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
        union wil_details_FeaturePropertyCache *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rax
  struct wil_details_RecordUsageResult *v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // edx
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+44h] [rbp-2Ch]
  __int128 v14; // [rsp+48h] [rbp-28h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]

  v6 = wil_details_RecordUsageInPropertyCache(v11, a1);
  v8 = 0;
  v14 = *(_OWORD *)v6;
  v15 = *(_QWORD *)(v6 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)a2,
        a1,
        (union wil_details_FeaturePropertyCache *)&v14,
        v7);
    else
      g_wil_details_recordFeatureUsage(a2, a1, (struct wil_details_RecordUsageResult *)&v14);
    v9 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x30) == 0x20 )
    {
      v12 = 0;
      v13 = (v9 >> 2) & 1;
      v11[0] = 0LL;
      v11[1] = a3;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(a2, 0LL, v11);
    }
  }
  LOBYTE(v8) = (_DWORD)v15 == 0;
  return v8;
}
