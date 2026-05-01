/*
 * XREFs of ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1800D3674
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D5250 (-CreateInstance@-$SimpleClassFactory@VTaskFlowImmersiveShellBroker@@$0A@@WRL@Microsoft@@UEAAJPEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4E0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@w.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::RuntimeClassInitialize(TaskFlowImmersiveShellBroker *this)
{
  wil::details_abi *v2; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v4; // rdi
  int v5; // eax
  int v6; // ebx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  __int16 v9; // [rsp+3Ch] [rbp-15h]
  int v10; // [rsp+40h] [rbp-11h]
  __int16 v11; // [rsp+44h] [rbp-Dh]
  int v12[2]; // [rsp+50h] [rbp-1h] BYREF
  int v13; // [rsp+58h] [rbp+7h]
  int v14; // [rsp+5Ch] [rbp+Bh]
  unsigned int v15[2]; // [rsp+60h] [rbp+Fh] BYREF
  const char *v16; // [rsp+68h] [rbp+17h]
  __int64 v17; // [rsp+70h] [rbp+1Fh]
  __int16 v18; // [rsp+78h] [rbp+27h]
  __int128 v19; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+90h] [rbp+3Fh]
  __int64 v21; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  *(_QWORD *)v15 = retaddr;
  v16 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v17 = 0LL;
  v18 = 42;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetCachedFeatureEnabledState();
  LOBYTE(v11) = 3;
  v8 = 0;
  v9 = v11;
  v10 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data,
    0x867C5Eu,
    (const struct FEATURE_LOGGED_TRAITS *)&v8,
    1,
    3);
  LOBYTE(v2) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v2);
  *(_QWORD *)v12 = ThreadLocalDataCache;
  v4 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v14 = *((_DWORD *)ThreadLocalDataCache + 4);
    v4 = *(struct wil::details_abi::ThreadLocalData **)v12;
    v13 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v13;
  }
  v20 = 0LL;
  v19 = *(_OWORD *)&SID_TaskFlowImmersiveShellBroker.Revision;
  v21 = 0LL;
  v5 = CImmersiveShellComponent::RegisterServiceInformation(
         (TaskFlowImmersiveShellBroker *)((char *)this + 56),
         (__int64)&v19,
         1uLL);
  v6 = v5;
  if ( v5 >= 0 )
    v6 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x2C,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v5);
  if ( v6 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v6,
      (__int64)v12,
      (struct wil::ThreadErrorContext *)0x867C5E,
      (__int64)v15);
  if ( v4 )
    *((_DWORD *)v4 + 4) = v14;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x30,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
