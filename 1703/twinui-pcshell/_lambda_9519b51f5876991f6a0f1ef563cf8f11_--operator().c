/*
 * XREFs of _lambda_9519b51f5876991f6a0f1ef563cf8f11_::operator() @ 0x1800D3B60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9519b51f5876991f6a0f1ef563cf8f11___::Run @ 0x1800D54B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9519b51f5876991f6a0f1ef563cf8f11___--Run.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800D4448 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800D45C8 (-StartUserPresenceListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800D4700 (-StartAppViewTitleChangeListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4CAC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 *     ??$ActivateInstance@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800D519C (--$ActivateInstance@V-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D5350 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaCon.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_9519b51f5876991f6a0f1ef563cf8f11_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  HRESULT v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // r15
  HRESULT v8; // eax
  int ActivationFactory; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  int started; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  int v20; // [rsp+38h] [rbp-38h]
  __int16 v21; // [rsp+3Ch] [rbp-34h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 0;
  LODWORD(v19) = 0;
  WORD2(v19) = v21;
  v20 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    0,
    3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 0;
  LODWORD(v19) = 0;
  WORD2(v19) = v21;
  v20 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    0,
    3);
  v2 = *(_QWORD *)(a1 + 8);
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Shell.TaskFlow.DataEngine.TaskDataArbiter",
         0x3Au,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    __debugbreak();
  }
  v4 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>>(
         string,
         v2 + 144);
  if ( v4 < 0 )
  {
    v5 = 88LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v19 = 0LL;
  string = 0LL;
  v8 = WindowsCreateStringReference(
         L"Windows.Internal.Shell.TaskFlow.DataEngine.AppViewListener",
         0x3Au,
         &hstringHeader,
         &string);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
    JUMPOUT(0x1800D3EC0LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_8b78226f_0431_4f5d_9ae1_5040c0215993, &v19);
  string = 0LL;
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 252LL;
    goto LABEL_12;
  }
  v12 = v19;
  v13 = (_QWORD *)(v7 + 152);
  v14 = *(_QWORD *)(v7 + 152);
  if ( v14 )
  {
    *v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 48LL))(
                        v12,
                        *(_QWORD *)(v7 + 144),
                        v7 + 152);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 253LL;
    goto LABEL_12;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 48LL))(*v13);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v10 = 254LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_23;
  }
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v4 = 0;
LABEL_23:
  if ( v4 < 0 )
  {
    v5 = 93LL;
    goto LABEL_8;
  }
  started = TaskFlowImmersiveShellBroker::StartAppActivitySessionListener(*(TaskFlowImmersiveShellBroker **)(a1 + 8));
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x60,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)started);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 0;
  LODWORD(v19) = 0;
  WORD2(v19) = v21;
  v20 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
    0x867C75u,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    0,
    3);
  v17 = TaskFlowImmersiveShellBroker::StartUserPresenceListener(*(TaskFlowImmersiveShellBroker **)(a1 + 8));
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v17);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetCachedFeatureEnabledState();
  LOBYTE(v21) = 0;
  LODWORD(v19) = 0;
  WORD2(v19) = v21;
  v20 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineCortanaConvergence>::GetFeaturePropertyCache'::`2'::data,
    0x891693u,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    0,
    3);
  v18 = TaskFlowImmersiveShellBroker::StartAppViewTitleChangeListener(*(TaskFlowImmersiveShellBroker **)(a1 + 8));
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v18);
  *(_BYTE *)(*(_QWORD *)(a1 + 8) + 212LL) = 0;
  return 0LL;
}
