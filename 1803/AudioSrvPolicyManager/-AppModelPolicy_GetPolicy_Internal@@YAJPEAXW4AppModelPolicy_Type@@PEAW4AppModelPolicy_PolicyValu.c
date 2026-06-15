/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x18002000C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001FA44 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SuspendPerAppBroker@@@wil@@C.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18001FDA4 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  _QWORD *v5; // rdi
  __int64 v9; // rdx
  int PackageClaims; // ebx
  __int64 v11; // r9
  int v12; // ecx
  int v14; // [rsp+50h] [rbp-10h] BYREF
  __int16 v15; // [rsp+54h] [rbp-Ch]
  int v16; // [rsp+A0h] [rbp+40h] BYREF
  __int16 v17; // [rsp+A4h] [rbp+44h]

  v5 = a5;
  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL);
  if ( PackageClaims == -1073741275 )
  {
    *v5 = 0LL;
    PackageClaims = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)v5 & 1) == 0 )
    {
      v12 = 3;
      goto LABEL_21;
    }
    v12 = 2;
    if ( (*(_BYTE *)v5 & 2) == 0 )
    {
      v12 = 6;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)v5 & 4) != 0 )
    {
      v12 = 5;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)a4 & 4) != 0 )
      goto LABEL_21;
    v12 = 8;
    if ( (*(_BYTE *)a4 & 8) != 0 )
    {
      v12 = 7;
      goto LABEL_21;
    }
    if ( (*(_BYTE *)a4 & 0x40) == 0 )
    {
      v12 = 1;
      goto LABEL_21;
    }
    if ( a2 != 1 )
    {
LABEL_21:
      *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[8 * (a2 - 1) + v12 - 1];
      return PackageClaims | 0x10000000u;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetCachedFeatureEnabledState(8LL);
    LOBYTE(v17) = 1;
    v14 = 0;
    v16 = 3;
    v15 = v17;
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         &`wil::Feature<__WilFeatureTraits_Feature_SuspendPerAppBroker>::GetFeaturePropertyCache'::`2'::data,
                         v9,
                         6,
                         v11,
                         1u)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0x9B19E6u,
        (const struct FEATURE_LOGGED_TRAITS *)&v14,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v16,
        0LL,
        0,
        1uLL);
    }
  }
  return PackageClaims | 0x10000000u;
}
