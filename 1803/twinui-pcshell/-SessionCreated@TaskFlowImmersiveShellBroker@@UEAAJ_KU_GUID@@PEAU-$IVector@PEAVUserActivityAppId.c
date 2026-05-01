/*
 * XREFs of ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800613C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180061150 (-TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180087200 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1801A4048 (-FailedToRetreiveWindowHandle@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1801A4B80 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskFlowImmersiveShellBroker::SessionCreated(
        TaskFlowImmersiveShellBroker *this,
        HWND a2,
        __int128 *a3,
        __int64 a4,
        struct DiagnosticsInfo *a5,
        __int128 *a6)
{
  __int64 v6; // r15
  HWND v8; // rdi
  __int64 v10; // rax
  bool v11; // dl
  wil::details_abi *v12; // rcx
  struct wil_details_RecordUsageResult *v13; // r9
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v15; // rsi
  __int64 v16; // rbx
  int ApplicationViewViewIdForCoreWindow; // eax
  int v18; // edi
  __int64 v20; // rdx
  struct DiagnosticsInfo *v21; // [rsp+28h] [rbp-E0h]
  __int16 v22; // [rsp+5Ch] [rbp-ACh]
  struct wil::details_abi::ThreadLocalData *v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+68h] [rbp-A0h]
  int v25; // [rsp+6Ch] [rbp-9Ch]
  int v26; // [rsp+70h] [rbp-98h] BYREF
  int v27; // [rsp+78h] [rbp-90h] BYREF
  __int16 v28; // [rsp+7Ch] [rbp-8Ch]
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v31[2]; // [rsp+90h] [rbp-78h] BYREF
  const char *v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int16 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-50h]
  __int128 v37; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v38[24]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v39[2]; // [rsp+F0h] [rbp-18h] BYREF
  int v40; // [rsp+100h] [rbp-8h]
  int v41; // [rsp+104h] [rbp-4h]
  __int128 v42; // [rsp+108h] [rbp+0h] BYREF
  __int64 v43; // [rsp+118h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v35 = -2LL;
  v6 = a4;
  v8 = a2;
  *(_QWORD *)v31 = retaddr;
  v32 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v33 = 0LL;
  v34 = 385;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetCachedFeatureEnabledState();
  LOBYTE(v22) = 3;
  v27 = 4;
  v28 = v22;
  v26 = 3;
  v10 = wil_details_RecordUsageInPropertyCache(
          (__int64)v38,
          (volatile signed __int32 *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
          2,
          0,
          1u);
  v42 = *(_OWORD *)v10;
  v43 = *(_QWORD *)(v10 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0x867C75,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v42,
        v13);
    else
      g_wil_details_recordFeatureUsage(
        0x867C75u,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v42);
    v12 = (wil::details_abi *)`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v39[0] = 0LL;
      v40 = 0;
      v39[1] = 2LL;
      v41 = (`wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(8813685LL, 0LL, v39);
    }
  }
  if ( !(_DWORD)v43 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0x867C75u,
      (const struct FEATURE_LOGGED_TRAITS *)&v27,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v26,
      0LL,
      0,
      1uLL);
  LOBYTE(v12) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v12, v11);
  v15 = ThreadLocalDataCache;
  v23 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v25 = *((_DWORD *)ThreadLocalDataCache + 4);
    v24 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v24;
    v6 = a4;
    v8 = a2;
    v15 = v23;
  }
  if ( *((_DWORD *)this + 50) == 1 )
  {
    v16 = *((_QWORD *)this + 32);
    v29 = v16;
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      ApplicationViewViewIdForCoreWindow = TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
                                             this,
                                             v8,
                                             (HWND *)&v30);
      v18 = ApplicationViewViewIdForCoreWindow;
      if ( ApplicationViewViewIdForCoreWindow < 0 )
      {
        v20 = 394LL;
      }
      else
      {
        if ( !v30 )
        {
          TaskFlowDataEngineTelemetry::FailedToRetreiveWindowHandle();
          _InterlockedIncrement((volatile signed __int32 *)&ListenerTelemetryReport::m_knownFailureCounter);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          v18 = 0;
          goto LABEL_29;
        }
        v36 = *a6;
        v37 = *a3;
        v21 = a5;
        ApplicationViewViewIdForCoreWindow = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int128 *, __int64))(**((_QWORD **)this + 32) + 48LL))(
                                               *((_QWORD *)this + 32),
                                               v30,
                                               &v37,
                                               v6);
        v18 = ApplicationViewViewIdForCoreWindow;
        if ( ApplicationViewViewIdForCoreWindow >= 0 )
          goto LABEL_16;
        v20 = 402LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)ApplicationViewViewIdForCoreWindow,
        (int)v21);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      goto LABEL_19;
    }
LABEL_16:
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v18 = 0;
LABEL_19:
    if ( v18 >= 0 )
      goto LABEL_20;
    goto LABEL_28;
  }
  v18 = -2147467260;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x184,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)0x80004004LL,
    (int)v21);
LABEL_28:
  wil::details::ReportFeatureError(
    (wil::details *)(unsigned int)v18,
    (int)&v23,
    (struct wil::ThreadErrorContext *)0x867C75,
    (unsigned int)v31,
    v21);
LABEL_29:
  v15 = v23;
LABEL_20:
  if ( v15 )
    *((_DWORD *)v15 + 4) = v25;
  if ( v18 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v18,
    (int)v21);
  return (unsigned int)v18;
}
