/*
 * XREFs of ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1801A6634
 * Callers:
 *     ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801A1FF8 (--$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010A094 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::RuntimeClassInitialize(TaskFlowImmersiveShellBroker *this)
{
  CImmersiveShellComponent *v1; // rsi
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // r8
  __int64 v5; // rdx
  int v7; // eax
  int v8[2]; // [rsp+28h] [rbp-29h] BYREF
  int v9; // [rsp+34h] [rbp-1Dh]
  unsigned int v10[2]; // [rsp+38h] [rbp-19h] BYREF
  const char *v11; // [rsp+40h] [rbp-11h]
  __int64 v12; // [rsp+48h] [rbp-9h]
  __int16 v13; // [rsp+50h] [rbp-1h]
  __int64 v14; // [rsp+58h] [rbp+7h]
  __int128 v15; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  __int64 v17; // [rsp+78h] [rbp+27h]
  __int128 v18; // [rsp+80h] [rbp+2Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+3Fh]
  __int64 v20; // [rsp+98h] [rbp+47h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v14 = -2LL;
  v15 = *(_OWORD *)&SID_TaskFlowImmersiveShellBroker.Revision;
  v16 = 0LL;
  v17 = 0LL;
  v1 = (TaskFlowImmersiveShellBroker *)((char *)this + 80);
  v3 = CImmersiveShellComponent::RegisterServiceInformation(
         (TaskFlowImmersiveShellBroker *)((char *)this + 80),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v15,
         1LL);
  if ( v3 < 0 )
  {
    v5 = 49LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  *(_QWORD *)v10 = retaddr;
  v11 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v12 = 0LL;
  v13 = 51;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(v2, 3u, v4);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v8);
  v18 = *(_OWORD *)&SID_TaskFlowUserActivityMonitor.Revision;
  v19 = 0LL;
  v20 = 0LL;
  v7 = CImmersiveShellComponent::RegisterServiceInformation(
         v1,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v18,
         1LL);
  v3 = v7;
  if ( v7 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v7);
  if ( v3 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v3,
      (__int64)v8,
      (struct wil::ThreadErrorContext *)0x867C75,
      (__int64)v10);
  if ( *(_QWORD *)v8 )
    *(_DWORD *)(*(_QWORD *)v8 + 16LL) = v9;
  if ( v3 < 0 )
  {
    v5 = 57LL;
    goto LABEL_3;
  }
  return 0LL;
}
