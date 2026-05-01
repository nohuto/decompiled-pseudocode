/*
 * XREFs of ?IsWideAtStartupDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180089D3C
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_053d61a7963efcca289c130717ec5f8b__&___ptr64_::Run @ 0x180089D10 (wil--details--functor_wrapper_void__lambda_053d61a7963efcca289c130717ec5f8b__-___ptr64_--Run.c)
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x1800616F0 (-GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180086490 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WideQFZero@@@wil@@CA-AW4wil_.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x1800906D4 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CortanaFlightingHelpers::IsWideAtStartupDeltaEnabled(CortanaFlightingHelpers *this)
{
  __int64 v1; // rax
  CortanaFeatureConfiguration *v2; // rcx
  struct wil_details_RecordUsageResult *v3; // r9
  CortanaFeatureConfiguration *v4; // rcx
  CortanaFeatureConfiguration *v5; // rcx
  struct CortanaFeatureConfiguration::FeatureBehaviorMap *SharedFeatureTable; // rax
  int v7; // r10d
  int v8; // r11d
  int v10; // [rsp+50h] [rbp-9h] BYREF
  __int16 v11; // [rsp+54h] [rbp-5h]
  int v12; // [rsp+58h] [rbp-1h] BYREF
  __int16 v13; // [rsp+5Ch] [rbp+3h]
  _BYTE v14[24]; // [rsp+60h] [rbp+7h] BYREF
  _QWORD v15[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  __int128 v18; // [rsp+90h] [rbp+37h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+47h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetCachedFeatureEnabledState((__int64)this);
  LOBYTE(v11) = 3;
  v13 = v11;
  v12 = 0;
  v10 = 3;
  v1 = wil_details_RecordUsageInPropertyCache(
         (__int64)v14,
         (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
         2,
         0,
         1u);
  v18 = *(_OWORD *)v1;
  v19 = *(_QWORD *)(v1 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xB188BC,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v18,
        v3);
    else
      g_wil_details_recordFeatureUsage(
        0xB188BCu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v18);
    v2 = (CortanaFeatureConfiguration *)`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v16 = 0;
      v17 = (`wil::Feature<__WilFeatureTraits_Feature_WideQFZero>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      v15[0] = 0LL;
      v15[1] = 2LL;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(11634876LL, 0LL, v15);
    }
  }
  if ( !(_DWORD)v19 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xB188BCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v12,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v10,
      0LL,
      0,
      1uLL);
  v10 = 0;
  CortanaFeatureConfiguration::getSharedFeatureTable(v2);
  CortanaFeatureConfiguration::getSharedFeatureTable(v4);
  SharedFeatureTable = CortanaFeatureConfiguration::getSharedFeatureTable(v5);
  CortanaFeatureConfiguration::GetDWORDCore(*((WCHAR **)SharedFeatureTable + 84), v7, v8, &v10);
  return v10 != 0;
}
