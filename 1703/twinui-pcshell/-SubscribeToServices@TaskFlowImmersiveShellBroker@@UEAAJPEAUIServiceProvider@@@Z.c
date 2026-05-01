/*
 * XREFs of ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800D37F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_3b055fef70a16d7474f5e228489e7e4c_::operator() @ 0x1800D3900 (_lambda_3b055fef70a16d7474f5e228489e7e4c_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4E0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@w.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  wil::details_abi *v2; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v4; // rbx
  int v5; // eax
  int v6; // edi
  __int16 v8; // [rsp+34h] [rbp-3Ch]
  int v9[2]; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  unsigned int v12[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]
  __int16 v15; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v17; // [rsp+90h] [rbp+20h] BYREF
  __int16 v18; // [rsp+94h] [rbp+24h]
  char *v19; // [rsp+A0h] [rbp+30h] BYREF

  v19 = (char *)this - 56;
  *(_QWORD *)v12 = retaddr;
  v15 = 55;
  v13 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v14 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetCachedFeatureEnabledState(this, a2);
  LOBYTE(v8) = 3;
  v17 = 0;
  v18 = v8;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data,
    0x867C5Eu,
    (const struct FEATURE_LOGGED_TRAITS *)&v17,
    1,
    3);
  LOBYTE(v2) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v2);
  *(_QWORD *)v9 = ThreadLocalDataCache;
  v4 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v11 = *((_DWORD *)ThreadLocalDataCache + 4);
    v4 = *(struct wil::details_abi::ThreadLocalData **)v9;
    v10 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v10;
  }
  v5 = lambda_3b055fef70a16d7474f5e228489e7e4c_::operator()(&v19);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v5,
      (__int64)v9,
      (struct wil::ThreadErrorContext *)0x867C5E,
      (__int64)v12);
  if ( v4 )
    *((_DWORD *)v4 + 4) = v11;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x6D,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
