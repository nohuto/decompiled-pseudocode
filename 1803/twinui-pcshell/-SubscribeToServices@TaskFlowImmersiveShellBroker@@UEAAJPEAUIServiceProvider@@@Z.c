/*
 * XREFs of ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A7350
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A64B8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowAFCIndexer@@@wil@@CAX_NW4Rep.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A651C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport@@@.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rdx
  bool v4; // di
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  hKey = 0LL;
  v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\TaskFlowDataEngine", 0, 0x20019u, &hKey) == 0;
  if ( hKey )
    RegCloseKey(hKey);
  if ( v4 )
  {
    v5 = TaskFlowImmersiveShellBroker::ReinitializeObjects((TaskFlowImmersiveShellBroker *)((char *)this - 80), v3);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        175LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v5);
    *((_DWORD *)this + 30) = 1;
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowAFCIndexer>::ReportUsageToService(v6, 3u, v7);
    wil::Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>::ReportUsageToService(v8, 3u, v9);
  }
  return 0LL;
}
