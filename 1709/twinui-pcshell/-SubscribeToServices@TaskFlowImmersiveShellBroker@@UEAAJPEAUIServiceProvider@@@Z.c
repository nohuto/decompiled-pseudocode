/*
 * XREFs of ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7400
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SubscribeToServicesHelper@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800F7094 (-SubscribeToServicesHelper@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TaskFlowImmersiveShellBroker::SubscribeToServicesHelper((TaskFlowImmersiveShellBroker *)((char *)this - 64));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
