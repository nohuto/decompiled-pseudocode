/*
 * XREFs of ?Feature_PenTapped_ReportUsage@@YAXW4wil_ReportingKind@@_K@Z @ 0x1C0107994
 * Callers:
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C0107D9C (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C004B498 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void Feature_PenTapped_ReportUsage()
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_PenTapped__private_propertyCache,
    14300127LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0183A2C,
    1,
    2);
}
