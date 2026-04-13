/*
 * XREFs of ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180072D40
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180016000 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentUseProductIns.c)
 *     ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z @ 0x1800726A4 (-InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N11100@Z.c)
 *     ?InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z @ 0x18007291C (-InstallAppByProductAndSku@Actions@CreativeFramework@@YAXPEB_W00_N111@Z.c)
 */

void __fastcall CreativeFramework::Actions::AppInstallService::Invoke(
        CreativeFramework::Actions::AppInstallService *this)
{
  const wchar_t *v2; // r8
  const wchar_t *v3; // r9
  const wchar_t *v4; // r8
  const wchar_t *v5; // rdx
  const WCHAR *v6; // rcx
  const wchar_t *v7; // rax
  const WCHAR *v8; // rcx
  const wchar_t *v9; // rdx
  const WCHAR *v10; // r10
  __int16 v11; // [rsp+5Ch] [rbp+14h]
  int v12; // [rsp+60h] [rbp+18h] BYREF
  __int16 v13; // [rsp+64h] [rbp+1Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetCachedFeatureEnabledState();
  LOBYTE(v11) = 3;
  v12 = 0;
  v13 = v11;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentUseProductInstallAPIs>::GetFeaturePropertyCache'::`2'::data,
    0x8284B3u,
    (const struct FEATURE_LOGGED_TRAITS *)&v12,
    1);
  if ( *((_QWORD *)this + 12) )
  {
    v7 = (const wchar_t *)((char *)this + 176);
    if ( *((_QWORD *)this + 25) >= 8uLL )
      v7 = *(const wchar_t **)v7;
    v8 = (const WCHAR *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    v9 = (const wchar_t *)((char *)this + 112);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v9 = *(const wchar_t **)v9;
    v10 = (const WCHAR *)((char *)this + 80);
    if ( *((_QWORD *)this + 13) >= 8uLL )
      v10 = *(const WCHAR **)v10;
    LOBYTE(v2) = *((_BYTE *)this + 72);
    CreativeFramework::Actions::InstallAppByStoreId(
      v10,
      v9,
      v2,
      *((_BYTE *)this + 73),
      *((_BYTE *)this + 75),
      *((_BYTE *)this + 74),
      v8,
      v7);
  }
  else
  {
    v4 = (const wchar_t *)((char *)this + 112);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v4 = *(const wchar_t **)v4;
    v5 = (const wchar_t *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v5 = *(const wchar_t **)v5;
    v6 = (const WCHAR *)((char *)this + 8);
    if ( *((_QWORD *)this + 4) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    LOBYTE(v3) = *((_BYTE *)this + 72);
    CreativeFramework::Actions::InstallAppByProductAndSku(
      v6,
      v5,
      v4,
      v3,
      *((_BYTE *)this + 73),
      *((_BYTE *)this + 75),
      *((_BYTE *)this + 74));
  }
}
