/*
 * XREFs of ?FlushShellActivities@TaskFlowImmersiveShellBroker@@UEAAJXZ @ 0x1800D41A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180004774 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x180097BC0 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800D4E0C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineMaster@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::FlushShellActivities(TaskFlowImmersiveShellBroker *this, __int64 a2)
{
  wil::details_abi *v3; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v5; // rdi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int16 v10; // [rsp+34h] [rbp-3Ch]
  int v11[2]; // [rsp+40h] [rbp-30h] BYREF
  int v12; // [rsp+48h] [rbp-28h]
  int v13; // [rsp+4Ch] [rbp-24h]
  unsigned int v14[2]; // [rsp+50h] [rbp-20h] BYREF
  const char *v15; // [rsp+58h] [rbp-18h]
  __int64 v16; // [rsp+60h] [rbp-10h]
  __int16 v17; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  int v19; // [rsp+90h] [rbp+20h] BYREF
  __int16 v20; // [rsp+94h] [rbp+24h]

  *(_QWORD *)v14 = retaddr;
  v17 = 191;
  v15 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v16 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetCachedFeatureEnabledState(this, a2);
  LOBYTE(v10) = 3;
  v19 = 0;
  v20 = v10;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineMaster>::GetFeaturePropertyCache'::`2'::data,
    0x867C5Eu,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    1,
    3);
  LOBYTE(v3) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v3);
  *(_QWORD *)v11 = ThreadLocalDataCache;
  v5 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v13 = *((_DWORD *)ThreadLocalDataCache + 4);
    v5 = *(struct wil::details_abi::ThreadLocalData **)v11;
    v12 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v12;
  }
  if ( *((_BYTE *)this + 196) )
  {
    v6 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
  }
  else
  {
    v7 = *((_QWORD *)this + 16);
    if ( v7 && (v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7), v6 = v8, v8 < 0) )
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xC4,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v8);
    else
      v6 = 0;
    if ( v6 >= 0 )
      goto LABEL_13;
  }
  wil::details::ReportFeatureError(
    (wil::details *)(unsigned int)v6,
    (__int64)v11,
    (struct wil::ThreadErrorContext *)0x867C5E,
    (__int64)v14);
LABEL_13:
  if ( v5 )
    *((_DWORD *)v5 + 4) = v13;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xC9,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
