/*
 * XREFs of ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800FABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180077658 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DF850 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 *     ??$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x180104AFC (--$make_wnf_subscription_state@W4ShellState@Holographic@Shell@Internal@Windows@@@details@wil@@YA.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::SubscribeToServices(HolographicPositioner *this, struct IServiceProvider *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  struct IServiceProviderVtbl *lpVtbl; // rbx
  __int64 *v9; // rax
  int v10; // ebx
  __int64 v11; // rdx
  struct IServiceProviderVtbl *v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v22[13]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v23; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v21[1] = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  LODWORD(v20) = 0;
  BYTE4(v20) = 3;
  LODWORD(v21[0]) = 0;
  WORD2(v21[0]) = WORD2(v20);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
    0x88518Bu,
    (const struct FEATURE_LOGGED_TRAITS *)v21,
    1,
    3);
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
         &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
         (char *)this + 208);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x167,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
  v6 = *((_QWORD *)this + 50);
  if ( v6 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
         &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
         (char *)this + 400);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x168,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
  lpVtbl = a2->lpVtbl;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 25);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
          &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
          v9);
  if ( v10 < 0 )
  {
    v11 = 362LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 25) + 88LL))(
          *((_QWORD *)this + 25),
          -(__int64)(this != (HolographicPositioner *)48) & ((unsigned __int64)this + 144),
          (char *)this + 216);
  if ( v10 < 0 )
  {
    v11 = 363LL;
    goto LABEL_13;
  }
  v13 = a2->lpVtbl;
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 28);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v13->QueryService)(
          a2,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          v14);
  if ( v10 < 0 )
  {
    v11 = 365LL;
    goto LABEL_13;
  }
  v22[0] = off_180207480;
  v22[1] = (char *)this - 48;
  v23 = v22;
  v17 = wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::ShellState>(
          v15,
          v22,
          v16,
          &v20);
  v18 = 0LL;
  if ( v17 >= 0 )
    v18 = v20;
  v21[0] = v18;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (void (__fastcall ****)(_QWORD, __int64))this + 51,
    v21);
  if ( v21[0] )
    (**(void (__fastcall ***)(_QWORD, __int64))v21[0])(v21[0], 1LL);
  if ( v23 )
  {
    v19 = v22;
    LOBYTE(v19) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 24LL))(v23, v19);
    v23 = 0LL;
  }
  return 0LL;
}
