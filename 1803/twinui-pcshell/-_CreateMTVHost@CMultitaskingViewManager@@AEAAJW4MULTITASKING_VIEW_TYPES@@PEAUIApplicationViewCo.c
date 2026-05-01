/*
 * XREFs of ?_CreateMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180271E58
 * Callers:
 *     ?CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEAPEAX@Z @ 0x180270CB0 (-CreateMultitaskingView@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@AEBU_GUID@@PEA.c)
 *     ?CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180270D50 (-CreateMultitaskingViewWithFilter@CMultitaskingViewManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@PEAU.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18014F348 (--0-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180151598 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C584 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x1801C541C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ??$As@UIMultitaskingViewHost@@@?$ComPtr@UIXamlViewHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewHost@@@WRL@Microsoft@@@Details@12@@Z @ 0x18027061C (--$As@UIMultitaskingViewHost@@@-$ComPtr@UIXamlViewHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802709E4 (--1CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180270C44 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AllowInactiveTabsInAltTab@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180271504 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AllowInactiveTabsInAltTab@@@wil@@CAX.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18027155C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAltTabView@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1802715B4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlSnapAssistView@@@wil@@CAX_NW4Rep.c)
 *     ?StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TYPES@@@Z @ 0x1802718A8 (-StartActivity@CreateMultitaskingViewHost@MultitaskingViewTelemetry@@QEAAXW4MULTITASKING_VIEW_TY.c)
 *     ?_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@PEAPEAUIMultitaskingViewHost@@PEA_K@Z @ 0x18027262C (-_FindMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@W4FindMTVHostOptions@1@P.c)
 *     ?VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x180274068 (-VirtualDesktopThumbnailWindowFilter_CreateInstance@@YAJPEAUIVirtualDesktopManagerInternal@@PEAU.c)
 *     ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x180274624 (-MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibil.c)
 *     ?CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180274EFC (-CAltTabViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@.c)
 *     ?CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180276E50 (-CSnapAssistViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInter.c)
 *     ?CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1802780F0 (-CPPIAllUpViewHost_CreateInstance@@YAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInterna.c)
 */

__int64 __fastcall CMultitaskingViewManager::_CreateMTVHost(
        __int64 *a1,
        unsigned int a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, LPVOID *),
        __int64 a4,
        _QWORD *a5)
{
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct IVirtualDesktopNotificationService **v15; // r15
  const struct _GUID *v16; // r9
  int v17; // eax
  int Instance; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // rcx
  _DWORD *v23; // r9
  struct IMultitaskingViewManagerInternal *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  void *v28; // r8
  __int64 v29; // rax
  unsigned int v30; // esi
  unsigned int v31; // esi
  unsigned int v32; // esi
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  __int64 *v39; // rbx
  unsigned __int64 v40; // r9
  struct _GUID *v42; // [rsp+30h] [rbp-D0h]
  struct _GUID *v43; // [rsp+40h] [rbp-C0h]
  LPVOID ppv; // [rsp+70h] [rbp-90h] BYREF
  struct IMultitaskingViewManagerInternal *v45; // [rsp+78h] [rbp-88h] BYREF
  struct IMultitaskingData *v46[2]; // [rsp+80h] [rbp-80h] BYREF
  void *v47; // [rsp+90h] [rbp-70h] BYREF
  UAPViewWrapper *v48; // [rsp+98h] [rbp-68h] BYREF
  UAPViewWrapper *v49; // [rsp+A0h] [rbp-60h] BYREF
  UAPViewWrapper *v50; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v51[18]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v52[40]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  *a5 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v52,
    (__int64)"CreateMultitaskingViewHost");
  v52[0] = &MultitaskingViewTelemetry::CreateMultitaskingViewHost::`vftable';
  MultitaskingViewTelemetry::CreateMultitaskingViewHost::StartActivity((__int64)v52, a2);
  if ( a2 > 8 || (v9 = 278, !_bittest(&v9, a2)) )
  {
    v13 = -2147024809;
    v14 = 257LL;
    goto LABEL_60;
  }
  if ( (int)CMultitaskingViewManager::_FindMTVHost(a1, a2, 0LL, 0LL, 0LL) >= 0 )
  {
    v13 = -2147483635;
    v14 = 262LL;
LABEL_60:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)v13);
    goto LABEL_61;
  }
  v15 = (struct IVirtualDesktopNotificationService **)(a1 + 18);
  v47 = 0LL;
  if ( !a1[15]
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47),
        v17 = VirtualDesktopThumbnailWindowFilter_CreateInstance(
                (struct IVirtualDesktopManagerInternal *)a1[15],
                (struct ITabletModeController *)a1[17],
                *v15,
                v16,
                &v47),
        v13 = v17,
        v17 >= 0) )
  {
    wil::Feature<__WilFeatureTraits_Feature_AllowInactiveTabsInAltTab>::ReportUsageToService(v11, v10, v12);
    *(_OWORD *)v46 = 0LL;
    if ( a3 )
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
      Instance = (**a3)(a3, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3, &ppv);
      v13 = Instance;
      if ( Instance < 0 )
      {
        v19 = 288LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)Instance);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
LABEL_57:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46[1]);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v46);
        goto LABEL_58;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46[1]);
      v43 = (struct _GUID *)a1[26];
      v42 = (struct _GUID *)a1[22];
      Instance = MultitaskingData_CreateInstance(a3, ppv, v47, a1[15], a1[16], *v15);
      v13 = Instance;
      if ( Instance < 0 )
      {
        v19 = 301LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46[1]);
      v43 = (struct _GUID *)a1[26];
      v42 = (struct _GUID *)a1[22];
      v25 = MultitaskingData_CreateInstance(a1[12], a1[13], v47, a1[15], a1[16], a1[18]);
      v13 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13D,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
          (const char *)(unsigned int)v25);
        goto LABEL_57;
      }
    }
    v50 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v20, 3u, v21);
    v51[1] = a1[11];
    v51[0] = a1;
    if ( !a3 )
      a3 = (__int64 (__fastcall ***)(_QWORD, GUID *, LPVOID *))a1[12];
    v51[3] = a1[14];
    v51[4] = a1[19];
    v51[5] = a1[30];
    v51[6] = a1[20];
    v51[7] = a1[29];
    v51[8] = a1[26];
    v51[9] = a1[25];
    v51[10] = a1[27];
    v51[11] = a1[28];
    v51[12] = a1[15];
    v51[13] = *v15;
    v51[14] = v50;
    v51[15] = v49;
    v51[2] = a3;
    v51[16] = v48;
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    v45 = 0LL;
    if ( InlineIsEqualGUID(&GUID_4026878b_100e_4920_8bc7_baeed683a086, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v45 = (struct IMultitaskingViewManagerInternal *)a1;
      v24 = (struct IMultitaskingViewManagerInternal *)a1;
      v29 = *a1;
    }
    else
    {
      if ( InlineIsEqualGUID(v22, &GUID_537b455d_1240_433b_82af_10929138b8be) )
      {
        v24 = (struct IMultitaskingViewManagerInternal *)a1;
        v45 = (struct IMultitaskingViewManagerInternal *)a1;
      }
      else
      {
        if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                    (__int64)(a1 + 1),
                    v23) < 0 )
          goto LABEL_27;
        v24 = v45;
      }
      v29 = *(_QWORD *)v24;
    }
    (*(void (__fastcall **)(struct IMultitaskingViewManagerInternal *))(v29 + 8))(v24);
LABEL_27:
    v30 = a2 - 1;
    if ( !v30 )
    {
      wil::Feature<__WilFeatureTraits_Feature_XamlAltTabView>::ReportUsageToService(v27, v26, (__int64)v28);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v46);
      v13 = CAltTabViewHost_CreateInstance(
              v46[1],
              v45,
              (struct IApplicationViewSwitcher *)a1[14],
              (struct IImmersiveAppCrusher *)a1[19],
              (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
              (struct IMultitaskingViewGestureState *)a1[21],
              (struct Windows::Internal::ComposableShell::Tabs::ITabController *)a1[32],
              (struct ITabViewManager *)a1[33],
              v43,
              (void **)v46);
      if ( v13 == -2147019873 )
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v52);
      if ( (v13 & 0x80000000) != 0 )
      {
        v40 = v13;
        v34 = 381LL;
        goto LABEL_50;
      }
      goto LABEL_43;
    }
    v31 = v30 - 1;
    if ( v31 )
    {
      v32 = v31 - 2;
      if ( v32 )
      {
        if ( v32 == 4 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v46);
          v33 = CPPIAllUpViewHost_CreateInstance(
                  v46[1],
                  v45,
                  (struct IApplicationViewSwitcher *)a1[14],
                  (struct IImmersiveAppCrusher *)a1[19],
                  (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
                  (struct ITabletModeViewManager *)a1[23],
                  v42,
                  (void **)v46);
          v13 = v33;
          if ( v33 < 0 )
          {
            v34 = 436LL;
LABEL_49:
            v40 = (unsigned int)v33;
LABEL_50:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v34,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
              (const char *)v40);
            goto LABEL_56;
          }
        }
      }
      else
      {
        wil::Feature<__WilFeatureTraits_Feature_XamlSnapAssistView>::ReportUsageToService(v27, v26, (__int64)v28);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v46);
        v33 = CSnapAssistViewHost_CreateInstance(
                v46[1],
                v45,
                (struct IMultitaskingViewVisibilityServiceInternal *)a1[20],
                (struct IImmersiveAppCrusher *)a1[19],
                (struct Windows::Internal::ComposableShell::Tabs::ITabController *)a1[32],
                (struct ITabViewManager *)a1[33],
                v42,
                (void **)v46);
        v13 = v33;
        if ( v33 < 0 )
        {
          v34 = 425LL;
          goto LABEL_49;
        }
      }
LABEL_43:
      v37 = a1 + 34;
      v38 = v37[1];
      if ( v38 != v37[3]
        || (int)CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                  (__int64)v37,
                  v38 + 1,
                  v28) >= 0 )
      {
        ++v37[1];
        v39 = (__int64 *)(16LL * v37[1] + *v37 - 16LL);
        if ( v39 )
        {
          *v39 = (__int64)v46[0];
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v39);
          v39[1] = (__int64)v46[1];
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v39 + 1);
        }
      }
      v33 = (**(__int64 (__fastcall ***)(struct IMultitaskingData *, __int64, _QWORD *))v46[0])(v46[0], a4, a5);
      v13 = v33;
      if ( v33 >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v52);
        v13 = 0;
        goto LABEL_56;
      }
      v34 = 442LL;
      goto LABEL_49;
    }
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v27, 3u, (__int64)v28);
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
    v35 = CoCreateInstance(&CLSID_XamlAllUpViewHost, 0LL, 1u, &GUID_f1b5677a_51f5_46d9_9108_3d9c8201199b, &ppv);
    v13 = v35;
    if ( v35 >= 0 )
    {
      v35 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *))(*(_QWORD *)ppv + 24LL))(ppv, v51);
      v13 = v35;
      if ( v35 >= 0 )
      {
        v35 = Microsoft::WRL::ComPtr<IXamlViewHost>::As<IMultitaskingViewHost>(&ppv, (__int64 *)v46);
        v13 = v35;
        if ( v35 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
          goto LABEL_43;
        }
        v36 = 392LL;
      }
      else
      {
        v36 = 391LL;
      }
    }
    else
    {
      v36 = 390LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)(unsigned int)v35);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
LABEL_56:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v48);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v49);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease(&v50);
    goto LABEL_57;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x110,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
    (const char *)(unsigned int)v17);
LABEL_58:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
LABEL_61:
  MultitaskingViewTelemetry::CreateMultitaskingViewHost::~CreateMultitaskingViewHost((MultitaskingViewTelemetry::CreateMultitaskingViewHost *)v52);
  return v13;
}
