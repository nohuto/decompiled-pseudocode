/*
 * XREFs of ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18026930C
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x180269AE0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180071178 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C584 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlAllUpView@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C5E8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CAX_NW4Repor.c)
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180270A64 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::s_CreateMTVManager(
        struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  const struct _GUID *v32; // [rsp+B8h] [rbp-98h]
  struct IXamlExplorerHost *v33; // [rsp+D0h] [rbp-80h] BYREF
  struct IImmersiveMonitorManager *v34; // [rsp+D8h] [rbp-78h] BYREF
  struct IApplicationViewIconLoader *v35; // [rsp+E0h] [rbp-70h] BYREF
  struct ISnapServiceProvider *v36; // [rsp+E8h] [rbp-68h] BYREF
  struct IShellTargetingContractManager *v37; // [rsp+F0h] [rbp-60h] BYREF
  struct ITabletModeViewManager *v38; // [rsp+F8h] [rbp-58h] BYREF
  struct IImmersiveSettingsCache *v39; // [rsp+100h] [rbp-50h] BYREF
  struct IMultitaskingViewGestureState *v40; // [rsp+108h] [rbp-48h] BYREF
  struct IMultitaskingViewVisibilityServiceInternal *v41; // [rsp+110h] [rbp-40h] BYREF
  struct IImmersiveAppCrusher *v42; // [rsp+118h] [rbp-38h] BYREF
  struct IVirtualDesktopNotificationService *v43; // [rsp+120h] [rbp-30h] BYREF
  struct ITabletModeController *v44; // [rsp+128h] [rbp-28h] BYREF
  struct IVirtualDesktopPinnedApps *v45; // [rsp+130h] [rbp-20h] BYREF
  struct IVirtualDesktopManagerInternal *v46; // [rsp+138h] [rbp-18h] BYREF
  struct IApplicationViewSwitcher *v47; // [rsp+140h] [rbp-10h] BYREF
  struct IApplicationViewVisibilityDebouncedNotificationService *v48; // [rsp+148h] [rbp-8h] BYREF
  struct IApplicationViewCollection *v49; // [rsp+150h] [rbp+0h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v50; // [rsp+158h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v51; // [rsp+160h] [rbp+10h] BYREF
  struct ITabViewManager *v52; // [rsp+168h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+48h]
  struct IMultitaskingViewServiceProvider *v54; // [rsp+1A0h] [rbp+50h] BYREF
  void *v55; // [rsp+1A8h] [rbp+58h] BYREF
  struct IInspectable *v56; // [rsp+1B0h] [rbp+60h] BYREF
  struct IInspectable *v57; // [rsp+1B8h] [rbp+68h] BYREF

  v54 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
  v2 = CMarshaledInterface::_Unmarshal(this, &GUID_90adbab9_cdb8_43dd_8daa_ba1180be5215, (void **)&v54, 0);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v49 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
    v4 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 8),
           &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
           (void **)&v49,
           0);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F2,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v4);
LABEL_65:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
      goto LABEL_66;
    }
    v48 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
    v5 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 16),
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           (void **)&v48,
           0);
    v3 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F4,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v5);
LABEL_64:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v48);
      goto LABEL_65;
    }
    v47 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
    v6 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 24),
           &GUID_e0fe7384_5482_4659_ab2c_4ff038948779,
           (void **)&v47,
           0);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F6,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v6);
LABEL_63:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
      goto LABEL_64;
    }
    v46 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
    v7 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 32),
           &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
           (void **)&v46,
           0);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F8,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v7);
LABEL_62:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
      goto LABEL_63;
    }
    v45 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
    v8 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 40),
           &GUID_4ce81583_1e4c_4632_a621_07a53543148f,
           (void **)&v45,
           0);
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FA,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v8);
LABEL_61:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
      goto LABEL_62;
    }
    v44 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
    v9 = CMarshaledInterface::_Unmarshal(
           (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 48),
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           (void **)&v44,
           0);
    v3 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v9);
LABEL_60:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
      goto LABEL_61;
    }
    v43 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
    v10 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 56),
            &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf,
            (void **)&v43,
            0);
    v3 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FE,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v10);
LABEL_59:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v43);
      goto LABEL_60;
    }
    v42 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
    v11 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 64),
            &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a,
            (void **)&v42,
            0);
    v3 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x200,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v11);
LABEL_58:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v42);
      goto LABEL_59;
    }
    v41 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
    v12 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 72),
            &GUID_6e7da126_f47e_4b81_b43f_e466cf325f58,
            (void **)&v41,
            0);
    v3 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12);
LABEL_57:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v41);
      goto LABEL_58;
    }
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
    v13 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 80),
            &GUID_ddc50c84_64c9_4fa3_9109_d8e7645b7ebc,
            (void **)&v40,
            0);
    v3 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x204,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v13);
LABEL_56:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v40);
      goto LABEL_57;
    }
    v39 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
    v14 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 88),
            &GUID_4214f6fa_eb36_4e2f_9ca2_23fdc1832df7,
            (void **)&v39,
            0);
    v3 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x206,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
LABEL_55:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v39);
      goto LABEL_56;
    }
    v38 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
    v15 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 96),
            &GUID_373e56cf_0a1b_4b4a_a1a4_a46b25ffd7e3,
            (void **)&v38,
            0);
    v3 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x208,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v15);
LABEL_54:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v38);
      goto LABEL_55;
    }
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    v16 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 104),
            &GUID_c59a546b_412b_40f3_b151_9b3202e2835f,
            (void **)&v37,
            0);
    v3 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20A,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v16);
LABEL_53:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
      goto LABEL_54;
    }
    v36 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
    v17 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 112),
            &GUID_fff59320_db70_4865_8fed_8b502d692f12,
            (void **)&v36,
            0);
    v3 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20C,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v17);
LABEL_52:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
      goto LABEL_53;
    }
    v35 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
    v18 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 120),
            &GUID_f622d8ac_35d3_4374_9148_66f1f7894191,
            (void **)&v35,
            0);
    v3 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20E,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v18);
LABEL_51:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v35);
      goto LABEL_52;
    }
    v34 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    v19 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 144),
            &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
            (void **)&v34,
            0);
    v3 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x210,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v19);
LABEL_50:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      goto LABEL_51;
    }
    v33 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::ReportUsageToService(v20, 3u, v21);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
    v22 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 152),
            &GUID_d9fbe049_d665_4fc8_9bcb_0db3bc2f737c,
            (void **)&v33,
            0);
    v3 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x214,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v22);
LABEL_49:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v33);
      goto LABEL_50;
    }
    v57 = 0LL;
    v56 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_XamlAllUpView>::ReportUsageToService(v23, 3u, v24);
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v57);
    v25 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 128),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            (void **)&v57,
            0);
    v3 = v25;
    if ( v25 < 0 )
    {
      v26 = 539LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v25);
LABEL_48:
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v56);
      Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v57);
      goto LABEL_49;
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v56);
    v25 = CMarshaledInterface::_Unmarshal(
            (struct CMultitaskingViewServiceProvider::INIT_THREAD_DATA *)((char *)this + 136),
            &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
            (void **)&v56,
            0);
    v3 = v25;
    if ( v25 < 0 )
    {
      v26 = 540LL;
      goto LABEL_41;
    }
    v52 = 0LL;
    v51 = 0LL;
    v50 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v27, 3u, v28);
    v55 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
    v29 = CMultitaskingViewManager_CreateInstance(
            v54,
            v49,
            v48,
            v47,
            v46,
            v45,
            v44,
            v43,
            v42,
            v41,
            v40,
            v39,
            v38,
            v37,
            v36,
            v35,
            v57,
            v56,
            v34,
            v33,
            v51,
            v50,
            v52,
            v32,
            &v55);
    v3 = v29;
    if ( v29 >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(struct IMultitaskingViewServiceProvider *, void *))(*(_QWORD *)v54 + 24LL))(
              v54,
              v55);
      v3 = v29;
      if ( v29 >= 0 )
      {
LABEL_47:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v55);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v50);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v51);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
        goto LABEL_48;
      }
      v30 = 581LL;
    }
    else
    {
      v30 = 578LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_47;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F0,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
    (const char *)(unsigned int)v2);
LABEL_66:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v54);
  return v3;
}
