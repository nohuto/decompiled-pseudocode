/*
 * XREFs of ?ReportVariantUsageToService@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CAX_NW4Variant_HamOptIn@@W4VariantReportingKind@2@_K@Z @ 0x180030714
 * Callers:
 *     ?__private_GetVariant@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA?AW4Variant_HamOptIn@@W4VariantReportingKind@2@_N@Z @ 0x1800306F8 (-__private_GetVariant@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@SA-AW4Variant_HamOpt.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180030880 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedVariantState@?$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA?AW4Variant_HamOptIn@@XZ @ 0x180030B70 (-GetCachedVariantState@-$Feature@U__WilFeatureTraits_Feature_HamOptIn@@@wil@@CA-AW4Variant_HamOp.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::ReportVariantUsageToService(
        char a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // [rsp+50h] [rbp-10h] BYREF
  __int16 v6; // [rsp+54h] [rbp-Ch]
  int v7; // [rsp+70h] [rbp+10h] BYREF
  __int64 v8; // [rsp+88h] [rbp+28h]

  v8 = a4;
  LOBYTE(v7) = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetCachedVariantState();
  LODWORD(v8) = 9;
  v5 = 9;
  BYTE4(v8) = 3;
  v6 = WORD2(v8);
  v7 = 2;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_HamOptIn>::GetFeatureVariantPropertyCache'::`2'::data,
                       10956236LL,
                       (unsigned int)a2 + 320,
                       dword_1800937DC & (unsigned int)-(a2 != 0),
                       1LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xA72DCCu,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        1,
        0LL,
        (const enum wil_VariantReportingKind *)&v7,
        a2,
        1uLL);
  }
}
