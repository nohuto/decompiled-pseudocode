/*
 * XREFs of ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1800F6FC8
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F86E0 (-CreateInstance@-$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800F7FFC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::RuntimeClassInitialize(TaskFlowImmersiveShellBroker *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int16 v4; // [rsp+34h] [rbp-3Ch]
  int v5; // [rsp+38h] [rbp-38h] BYREF
  __int16 v6; // [rsp+3Ch] [rbp-34h]
  __int128 v7; // [rsp+40h] [rbp-30h] BYREF
  __int64 v8; // [rsp+50h] [rbp-20h]
  __int64 v9; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v8 = 0LL;
  v7 = *(_OWORD *)&SID_TaskFlowImmersiveShellBroker.Revision;
  v9 = 0LL;
  v1 = CImmersiveShellComponent::RegisterServiceInformation(
         (TaskFlowImmersiveShellBroker *)((char *)this + 64),
         (__int64)&v7,
         1uLL);
  v2 = v1;
  if ( v1 >= 0 )
  {
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
    LOBYTE(v4) = 0;
    v5 = 3;
    v6 = v4;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
      0x867C75u,
      (const struct FEATURE_LOGGED_TRAITS *)&v5,
      0,
      3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2D,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v1);
    return v2;
  }
}
