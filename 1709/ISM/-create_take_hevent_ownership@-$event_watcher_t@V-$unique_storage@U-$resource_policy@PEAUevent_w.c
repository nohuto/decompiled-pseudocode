/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18006A1F0
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180068EFC (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create_take_hevent_ownership(
        wil::details::event_watcher_state **a1,
        void *a2,
        __int64 a3,
        const char *a4)
{
  void *v5; // rbx
  _QWORD *v7; // rax
  void *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  const char *v13; // r9
  const char *v15; // r9
  PTP_WAIT ThreadpoolWait; // r15
  struct _TP_WAIT *v17; // rbp
  DWORD LastError; // edi
  __int64 v19; // rdx
  const char *v20; // r9
  wil::details::event_watcher_state *v21; // rdi
  DWORD v22; // ebp
  __int64 v23; // rdx
  const char *v24; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a2;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD60,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      a4);
    __debugbreak();
  }
  v7 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v7[13] = 0LL;
    v9 = *(_QWORD *)(a3 + 104);
    if ( !v9 )
    {
      v7[13] = 0LL;
LABEL_11:
      *((_QWORD *)v8 + 14) = v5;
      v5 = 0LL;
      *((_QWORD *)v8 + 15) = 0LL;
      goto LABEL_13;
    }
    if ( v9 == a3 )
    {
      v7[13] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v7);
      v11 = *(_QWORD *)(a3 + 104);
      if ( !v11 )
        goto LABEL_11;
      LOBYTE(v10) = v11 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v10);
    }
    else
    {
      v7[13] = v9;
    }
    *(_QWORD *)(a3 + 104) = 0LL;
    goto LABEL_11;
  }
  v8 = 0LL;
LABEL_13:
  if ( !v8 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD63,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    if ( v5 )
    {
      if ( !CloseHandle(v5) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x878,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v13);
        __debugbreak();
      }
    }
    return v12;
  }
  ThreadpoolWait = CreateThreadpoolWait(lambda_a660b56e1a6c7e4c410a5aeb00e5d967_::_lambda_invoker_cdecl_, v8, 0LL);
  v17 = (struct _TP_WAIT *)*((_QWORD *)v8 + 15);
  if ( v17 )
  {
    LastError = GetLastError();
    SetThreadpoolWait(v17, 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(v17, 1);
    CloseThreadpoolWait(v17);
    SetLastError(LastError);
  }
  *((_QWORD *)v8 + 15) = ThreadpoolWait;
  if ( !ThreadpoolWait )
  {
    v12 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xD6F,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v15);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v19);
    if ( !v5 || CloseHandle(v5) )
      return v12;
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v20);
  }
  v21 = *a1;
  if ( *a1 )
  {
    v22 = GetLastError();
    wil::details::event_watcher_state::`scalar deleting destructor'(v21, v23);
    SetLastError(v22);
  }
  *a1 = (wil::details::event_watcher_state *)v8;
  SetThreadpoolWait(*((PTP_WAIT *)v8 + 15), *((HANDLE *)v8 + 14), 0LL);
  if ( v5 && !CloseHandle(v5) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v24);
    __debugbreak();
  }
  return 0LL;
}
