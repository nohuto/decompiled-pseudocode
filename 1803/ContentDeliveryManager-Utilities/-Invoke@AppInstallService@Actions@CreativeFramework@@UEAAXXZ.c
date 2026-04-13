/*
 * XREFs of ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x18007D730
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007E94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001851C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x18007CF68 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z @ 0x18007D204 (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N11100@Z.c)
 */

void __fastcall CreativeFramework::Actions::AppInstallService::Invoke(
        CreativeFramework::Actions::AppInstallService *this)
{
  const wchar_t *v2; // r9
  const wchar_t *v3; // rax
  const WCHAR *v4; // rcx
  const wchar_t *v5; // r8
  const wchar_t *v6; // rdx
  const WCHAR *v7; // r10
  const wchar_t *v8; // rcx
  const wchar_t *v9; // rdx
  const wchar_t *v10; // r8
  const wchar_t *v11; // r11
  const WCHAR *v12; // r10
  const WCHAR *v13; // [rsp+30h] [rbp-28h]
  __int16 v14; // [rsp+64h] [rbp+Ch]
  int v15; // [rsp+68h] [rbp+10h] BYREF
  __int16 v16; // [rsp+6Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
  {
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  }
  LOBYTE(v14) = 3;
  v15 = 0;
  v16 = v14;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v15,
    1,
    1u);
  v3 = (const wchar_t *)((char *)this + 240);
  if ( *((_QWORD *)this + 12) )
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v3 = *(const wchar_t **)v3;
    v8 = (const wchar_t *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v8 = *(const wchar_t **)v8;
    v9 = (const wchar_t *)((char *)this + 176);
    if ( *((_QWORD *)this + 25) >= 8uLL )
      v9 = *(const wchar_t **)v9;
    v10 = (const wchar_t *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v10 = *(const wchar_t **)v10;
    v11 = (const wchar_t *)((char *)this + 112);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v11 = *(const wchar_t **)v11;
    v12 = (const WCHAR *)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v12 = *(const WCHAR **)v12;
    v13 = v10;
    LOBYTE(v10) = *((_BYTE *)this + 72);
    CreativeFramework::Actions::InstallAppByStoreId(
      v12,
      v11,
      v10,
      *((_BYTE *)this + 73),
      *((_BYTE *)this + 75),
      *((_BYTE *)this + 74),
      v13,
      v9,
      v8,
      v3);
  }
  else
  {
    if ( *((_QWORD *)this + 33) >= 8uLL )
      v3 = *(const wchar_t **)v3;
    v4 = (const WCHAR *)((char *)this + 208);
    if ( *((_QWORD *)this + 29) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    v5 = (const wchar_t *)((char *)this + 112);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v5 = *(const wchar_t **)v5;
    v6 = (const wchar_t *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v6 = *(const wchar_t **)v6;
    v7 = (const WCHAR *)((char *)this + 8);
    if ( *((_QWORD *)this + 4) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    LOBYTE(v2) = *((_BYTE *)this + 72);
    CreativeFramework::Actions::InstallAppByProductAndSku(
      v7,
      v6,
      v5,
      v2,
      *((_BYTE *)this + 73),
      *((_BYTE *)this + 75),
      *((_BYTE *)this + 74),
      v4,
      v3);
  }
}
