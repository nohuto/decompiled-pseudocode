/*
 * XREFs of ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18007D390
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18007E2E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CA-A.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::GetFrameworkViewType(
        CWin32ApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  HWND v3; // rax
  char v4; // bl
  __int16 v6; // [rsp+34h] [rbp-Ch]
  int v7; // [rsp+60h] [rbp+20h] BYREF
  int v8; // [rsp+70h] [rbp+30h] BYREF
  __int16 v9; // [rsp+74h] [rbp+34h]

  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 24LL))(*((_QWORD *)this + 21));
  v7 = 0;
  if ( !GetPropW(v3, L"Windows.Graphics.Holographic.HolographicSpace") )
    goto LABEL_6;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::GetCachedFeatureEnabledState();
  LOBYTE(v6) = 3;
  v8 = 0;
  v4 = 1;
  v9 = v6;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::GetFeaturePropertyCache'::`2'::data,
    0xA02EFBu,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    3);
  if ( (int)IsDeveloperModeEnabled(&v7) < 0 || !v7 )
LABEL_6:
    v4 = 0;
  *(_DWORD *)a2 = v4 != 0 ? 1 : 6;
  return 0LL;
}
