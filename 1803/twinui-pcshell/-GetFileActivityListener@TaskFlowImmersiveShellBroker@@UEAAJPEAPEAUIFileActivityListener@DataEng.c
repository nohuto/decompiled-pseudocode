/*
 * XREFs of ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1801A4EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18008A018 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18009CBFC (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetFileActivityListener(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **a2)
{
  struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **v2; // rdi
  int v4; // ebx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **); // rcx
  int v6; // eax
  int v8[2]; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+2Ch] [rbp-2Ch]
  _QWORD v10[3]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v11; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a2 = 0LL;
  v2 = a2;
  v10[2] = 0LL;
  LOBYTE(a2) = 3;
  v10[0] = retaddr;
  v10[1] = "pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp";
  v11 = 309;
  wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(this, a2);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v8);
  if ( *((_DWORD *)this + 46) == 1 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **))*((_QWORD *)this + 27);
    if ( v5 && (v6 = (**v5)(v5, &GUID_03f8c745_6420_49df_a9f4_f05fd7d1c940, v2), v4 = v6, v6 < 0) )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13B,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v6);
    else
      v4 = 0;
    if ( v4 >= 0 )
      goto LABEL_9;
  }
  else
  {
    v4 = -2147467260;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)0x80004004LL);
  }
  wil::details::ReportFeatureError(
    (wil::details *)(unsigned int)v4,
    (__int64)v8,
    (struct wil::ThreadErrorContext *)0x867C75,
    (__int64)v10);
LABEL_9:
  if ( *(_QWORD *)v8 )
    *(_DWORD *)(*(_QWORD *)v8 + 16LL) = v9;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x13F,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
