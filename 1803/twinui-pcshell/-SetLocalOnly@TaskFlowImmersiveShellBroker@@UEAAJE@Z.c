/*
 * XREFs of ?SetLocalOnly@TaskFlowImmersiveShellBroker@@UEAAJE@Z @ 0x1801A6AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_dfab61fbb6f6e26ab66a09ddb37f2399_::operator() @ 0x1801A3250 (_lambda_dfab61fbb6f6e26ab66a09ddb37f2399_--operator().c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::SetLocalOnly(TaskFlowImmersiveShellBroker *this, char a2, __int64 a3)
{
  int v3; // eax
  int v4; // ebx
  int v6[2]; // [rsp+28h] [rbp-48h] BYREF
  int v7; // [rsp+34h] [rbp-3Ch]
  _BYTE *v8[2]; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v9[2]; // [rsp+48h] [rbp-28h] BYREF
  const char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  __int16 v12; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  char v14; // [rsp+88h] [rbp+18h] BYREF

  v14 = a2;
  v8[0] = this;
  v8[1] = &v14;
  *(_QWORD *)v9 = retaddr;
  v10 = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v11 = 0LL;
  v12 = 448;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(
    (__int64)this,
    3u,
    a3);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v6);
  v3 = lambda_dfab61fbb6f6e26ab66a09ddb37f2399_::operator()(v8);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v3,
      (__int64)v6,
      (struct wil::ThreadErrorContext *)0x867C75,
      (__int64)v9);
  if ( *(_QWORD *)v6 )
    *(_DWORD *)(*(_QWORD *)v6 + 16LL) = v7;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1CC,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
