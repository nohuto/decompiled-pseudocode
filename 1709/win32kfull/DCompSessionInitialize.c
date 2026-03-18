/*
 * XREFs of DCompSessionInitialize @ 0x1C0382C60
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E1100 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 DCompSessionInitialize()
{
  int v1; // [rsp+20h] [rbp-18h]

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_DWMTouchTargeting__private_propertyCache,
    8348580LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C02DC95C,
    0,
    v1);
  return DCompositionSessionInitialize(0LL);
}
