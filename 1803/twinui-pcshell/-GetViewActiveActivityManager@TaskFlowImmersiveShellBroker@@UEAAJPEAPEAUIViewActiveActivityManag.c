/*
 * XREFs of ?GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManager@Activities@Data@Internal@Windows@@@Z @ 0x1801A54D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A3F28 (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetViewActiveActivityManager(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **a2,
        __int64 a3,
        const char *a4)
{
  int active; // eax
  const char *v7; // r9
  struct Windows::Internal::Data::Activities::IViewActiveActivityManager *v8; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    *a2 = 0LL;
    active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(
               (TaskFlowImmersiveShellBroker *)((char *)this - 24),
               (__int64)a2,
               a3,
               a4);
    if ( active < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        369LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    v8 = (struct Windows::Internal::Data::Activities::IViewActiveActivityManager *)*((_QWORD *)this + 30);
    if ( v8 )
    {
      *a2 = v8;
      (*(void (__fastcall **)(struct Windows::Internal::Data::Activities::IViewActiveActivityManager *))(*(_QWORD *)v8 + 8LL))(v8);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x176,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v7);
  }
  return result;
}
