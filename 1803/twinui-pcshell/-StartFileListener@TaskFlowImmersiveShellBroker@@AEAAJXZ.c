/*
 * XREFs of ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A70F8
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_e597d3828395d9deb7c49889950b0259_::operator() @ 0x1801A3318 (_lambda_e597d3828395d9deb7c49889950b0259_--operator().c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::StartFileListener(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        __int64 a3)
{
  int v3; // eax
  int v4; // ebx
  int v6[2]; // [rsp+28h] [rbp-40h] BYREF
  int v7; // [rsp+34h] [rbp-34h]
  _QWORD v8[3]; // [rsp+38h] [rbp-30h] BYREF
  __int16 v9; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  TaskFlowImmersiveShellBroker *v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = this;
  v8[0] = retaddr;
  v8[1] = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v8[2] = 0LL;
  v9 = 576;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(
    (__int64)this,
    3u,
    a3);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v6);
  v3 = lambda_e597d3828395d9deb7c49889950b0259_::operator()((__int64 *)&v11);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v3,
      (__int64)v6,
      (struct wil::ThreadErrorContext *)0x867C75,
      (__int64)v8);
  if ( *(_QWORD *)v6 )
    *(_DWORD *)(*(_QWORD *)v6 + 16LL) = v7;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x251,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
