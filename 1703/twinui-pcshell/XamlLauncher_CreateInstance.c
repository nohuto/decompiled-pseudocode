/*
 * XREFs of XamlLauncher_CreateInstance @ 0x18014A3E0
 * Callers:
 *     ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18014A300 (-CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??0XamlLauncher@@QEAA@XZ @ 0x18014A594 (--0XamlLauncher@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveSessionIdleNotification@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014D990 (-Release@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@U-$I_ea_18014D990.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveLauncher@@UIImmersiveLauncherTrayNotify@@UIImmersiveSessionIdleNotification@@UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@VNil@Details@23@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18014DA40 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceLi_ea_18014DA40.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18014DBA0 (-Release@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIXamlLauncherSta.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18014F12C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment@.c)
 *     ??$Make@VXamlLauncherState@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VXamlLauncherState@@@12@XZ @ 0x18014F4D8 (--$Make@VXamlLauncherState@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VXamlLauncherState@@@12@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher_CreateInstance(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  XamlLauncher *v4; // rax
  __int64 v5; // rsi
  XamlLauncher *v6; // rbx
  __int64 v7; // rcx
  signed __int32 v8; // eax
  int Interface; // eax
  XamlLauncher *v10; // rcx
  __int16 v12; // [rsp+34h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v14; // [rsp+70h] [rbp+30h] BYREF
  __int16 v15; // [rsp+74h] [rbp+34h]
  XamlLauncher *v16; // [rsp+78h] [rbp+38h]
  __int64 v17; // [rsp+80h] [rbp+40h] BYREF

  *a1 = 0LL;
  Microsoft::WRL::Details::Make<XamlLauncherState>(&v17);
  v2 = v17;
  if ( v17 )
  {
    v16 = 0LL;
    v4 = (XamlLauncher *)operator new(0x110uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      v5 = v2 + 16;
      v6 = XamlLauncher::XamlLauncher(v4);
      if ( *((_QWORD *)v6 + 33) != v2 + 16 )
      {
        if ( v2 != -16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v2 + 16);
        v7 = *((_QWORD *)v6 + 33);
        *((_QWORD *)v6 + 33) = v5;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
      if ( (`wil::Feature<__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment>::GetCachedFeatureEnabledState();
      LOBYTE(v12) = 0;
      v14 = 0;
      v15 = v12;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment>::GetFeaturePropertyCache'::`2'::data,
        0x71CB71u,
        (const struct FEATURE_LOGGED_TRAITS *)&v14,
        0,
        3);
      if ( v6 )
      {
        do
          v8 = *((_DWORD *)v6 + 21);
        while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 21, v8 + 1, v8) );
        v2 = v17;
      }
      v16 = v6;
      if ( v6 )
      {
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveSessionIdleNotification,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
        v6 = v16;
      }
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveSessionIdleNotification,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    v6,
                    &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                    a1);
      v3 = Interface;
      if ( Interface < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x51,
          (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)Interface);
    }
    else
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x50,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)0x8007000ELL);
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveLauncher,IImmersiveLauncherTrayNotify,IImmersiveSessionIdleNotification,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
    }
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<IXamlLauncherState,Microsoft::WRL::Details::InterfaceList<IImmersiveLauncherCortana,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v2);
  }
  else
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)0x8007000ELL);
  }
  return v3;
}
