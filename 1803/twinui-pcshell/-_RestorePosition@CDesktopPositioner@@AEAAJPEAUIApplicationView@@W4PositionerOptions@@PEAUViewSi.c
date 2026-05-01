/*
 * XREFs of ?_RestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@@Z @ 0x180023304
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180021B10 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z @ 0x18001BC60 (-ApplyOperation@CWinRTApplicationView@@UEAAJPEAUIApplicationViewOperation@@@Z.c)
 *     ?_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180022050 (-_CreateTitlebarConfiguration@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplication.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180023088 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAUVie.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800261E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1800261E0.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E6A0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ConfigureChromeForOperation @ 0x180089368 (ConfigureChromeForOperation.c)
 *     ??_GApplicationViewOperation@@UEAAPEAXI@Z @ 0x180089770 (--_GApplicationViewOperation@@UEAAPEAXI@Z.c)
 *     ??0ApplicationViewOperation@@QEAA@XZ @ 0x18008984C (--0ApplicationViewOperation@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18010730C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_RestorePosition(
        CDesktopPositioner *a1,
        struct IApplicationView *a2,
        __int64 a3,
        _QWORD *a4)
{
  int RestorePosition; // eax
  unsigned int v6; // esi
  ApplicationViewOperation *v7; // rbx
  void *v8; // rdi
  ApplicationViewOperation *v9; // rax
  volatile int *v10; // rdx
  IUnknown *v11; // rcx
  __int64 v12; // rdi
  int v13; // eax
  struct IApplicationViewTitlebarConfiguration *v14; // rdi
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  struct IApplicationViewTitlebarConfiguration *v17; // rcx
  __int64 v18; // rax
  struct wil_details_RecordUsageResult *v19; // r9
  __int64 (__fastcall *v20)(CWinRTApplicationView *, struct IApplicationViewOperation *); // rax
  int v21; // eax
  void (__fastcall *v22)(struct IApplicationViewTitlebarConfiguration *); // rax
  signed __int64 v23; // rax
  unsigned int v24; // ecx
  signed __int64 v25; // rtt
  void *(__fastcall *v26)(ApplicationViewOperation *__hidden, unsigned int); // rax
  void (*v27)(void); // rax
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-99h]
  __int16 v31; // [rsp+54h] [rbp-65h]
  int v32[2]; // [rsp+58h] [rbp-61h] BYREF
  int v33; // [rsp+60h] [rbp-59h] BYREF
  int v34; // [rsp+68h] [rbp-51h] BYREF
  __int16 v35; // [rsp+6Ch] [rbp-4Dh]
  struct IApplicationViewTitlebarConfiguration *v36; // [rsp+70h] [rbp-49h] BYREF
  ApplicationViewOperation *v37; // [rsp+78h] [rbp-41h]
  __int64 v38; // [rsp+80h] [rbp-39h]
  _BYTE v39[24]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-19h] BYREF
  int v41; // [rsp+B0h] [rbp-9h]
  int v42; // [rsp+B4h] [rbp-5h]
  __int128 v43; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v44; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v38 = -2LL;
  *(_QWORD *)v32 = 0LL;
  RestorePosition = CDesktopPositioner::_GetRestorePosition(a1, a2, a3, a4, (struct IApplicationViewPosition **)v32);
  v6 = RestorePosition;
  if ( RestorePosition < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x469,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)RestorePosition,
      v30);
    goto LABEL_56;
  }
  v7 = 0LL;
  v37 = 0LL;
  v8 = operator new(0xF8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 0LL;
  if ( v8 )
  {
    memset_0(v8, 0, 0xF8uLL);
    v9 = ApplicationViewOperation::ApplicationViewOperation((ApplicationViewOperation *)v8);
    v7 = v9;
    v37 = v9;
  }
  if ( !v9 )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46D,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)0x8007000ELL,
      v30);
    goto LABEL_41;
  }
  v11 = (IUnknown *)*((_QWORD *)v7 + 9);
  v12 = *(_QWORD *)v32;
  if ( v11 != *(IUnknown **)v32 )
  {
    if ( *(_QWORD *)v32 )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 8LL))(*(_QWORD *)v32);
      v11 = (IUnknown *)*((_QWORD *)v7 + 9);
    }
    *((_QWORD *)v7 + 9) = v12;
    if ( v11 )
      ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  }
  v36 = 0LL;
  v13 = CDesktopPositioner::_CreateTitlebarConfiguration(v11, a2, &v36);
  v6 = v13;
  v14 = v36;
  if ( v13 < 0 )
  {
    v15 = (unsigned int)v13;
    v16 = 1138LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v15,
      v30);
    goto LABEL_37;
  }
  v17 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v7 + 22);
  if ( v17 != v36 )
  {
    if ( v36 )
    {
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v36 + 8LL))(v36);
      v17 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)v7 + 22);
    }
    *((_QWORD *)v7 + 22) = v14;
    if ( v17 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
  LOBYTE(v31) = 3;
  v34 = 0;
  v35 = v31;
  v33 = 3;
  v30 = 1;
  v18 = wil_details_RecordUsageInPropertyCache(
          v39,
          &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
          2LL);
  v43 = *(_OWORD *)v18;
  v44 = *(_QWORD *)(v18 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xBF61B,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v43,
        v19);
    else
      g_wil_details_recordFeatureUsage(
        0xBF61Bu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v43);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v40[0] = 0LL;
      v41 = 0;
      v40[1] = 2LL;
      v42 = (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(783899LL, 0LL, v40);
    }
  }
  if ( !(_DWORD)v44 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xBF61Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v34,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v33,
      0LL,
      0,
      1uLL);
  ConfigureChromeForOperation(v7);
  v20 = *(__int64 (__fastcall **)(CWinRTApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL);
  if ( v20 == CWinRTApplicationView::ApplyOperation )
    v21 = CWinRTApplicationView::ApplyOperation(a2, v7);
  else
    v21 = v20(a2, v7);
  v6 = v21;
  if ( v21 < 0 )
  {
    v15 = (unsigned int)v21;
    v16 = 1146LL;
    goto LABEL_35;
  }
  v6 = 0;
LABEL_37:
  if ( v14 )
  {
    v22 = *(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v22 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release(v14);
    else
      v22(v14);
  }
LABEL_41:
  if ( v7 )
  {
    v23 = *((_QWORD *)v7 + 8);
    while ( v23 >= 0 )
    {
      if ( (_DWORD)v23 == 0x7FFFFFFF )
        goto LABEL_56;
      v24 = v23 - 1;
      v25 = v23;
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v7 + 8, v23 - 1, v23);
      if ( v25 == v23 )
        goto LABEL_48;
    }
    v24 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v23 + 16), v10);
LABEL_48:
    if ( !v24 )
    {
      v26 = *(void *(__fastcall **)(ApplicationViewOperation *__hidden, unsigned int))(*(_QWORD *)v37 + 240LL);
      if ( v26 == ApplicationViewOperation::`scalar deleting destructor' )
        ApplicationViewOperation::`scalar deleting destructor'(v37, 1u);
      else
        v26(v37, 1u);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v27 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( (char *)v27 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v27();
      }
    }
  }
LABEL_56:
  v28 = *(_QWORD *)v32;
  if ( *(_QWORD *)v32 )
  {
    *(_QWORD *)v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return v6;
}
