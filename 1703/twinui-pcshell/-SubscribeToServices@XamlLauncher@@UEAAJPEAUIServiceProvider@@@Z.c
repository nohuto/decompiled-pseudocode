/*
 * XREFs of ?SubscribeToServices@XamlLauncher@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014B500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIActiveZBandNotificationForMonitor@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024BF0 (-Release@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@U-$Implements@U-$.c)
 *     ??1?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180148064 (--1-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?Destroy@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18014E3C4 (-Destroy@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18014EA54 (-Stop@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18014F12C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment@.c)
 *     ??$Start@$$V@SubscribeToServices@StartWindowTelemetry@@SA?AV01@XZ @ 0x18014F690 (--$Start@$$V@SubscribeToServices@StartWindowTelemetry@@SA-AV01@XZ.c)
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x180151D40 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 *     ?SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z @ 0x180151F90 (-SetSite@ImmersiveMonitorHelper@@UEAAJPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlLauncher::SubscribeToServices(XamlLauncher *this, struct IServiceProvider *a2)
{
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v5; // rax
  int v6; // eax
  int v7; // edi
  __int64 v8; // rdx
  struct IXamlLauncherState *v9; // rdi
  volatile signed __int32 *v10; // rcx
  signed __int32 *v11; // rax
  signed __int32 *v12; // rbx
  signed __int32 v13; // eax
  unsigned __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v23; // [rsp+4Ch] [rbp-BCh]
  int v24; // [rsp+50h] [rbp-B8h]
  __int16 v25; // [rsp+54h] [rbp-B4h]
  signed __int32 *v26; // [rsp+60h] [rbp-A8h]
  signed __int32 *v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  _QWORD v29[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v28 = -2LL;
  StartWindowTelemetry::SubscribeToServices::Start<>((StartWindowTelemetry::SubscribeToServices *)v29);
  v21 = 0LL;
  lpVtbl = a2->lpVtbl;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))lpVtbl->QueryService)(
         a2,
         &SID_ImmersiveShellHookService,
         &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 470LL;
LABEL_28:
    v14 = (unsigned int)v6;
    goto LABEL_29;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64, unsigned __int64, char *))(*(_QWORD *)v21 + 24LL))(
         v21,
         &unk_1801D4510,
         1LL,
         ((unsigned __int64)this - 16) & -(__int64)(this != (XamlLauncher *)56),
         (char *)this + 76);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 473LL;
    goto LABEL_28;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment>::GetCachedFeatureEnabledState();
  v24 = 0;
  LOBYTE(v25) = 0;
  v22 = 0;
  v23 = v25;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_ShowStartOnUnlockExperiment>::GetFeaturePropertyCache'::`2'::data,
    0x71CB71u,
    (const struct FEATURE_LOGGED_TRAITS *)&v22,
    0,
    3);
  v9 = (struct IXamlLauncherState *)*((_QWORD *)this + 26);
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 7);
  if ( v10 )
  {
    *((_QWORD *)this + 7) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
  }
  *((_QWORD *)this + 7) = 0LL;
  v26 = 0LL;
  v11 = (signed __int32 *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  v27 = v11;
  if ( !v11 )
  {
    v7 = -2147024882;
LABEL_25:
    v14 = (unsigned int)v7;
    v8 = 481LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)v14);
    goto LABEL_38;
  }
  *(_QWORD *)v11 = &CWRLExecuteCommandBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)v11 + 1) = 0LL;
  v11[9] = 1;
  *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  *((_QWORD *)v11 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)v11 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil>,1,0>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v12 = &ImmersiveMonitorHelper::`vftable';
  *((_QWORD *)v12 + 2) = &ImmersiveMonitorHelper::`vftable'{for `IImmersiveMonitorNotification'};
  *((_QWORD *)v12 + 3) = &ImmersiveMonitorHelper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)v12 + 5) = 0LL;
  *((_QWORD *)v12 + 6) = 0LL;
  *((_QWORD *)v12 + 7) = 0LL;
  *((_QWORD *)v12 + 8) = 0LL;
  v26 = v12;
  v27 = 0LL;
  v7 = ImmersiveMonitorHelper::RuntimeClassInitialize((ImmersiveMonitorHelper *)v12, a2, v9);
  if ( v7 >= 0 )
  {
    if ( v12 )
    {
      do
        v13 = v12[9];
      while ( v13 != 0x7FFFFFFF && v13 != _InterlockedCompareExchange(v12 + 9, v13 + 1, v13) );
      v12 = v26;
    }
    *((_QWORD *)this + 7) = v12;
    if ( v12 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
    v7 = 0;
  }
  else if ( v12 )
  {
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
  }
  if ( v7 < 0 )
    goto LABEL_25;
  v6 = ImmersiveMonitorHelper::SetSite(*((ImmersiveMonitorHelper **)this + 7), (struct IUnknown *)this - 7);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 482LL;
    goto LABEL_28;
  }
  v20 = 0LL;
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 26))(
          *((_QWORD *)this + 26),
          &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352,
          &v20);
  v7 = v15;
  if ( v15 < 0 )
  {
    v16 = 484LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_36;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v20 + 24LL))(v20, a2);
  v7 = v15;
  if ( v15 < 0 )
  {
    v16 = 485LL;
    goto LABEL_34;
  }
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v29);
  v7 = 0;
LABEL_36:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_38:
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v29[0] = &StartWindowTelemetry::SubscribeToServices::`vftable';
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v29);
  wil::ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonStartTelemetryLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v29);
  return (unsigned int)v7;
}
