/*
 * XREFs of ?_UpdateViewStateDataForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180100138
 * Callers:
 *     ?EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800FC420 (-EnterFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1800FC540 (-ExitFullScreenForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1800FFBF8 (-_TransitionViewToHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18005D8F8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ViewPresentationMode@@@wil@@.c)
 *     ?_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800FD11C (-_CreateTitleBarConfiguration@HolographicPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfigu.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18010397C (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicPositioner::_UpdateViewStateDataForView(
        HolographicPositioner *this,
        struct IApplicationView *a2)
{
  __int64 v3; // rsi
  int v4; // eax
  unsigned int v5; // r14d
  HolographicPositioner *v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  struct IApplicationViewTitlebarConfiguration *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  int v13; // [rsp+38h] [rbp-29h] BYREF
  __int16 v14; // [rsp+3Ch] [rbp-25h]
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  struct IApplicationViewTitlebarConfiguration *v16; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-11h] BYREF
  _OWORD v18[3]; // [rsp+60h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  int v20; // [rsp+D8h] [rbp+77h] BYREF
  int v21; // [rsp+E0h] [rbp+7Fh]
  __int16 v22; // [rsp+E4h] [rbp+83h]

  v17[1] = -2LL;
  HolographicPositioner::_FindViewHostItem(this, &v15, a2);
  v3 = v15;
  if ( !v15 )
    goto LABEL_29;
  memset(v18, 0, 0x28uLL);
  memset(v18, 0, 32);
  LODWORD(v18[2]) = 3;
  v20 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 112LL))(v15, &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6F7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_30;
  }
  LODWORD(v18[1]) = v20 != 1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetCachedFeatureEnabledState();
  v21 = 0;
  LOBYTE(v22) = 3;
  v13 = 0;
  v14 = v22;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetFeaturePropertyCache'::`2'::data,
    0x8DFABCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v13,
    1,
    3);
  DWORD2(v18[1]) = 1;
  Microsoft::WRL::Details::Make<ApplicationViewOperation,>(v17);
  v7 = v17[0];
  if ( v17[0] )
  {
    *(_OWORD *)(v17[0] + 112LL) = 0LL;
    *(_OWORD *)(v7 + 128) = v18[1];
    *(_QWORD *)(v7 + 144) = *(_QWORD *)&v18[2];
    *(_BYTE *)(v7 + 108) = 1;
    *(_QWORD *)(v7 + 100) = 127LL;
    v16 = 0LL;
    v8 = HolographicPositioner::_CreateTitleBarConfiguration(v6, &v16);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x709,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v8);
    v9 = v16;
    if ( *(struct IApplicationViewTitlebarConfiguration **)(v7 + 160) != v16 )
    {
      if ( v16 )
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v16 + 8LL))(v16);
      v10 = *(_QWORD *)(v7 + 160);
      *(_QWORD *)(v7 + 160) = v9;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 296LL))(a2, v7);
    v5 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x70D,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
        (const char *)(unsigned int)v11);
      if ( v9 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      goto LABEL_18;
    }
    if ( v9 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v17[0] = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 216LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v3 = v15;
LABEL_29:
    v5 = 0;
    goto LABEL_30;
  }
  v5 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x701,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)0x8007000ELL);
LABEL_18:
  if ( v7 )
  {
    v17[0] = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 52), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 216LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    v3 = v15;
  }
LABEL_30:
  if ( v3 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v5;
}
