/*
 * XREFs of ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFED0
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1800FBD90 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005D8F8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 *     _LogEventWithViewHostItemData @ 0x1800FA7D0 (_LogEventWithViewHostItemData.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x180100950 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18010397C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_TransitionViewFromHolographic(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v4; // rsi
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  __int16 v16; // [rsp+B4h] [rbp+44h]
  int v17; // [rsp+B8h] [rbp+48h] BYREF
  __int16 v18; // [rsp+BCh] [rbp+4Ch]

  v12[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, &v11, a2);
  v4 = v11;
  if ( v11 && *((_QWORD *)this + 32) )
  {
    LogEventWithViewHostItemData(
      v11,
      (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::TransitionViewFromHolographic<unsigned short const *,unsigned int &>);
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 32) + 56LL))(*((_QWORD *)this + 32), v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 1749LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_24;
    }
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
    LOBYTE(v16) = 3;
    v17 = 0;
    v18 = v16;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
      0x8DFABCu,
      (const struct FEATURE_LOGGED_TRAITS *)&v17,
      1,
      3);
    v13 = 0uLL;
    LODWORD(v14) = 3;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v12);
    v8 = v12[0];
    if ( !v12[0] )
    {
      v6 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6DF,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_11;
    }
    *(_OWORD *)(v12[0] + 112LL) = 0LL;
    *(_OWORD *)(v8 + 128) = v13;
    *(_QWORD *)(v8 + 144) = v14;
    *(_BYTE *)(v8 + 108) = 1;
    v9 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 296LL))(a2, v8);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6E1,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v9);
LABEL_11:
      if ( v8 )
      {
        v12[0] = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 52), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 216LL))(v8, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v4 = v11;
      }
      goto LABEL_24;
    }
    v12[0] = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 216LL))(v8, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v4 = v11;
  }
  v5 = HolographicPositioner::_SendViewTransitionNotification(this, a2, 1LL);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1765LL;
    goto LABEL_22;
  }
  v6 = 0;
LABEL_24:
  if ( v4 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v6;
}
