/*
 * XREFs of ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x1802841B0
 * Callers:
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180284024 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1802C55A0 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1802C8180 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802842E4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_PeopleBar@@@wil@@CAX_NW4ReportingKin.c)
 */

char __fastcall IsPeopleExperienceHostView(struct IApplicationView *a1)
{
  char v2; // di
  __int64 v3; // rax
  int v4; // eax
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::ReportUsageToService();
  v2 = 0;
  lpString1 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  v3 = *(_QWORD *)a1;
  v7 = -1LL;
  v8 = -1LL;
  v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, LPCWCH *))(v3 + 136))(a1, &lpString1);
  if ( v4 >= 0 )
  {
    if ( CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) == 2
      || CompareStringOrdinal(lpString1, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) == 2 )
    {
      v2 = 1;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      15LL,
      (__int64)"internal\\shell\\private\\inc\\AppLayoutBehavior.h",
      (const char *)(unsigned int)v4);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&lpString1);
  return v2;
}
