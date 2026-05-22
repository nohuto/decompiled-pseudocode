/*
 * XREFs of ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180068EFC
 * Callers:
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180069E10 (--1-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1-del.c)
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18006A1F0 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

wil::details::event_watcher_state *__fastcall wil::details::event_watcher_state::`scalar deleting destructor'(
        wil::details::event_watcher_state *this,
        __int64 a2)
{
  struct _TP_WAIT *v2; // rdi
  void *v4; // rcx
  const char *v5; // r9
  wil::details::event_watcher_state *v6; // rcx
  wil::details::event_watcher_state *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    SetThreadpoolWait(*((PTP_WAIT *)this + 15), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(v2, 1);
    CloseThreadpoolWait(v2);
  }
  v4 = (void *)*((_QWORD *)this + 14);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x878,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v5);
    JUMPOUT(0x180068FBDLL);
  }
  v6 = (wil::details::event_watcher_state *)*((_QWORD *)this + 13);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != this;
    (*(void (__fastcall **)(wil::details::event_watcher_state *, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2);
    *((_QWORD *)this + 13) = 0LL;
  }
  v7 = (wil::details::event_watcher_state *)*((_QWORD *)this + 13);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != this;
    (*(void (__fastcall **)(wil::details::event_watcher_state *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
    *((_QWORD *)this + 13) = 0LL;
  }
  operator delete(this);
  return this;
}
