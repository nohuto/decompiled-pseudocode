/*
 * XREFs of HampOptInIsVelocityPackageEnabled @ 0x18001EB4C
 * Callers:
 *     HamOptInIsPackageFamilyNameEnabledEx @ 0x18001EA90 (HamOptInIsPackageFamilyNameEnabledEx.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x18001EB60 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

char __fastcall HampOptInIsVelocityPackageEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(a1, a2, a3, 0LL);
  return 0;
}
