/*
 * XREFs of ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A3F28
 * Callers:
 *     ?GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManager@Activities@Data@Internal@Windows@@@Z @ 0x1801A54D0 (-GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManag.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801A16A8 (--$ActivateInstance@UIViewActiveActivityManager@Activities@Data@Internal@Windows@@@wil@@YA-AV-$c.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *active; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    if ( !*((_QWORD *)this + 33) )
    {
      active = (__int64 *)wil::ActivateInstance<Windows::Internal::Data::Activities::IViewActiveActivityManager>((__int64)&v12);
      v6 = *active;
      *active = 0LL;
      v7 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = v6;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v12);
    }
    v8 = *((_QWORD *)this + 26);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 88LL))(v8, *((_QWORD *)this + 33));
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          659LL,
          (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v9);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x297,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           a4);
  }
  return result;
}
