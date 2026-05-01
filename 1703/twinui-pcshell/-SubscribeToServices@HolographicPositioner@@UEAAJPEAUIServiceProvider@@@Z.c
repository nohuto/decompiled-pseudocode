/*
 * XREFs of ?SubscribeToServices@HolographicPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D7770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180074858 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CB5C8 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 *     ??$make_wnf_subscription_nothrow@W4ShellState@Holographic@Shell@Internal@Windows@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4ShellState@Holographic@Shell@Internal@Windows@@@Z@wistd@@K@Z @ 0x1800DE468 (--$make_wnf_subscription_nothrow@W4ShellState@Holographic@Shell@Internal@Windows@@@wil@@YA-AV-$u.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  void (__fastcall ***v18)(_QWORD, __int64); // [rsp+38h] [rbp-79h] BYREF
  int v19; // [rsp+40h] [rbp-71h]
  __int16 v20; // [rsp+44h] [rbp-6Dh]
  __int64 v21; // [rsp+50h] [rbp-61h]
  _QWORD v22[13]; // [rsp+58h] [rbp-59h] BYREF
  _QWORD *v23; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v21 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  v19 = 0;
  LOBYTE(v20) = 3;
  LODWORD(v18) = 0;
  WORD2(v18) = v20;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
    0x88518Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v18,
    1,
    3);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
         &GUID_90dcc0b6_b98f_4554_aa41_ac5e28ba0261,
         (char *)this + 160);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v5);
  v6 = *((_QWORD *)this + 44);
  if ( v6 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
         &GUID_dd621a70_9d93_4d88_8e1c_8b8412f81664,
         (char *)this + 352);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x154,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
  lpVtbl = a2->lpVtbl;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 19);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))lpVtbl->QueryService)(
          a2,
          &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
          &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
          v9);
  if ( v10 < 0 )
  {
    v11 = 342LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 19) + 88LL))(
          *((_QWORD *)this + 19),
          -(__int64)(this != (HolographicPositioner *)40) & ((unsigned __int64)this + 120),
          (char *)this + 168);
  if ( v10 < 0 )
  {
    v11 = 343LL;
    goto LABEL_13;
  }
  v13 = a2->lpVtbl;
  v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)this + 22);
  v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))v13->QueryService)(
          a2,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
          v14);
  if ( v10 < 0 )
  {
    v11 = 345LL;
    goto LABEL_13;
  }
  v22[0] = off_1801B25E0;
  v22[1] = (char *)this - 40;
  v23 = v22;
  v16 = (_QWORD *)wil::make_wnf_subscription_nothrow<enum Windows::Internal::Shell::Holographic::ShellState>(
                    &v18,
                    v15,
                    v22);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    (void (__fastcall ****)(_QWORD, __int64))this + 45,
    v16);
  if ( v18 )
    (**v18)(v18, 1LL);
  if ( v23 )
  {
    v17 = v22;
    LOBYTE(v17) = v23 != v22;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 24LL))(v23, v17);
    v23 = 0LL;
  }
  return 0LL;
}
