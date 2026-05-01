/*
 * XREFs of ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800611F0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     _lambda_d6636672e4e13f4147f7fcd674189ce6_::operator() @ 0x18008EF68 (_lambda_d6636672e4e13f4147f7fcd674189ce6_--operator().c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A4B80 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 TaskFlowImmersiveShellBroker::SessionDisposed(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  bool v4; // dl
  wil::details_abi *v5; // rcx
  struct wil_details_RecordUsageResult *v6; // r9
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v8; // rbx
  int v9; // eax
  int v10; // edi
  struct DiagnosticsInfo *v12; // [rsp+28h] [rbp-E0h]
  __int16 v13; // [rsp+5Ch] [rbp-ACh]
  int v14; // [rsp+60h] [rbp-A8h] BYREF
  int v15; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v16; // [rsp+6Ch] [rbp-9Ch]
  struct wil::details_abi::ThreadLocalData *v17; // [rsp+70h] [rbp-98h] BYREF
  int v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+7Ch] [rbp-8Ch]
  _QWORD v20[3]; // [rsp+80h] [rbp-88h] BYREF
  __int16 v21; // [rsp+98h] [rbp-70h]
  _QWORD v22[9]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v23[24]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v24[2]; // [rsp+100h] [rbp-8h] BYREF
  int v25; // [rsp+110h] [rbp+8h]
  int v26; // [rsp+114h] [rbp+Ch]
  __int128 v27; // [rsp+118h] [rbp+10h] BYREF
  __int64 v28; // [rsp+128h] [rbp+20h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]
  __int64 v30; // [rsp+170h] [rbp+68h] BYREF
  __int64 v31; // [rsp+180h] [rbp+78h] BYREF
  va_list va; // [rsp+180h] [rbp+78h]
  __int64 v33; // [rsp+188h] [rbp+80h] BYREF
  va_list va1; // [rsp+188h] [rbp+80h]
  __int64 v35; // [rsp+190h] [rbp+88h]
  __int64 v36; // [rsp+198h] [rbp+90h] BYREF
  va_list va2; // [rsp+198h] [rbp+90h]
  va_list va3; // [rsp+1A0h] [rbp+98h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v33 = va_arg(va2, _QWORD);
  v35 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v36 = va_arg(va3, _QWORD);
  v30 = a2;
  v22[8] = -2LL;
  v22[0] = a1;
  v22[1] = &v30;
  v22[2] = a3;
  va_copy((va_list)&v22[3], va);
  va_copy((va_list)&v22[4], va1);
  v22[5] = v35;
  va_copy((va_list)&v22[6], va2);
  va_copy((va_list)&v22[7], va3);
  v20[0] = retaddr;
  v20[1] = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v20[2] = 0LL;
  v21 = 420;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v13) = 3;
  v15 = 4;
  v16 = v13;
  v14 = 3;
  v3 = wil_details_RecordUsageInPropertyCache(
         (__int64)v23,
         (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
         2,
         0,
         1u);
  v27 = *(_OWORD *)v3;
  v28 = *(_QWORD *)(v3 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x867C75,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v27,
        v6);
    else
      g_wil_details_recordFeatureUsage(
        0x867C75u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v27);
    v5 = (wil::details_abi *)`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v24[0] = 0LL;
      v25 = 0;
      v24[1] = 2LL;
      v26 = (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(8813685LL, 0LL, v24);
    }
  }
  if ( !(_DWORD)v28 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x867C75u,
      (const struct FEATURE_LOGGED_TRAITS *)&v15,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v14,
      0LL,
      0,
      1uLL);
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5, v4);
  v8 = ThreadLocalDataCache;
  v17 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v19 = *((_DWORD *)ThreadLocalDataCache + 4);
    v18 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v18;
    v8 = v17;
  }
  v9 = lambda_d6636672e4e13f4147f7fcd674189ce6_::operator()(v22);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v9,
      (int)&v17,
      (struct wil::ThreadErrorContext *)0x867C75,
      (unsigned int)v20,
      v12);
    v8 = v17;
  }
  if ( v8 )
    *((_DWORD *)v8 + 4) = v19;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B9,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v10,
    (int)v12);
  return (unsigned int)v10;
}
