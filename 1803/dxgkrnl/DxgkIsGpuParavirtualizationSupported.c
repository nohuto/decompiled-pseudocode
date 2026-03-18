/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1C015C5E4
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7750 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

bool __fastcall DxgkIsGpuParavirtualizationSupported(__int64 a1)
{
  bool v2; // dl
  int v4; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005BF44,
    1,
    v4);
  v2 = (*(_DWORD *)(a1 + 1836) & 0x400) != 0;
  if ( (*(_DWORD *)(a1 + 1836) & 0x400) != 0 && (*(_DWORD *)(a1 + 4044) & 0x100) != 0 )
    return 0;
  return v2;
}
