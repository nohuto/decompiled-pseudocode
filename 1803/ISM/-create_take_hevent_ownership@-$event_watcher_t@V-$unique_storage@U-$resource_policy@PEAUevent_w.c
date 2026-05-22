/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180060FA8
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180060794 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006057C (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  PTP_WAIT ThreadpoolWait; // rbp
  const char *v16; // r9
  struct _TP_WAIT *v17; // r14
  DWORD LastError; // edi
  __int64 v19; // rdx
  const char *v20; // r9
  wil::details::event_watcher_state *v21; // rbp
  DWORD v22; // edi
  __int64 v23; // rdx
  const char *v24; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = a2;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xE14,
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
LABEL_10:
      *((_QWORD *)v8 + 14) = v5;
      v5 = 0LL;
      *((_QWORD *)v8 + 15) = 0LL;
      goto LABEL_12;
    }
    if ( v9 == a3 )
    {
      v7[13] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 8LL))(v9, v7);
      v11 = *(_QWORD *)(a3 + 104);
      if ( !v11 )
        goto LABEL_10;
      LOBYTE(v10) = v11 != a3;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v10);
    }
    else
    {
      v7[13] = v9;
    }
    *(_QWORD *)(a3 + 104) = 0LL;
    goto LABEL_10;
  }
  v8 = 0LL;
LABEL_12:
  if ( !v8 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE17,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    if ( v5 )
    {
      if ( !CloseHandle(v5) )
      {
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x879,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v13);
        __debugbreak();
      }
    }
    return v12;
  }
  ThreadpoolWait = CreateThreadpoolWait(
                     wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::wait_callback,
                     v8,
                     0LL);
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
            (void *)0xE1A,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            v16);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v8, v19);
    if ( v5 && !CloseHandle(v5) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x879,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v20);
      __debugbreak();
    }
    return v12;
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
      (void *)0x879,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v24);
    JUMPOUT(0x1800611F1LL);
  }
  return 0LL;
}
