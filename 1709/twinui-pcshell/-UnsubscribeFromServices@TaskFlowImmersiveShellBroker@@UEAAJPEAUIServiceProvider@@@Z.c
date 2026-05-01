/*
 * XREFs of ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F7440
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::UnsubscribeFromServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 176) = 1;
  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v3 + 56LL))(v3, a2);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v4);
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      *((_QWORD *)this + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v6 + 56LL))(v6, a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8C,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v7);
    v8 = *((_QWORD *)this + 19);
    if ( v8 )
    {
      *((_QWORD *)this + 19) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = *((_QWORD *)this + 18);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v9 + 56LL))(v9, a2);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x92,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v10);
    v11 = *((_QWORD *)this + 18);
    if ( v11 )
    {
      *((_QWORD *)this + 18) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  v12 = *((_QWORD *)this + 17);
  if ( v12 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v12 + 56LL))(v12, a2);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v13);
    v14 = *((_QWORD *)this + 17);
    if ( v14 )
    {
      *((_QWORD *)this + 17) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  v15 = *((_QWORD *)this + 20);
  if ( v15 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v15 + 56LL))(v15, a2);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9E,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v16);
    v17 = *((_QWORD *)this + 20);
    if ( v17 )
    {
      *((_QWORD *)this + 20) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = *((_QWORD *)this + 21);
    if ( v18 )
    {
      *((_QWORD *)this + 21) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  v19 = *((_QWORD *)this + 15);
  if ( v19 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v19 + 80LL))(v19, a2);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA5,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v20);
    v21 = *((_QWORD *)this + 15);
    if ( v21 )
    {
      *((_QWORD *)this + 15) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
  }
  return 0LL;
}
