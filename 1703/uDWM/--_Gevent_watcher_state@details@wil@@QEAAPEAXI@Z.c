/*
 * XREFs of ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800732D0
 * Callers:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049690 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ??1CAnalogCompositorManager@@AEAA@XZ @ 0x18004CBA4 (--1CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800170D8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x1800493C0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

wil::details::event_watcher_state *__fastcall wil::details::event_watcher_state::`scalar deleting destructor'(
        wil::details::event_watcher_state *this,
        void *a2)
{
  struct _TP_WAIT *v2; // rdi
  wil::details *v4; // rcx
  __int64 v5; // rdx

  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 15);
  if ( v2 )
  {
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 15), 1);
    CloseThreadpoolWait(v2);
  }
  v4 = (wil::details *)*((_QWORD *)this + 14);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this,
    (__int64)a2);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this,
    v5);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wil::details::event_watcher_state *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                      + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
