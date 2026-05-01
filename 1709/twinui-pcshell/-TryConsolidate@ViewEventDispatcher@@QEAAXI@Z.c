/*
 * XREFs of ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x18011DC3C
 * Callers:
 *     ?OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z @ 0x180136FD0 (-OnRequestConsolidateView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800189AC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolida.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1801241AC (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 *     ?_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x180124460 (-_RaiseViewEvent@ViewEventDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Wi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewEventDispatcher::TryConsolidate(RTL_SRWLOCK *this, unsigned int a2)
{
  struct IViewWrapperInternal *v4; // rcx
  int v5; // eax
  int MatchingViewEventRegistration; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  struct IViewWrapperInternal *v10; // rcx
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct IViewWrapperInternal *v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v11[1] = -2LL;
  try
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetCachedFeatureEnabledState();
    LODWORD(v13) = 0;
    BYTE4(v13) = 3;
    LODWORD(v14) = 0;
    WORD2(v14) = WORD2(v13);
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewClosingAPIs_TryConsolidate_Desktop>::GetFeaturePropertyCache'::`2'::data,
      0x810314u,
      (const struct FEATURE_LOGGED_TRAITS *)&v14,
      1,
      3);
    v13 = 0LL;
    v14 = 0LL;
    AcquireSRWLockShared(this + 37);
    v11[0] = this + 37;
    v4 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)this, a2, &v13);
    if ( v5 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3B3,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v5);
    MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(this, v13, &v14);
    if ( MatchingViewEventRegistration < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3B4,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)MatchingViewEventRegistration);
    if ( this != (RTL_SRWLOCK *)-296LL )
      ReleaseSRWLockShared(this + 37);
    v7 = v14;
    v8 = *(_QWORD *)(v14 + 32);
    v11[0] = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = ViewEventDispatcher::_RaiseViewEvent(this, v13, 35LL, v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3B7,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  catch ( ... )
  {
  }
}
