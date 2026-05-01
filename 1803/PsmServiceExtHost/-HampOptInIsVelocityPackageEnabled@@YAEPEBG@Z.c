/*
 * XREFs of ?HampOptInIsVelocityPackageEnabled@@YAEPEBG@Z @ 0x180030674
 * Callers:
 *     HamOptInIsPackageFamilyNameEnabledEx @ 0x1800305D8 (HamOptInIsPackageFamilyNameEnabledEx.c)
 * Callees:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA?AW4Variant_HamOptIn@@W4VariantReportingKind@2@_N@Z @ 0x1800306F8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA-AW4Variant_HamOpt.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800307BC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4ReportingKind.c)
 */

bool __fastcall HampOptInIsVelocityPackageEnabled(wchar_t *String1)
{
  char v2; // bl
  unsigned __int16 v3; // di
  int v5; // [rsp+38h] [rbp+10h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &v5, 0LL);
  v2 = 0;
  if ( (unsigned int)(v5 - 14) > 1 )
  {
    v3 = 0;
    while ( _wcsicmp(String1, (&off_180070AC8)[v3]) )
    {
      if ( ++v3 )
      {
        wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::ReportUsageToService();
        return (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::__private_GetVariant() != 2;
      }
    }
  }
  return v2;
}
