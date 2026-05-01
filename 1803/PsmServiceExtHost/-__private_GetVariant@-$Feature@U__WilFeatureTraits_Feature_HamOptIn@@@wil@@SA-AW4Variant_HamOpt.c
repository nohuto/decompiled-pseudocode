/*
 * XREFs of ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA?AW4Variant_HamOptIn@@W4VariantReportingKind@2@_N@Z @ 0x1800306F8
 * Callers:
 *     ?HampOptInIsVelocityPackageEnabled@@YAEPEBG@Z @ 0x180030674 (-HampOptInIsVelocityPackageEnabled@@YAEPEBG@Z.c)
 * Callees:
 *     ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Variant_HamOptIn@@W4VariantReportingKind@2@_K@Z @ 0x180030714 (-ReportVariantUsageToService@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Varian.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA?AW4Variant_HamOptIn@@XZ @ 0x180030B70 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA-AW4Variant_HamOp.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::__private_GetVariant()
{
  __int64 v0; // rdx
  char v1; // bl
  __int64 v2; // rcx

  LOBYTE(v0) = wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetCachedVariantState();
  v1 = v0;
  wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::ReportVariantUsageToService(v2, v0);
  return v1;
}
