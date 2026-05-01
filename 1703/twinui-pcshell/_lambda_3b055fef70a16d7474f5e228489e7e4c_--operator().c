/*
 * XREFs of _lambda_3b055fef70a16d7474f5e228489e7e4c_::operator() @ 0x1800D3900
 * Callers:
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D37F0 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@QEAA@XZ @ 0x180023048 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@VNil@D.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z @ 0x18009E2C0 (--$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4CAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 *     ??$PoliciesFeaturesState@AEA_N_N@TaskFlowDataEngineTelemetry@@SAXAEA_N$$QEA_N@Z @ 0x1800D5034 (--$PoliciesFeaturesState@AEA_N_N@TaskFlowDataEngineTelemetry@@SAXAEA_N$$QEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_3b055fef70a16d7474f5e228489e7e4c_::operator()(struct IUnknownVtbl **a1)
{
  __int64 v2; // rdx
  bool v3; // bl
  char v5; // di
  int CortanaRegistry; // eax
  int v7; // ebx
  struct IUnknownVtbl *v8; // rbx
  struct IUnknownVtbl *v9; // r15
  struct IUnknownVtbl *v10; // r14
  IUnknown *v11; // rdi
  int Release; // r12d
  IUnknown *v13; // rax
  IUnknown *v14; // rsi
  int v15; // esi
  int v16; // [rsp+30h] [rbp-10h] BYREF
  __int16 v17; // [rsp+34h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  HKEY hKey; // [rsp+80h] [rbp+40h] BYREF
  char v20; // [rsp+88h] [rbp+48h] BYREF

  hKey = 0LL;
  v3 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\TaskFlowDataEngine", 0, 0x20019u, &hKey) == 0;
  if ( hKey )
    RegCloseKey(hKey);
  if ( !v3 )
    return 0LL;
  v20 = 0;
  LOBYTE(hKey) = 0;
  v5 = 0;
  CortanaRegistry = CortanaRegistrySettings::GetCortanaRegistrySetting<bool>(
                      L"DeviceHistoryEnabled",
                      v2,
                      0,
                      (bool *)&hKey);
  v7 = CortanaRegistry;
  if ( CortanaRegistry >= 0 )
  {
    v5 = (char)hKey;
    v7 = 0;
    v20 = (char)hKey;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD8,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
      (const char *)(unsigned int)CortanaRegistry);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x73,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanahelp.h",
      (const char *)(unsigned int)v7);
  }
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v7);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v17) = 0;
  LODWORD(hKey) = 0;
  WORD2(hKey) = v17;
  v16 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&hKey,
    0,
    3);
  LOBYTE(hKey) = 0;
  TaskFlowDataEngineTelemetry::PoliciesFeaturesState<bool &,bool>(&v20, &hKey);
  if ( !v5 )
    return 0LL;
  v8 = *a1;
  if ( *a1 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v8->QueryInterface + 1))(*a1);
  v9 = *a1;
  v10 = v8;
  if ( v8 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v8->QueryInterface + 1))(v8);
  v11 = 0LL;
  Release = (int)(*a1)[8].Release;
  v13 = (IUnknown *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v13;
  if ( v13 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)v13);
    v14->lpVtbl = (struct IUnknownVtbl *)off_1801B2480;
    v14[2].lpVtbl = 0LL;
    if ( &v14[2] != (IUnknown *)&v16 )
    {
      v14[2].lpVtbl = v8;
      v10 = 0LL;
    }
    v14[3].lpVtbl = v9;
    v11 = v14;
  }
  v15 = Windows::Internal::ComTaskPool::RunTask(0, 2u, Release, 0, v11, 0LL);
  if ( v11 )
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  if ( v10 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v10->QueryInterface + 2))(v10);
  if ( v15 >= 0 )
    v15 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6A,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v15);
  if ( v8 )
    (*((void (__fastcall **)(struct IUnknownVtbl *))v8->QueryInterface + 2))(v8);
  return (unsigned int)v15;
}
