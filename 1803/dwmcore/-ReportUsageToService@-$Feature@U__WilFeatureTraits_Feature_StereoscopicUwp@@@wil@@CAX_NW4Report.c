/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18014AB2C
 * Callers:
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014A414 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     ?ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSTEREOSCOPICCONTENTMODE@@@Z @ 0x1801A86AC (-ProcessSetStereoscopicContentMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETSTEREO.c)
 *     ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1801FA4F0 (--0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z.c)
 *     ?StereoscopicUwp_SetStereoscopicData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@000AEBUXMFLOAT3@3@1@Z @ 0x1801FBD80 (-StereoscopicUwp_SetStereoscopicData@CHolographicInteropTexture@@UEAAXAEBUXMFLOAT4X4@DirectX@@00.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA428 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CA-AW.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800BAD78 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetCachedFeatureEnabledState(
      a1,
      a2,
      (enum FEATURE_CHANGE_TIME)a3);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetFeaturePropertyCache'::`2'::data,
    13330426LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
