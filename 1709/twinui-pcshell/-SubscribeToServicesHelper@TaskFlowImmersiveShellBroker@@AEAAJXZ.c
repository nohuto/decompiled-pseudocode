/*
 * XREFs of ?SubscribeToServicesHelper@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800F7094
 * Callers:
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7400 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z @ 0x1800DB5B4 (--$GetCortanaRegistrySetting@_N@CortanaRegistrySettings@@YAJPEBGP6A_NK@Z_NPEA_N3@Z.c)
 *     ?StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800F781C (-StartAppViewListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800F7954 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800F7A8C (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F7FFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F8144 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActivitiesInTaskView@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F828C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaCon.c)
 *     ??$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z @ 0x1800F84C4 (--$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800F862C (--$ActivateInstance@V-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServicesHelper(TaskFlowImmersiveShellBroker *this)
{
  bool v2; // bl
  bool v3; // si
  __int64 v4; // rdx
  int CortanaRegistry; // eax
  int v6; // ebx
  HRESULT v7; // eax
  int started; // ebx
  __int64 v9; // rdx
  int v11; // eax
  int v12; // eax
  bool v13[4]; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+34h] [rbp-3Ch]
  __int16 v15; // [rsp+38h] [rbp-38h]
  bool v16[4]; // [rsp+3Ch] [rbp-34h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  hKey = 0LL;
  v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\TaskFlowDataEngine", 0, 0x20019u, &hKey) == 0;
  if ( hKey )
    RegCloseKey(hKey);
  if ( v2 )
  {
    v16[0] = 0;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetCachedFeatureEnabledState();
    LOBYTE(v15) = 0;
    LODWORD(hKey) = 0;
    WORD2(hKey) = v15;
    v14 = 0;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_ActivitiesInTaskView>::GetFeaturePropertyCache'::`2'::data,
      0x8C7EE1u,
      (const struct FEATURE_LOGGED_TRAITS *)&hKey,
      0,
      3);
    v13[0] = 0;
    v3 = 0;
    CortanaRegistry = CortanaRegistrySettings::GetCortanaRegistrySetting<bool>(L"DeviceHistoryEnabled", v4, 0, v13);
    v6 = CortanaRegistry;
    if ( CortanaRegistry >= 0 )
    {
      v3 = v13[0];
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"internal\\onecoreuapshell\\inc\\cortanaregistrysettings.h",
        (const char *)(unsigned int)CortanaRegistry);
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD0,
        (__int64)"internal\\onecoreuapshell\\inc\\cortanahelp.h",
        (const char *)(unsigned int)v6);
    }
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v6);
    v16[0] = v3;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
    LOBYTE(v15) = 0;
    LODWORD(hKey) = 3;
    WORD2(hKey) = v15;
    v14 = 3;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
      0x867C75u,
      (const struct FEATURE_LOGGED_TRAITS *)&hKey,
      0,
      3);
    v13[0] = 0;
    TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool>(v16, v13);
    if ( v16[0] )
    {
      if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetCachedFeatureEnabledState();
      LOBYTE(v15) = 0;
      LODWORD(hKey) = 0;
      WORD2(hKey) = v15;
      v14 = 0;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data,
        0x891693u,
        (const struct FEATURE_LOGGED_TRAITS *)&hKey,
        0,
        3);
      string = 0LL;
      v7 = WindowsCreateStringReference(
             L"Windows.Internal.Shell.TaskFlow.DataEngine.TaskDataArbiter",
             0x3Au,
             &hstringHeader,
             &string);
      if ( v7 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
        JUMPOUT(0x1800F73F0LL);
      }
      started = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>>(
                  string,
                  (char *)this + 184);
      if ( started < 0 )
      {
        v9 = 103LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)started);
        return (unsigned int)started;
      }
      if ( !*((_QWORD *)this + 23) )
      {
        started = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x69,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)0x8000FFFFLL);
        return (unsigned int)started;
      }
      started = TaskFlowImmersiveShellBroker::StartAppViewListener(this);
      if ( started < 0 )
      {
        v9 = 108LL;
        goto LABEL_19;
      }
      if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
      LOBYTE(v15) = 0;
      LODWORD(hKey) = 3;
      WORD2(hKey) = v15;
      v14 = 3;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        0x867C75u,
        (const struct FEATURE_LOGGED_TRAITS *)&hKey,
        0,
        3);
      v11 = TaskFlowImmersiveShellBroker::StartUserPresenceListener(this);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x70,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v11);
      if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
        wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
      LOBYTE(v15) = 0;
      LODWORD(hKey) = 3;
      WORD2(hKey) = v15;
      v14 = 3;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        0x867C75u,
        (const struct FEATURE_LOGGED_TRAITS *)&hKey,
        0,
        3);
      v12 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(this);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v12);
      *((_BYTE *)this + 240) = 0;
    }
  }
  return 0LL;
}
