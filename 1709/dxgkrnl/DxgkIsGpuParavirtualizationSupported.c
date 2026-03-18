/*
 * XREFs of DxgkIsGpuParavirtualizationSupported @ 0x1C0114750
 * Callers:
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0114654 (DpiFdoInitializeGpuVirtualization.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

char DxgkIsGpuParavirtualizationSupported()
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (__int64)&unk_1C003CEE8,
    0,
    v1);
  return 0;
}
