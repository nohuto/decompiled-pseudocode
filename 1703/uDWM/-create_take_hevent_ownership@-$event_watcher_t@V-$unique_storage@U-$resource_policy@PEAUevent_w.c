/*
 * XREFs of ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049690
 * Callers:
 *     ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049780 (-create@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_watcher_state@details@w.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800170D8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049834 (--0event_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$event_t@V-$unique_storage@U-$re.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180071144 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007203C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072054 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800732D0 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
        wil::details::event_watcher_state **a1,
        wil::details *a2,
        __int64 a3,
        const char *a4)
{
  wil::details *v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  PTP_WAIT ThreadpoolWait; // rax
  const char *v11; // r9
  struct _TP_WAIT *v12; // rbp
  PTP_WAIT v13; // r15
  wil::details::event_watcher_state *v14; // rdi
  void *v15; // rdx
  unsigned int v17; // edi
  void *v18; // rdx
  unsigned int v19; // edx
  DWORD LastError; // edi
  DWORD v21; // ebp
  unsigned int v22; // edx
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  wil::details *v25; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( !a2 )
  {
    wil::details::in1diag3::FailFast_Unexpected(retaddr, (void *)0xC46, a3, a4);
    __debugbreak();
  }
  v25 = a2;
  v7 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         128LL);
  if ( v7 )
  {
    v8 = wil::details::event_watcher_state::event_watcher_state(v7, &v25, a3);
    v5 = v25;
    v9 = v8;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       lambda_e31835caed9ddc6847735c55d55e4483_::_lambda_invoker_cdecl_,
                       (PVOID)v9,
                       0LL);
    v12 = *(struct _TP_WAIT **)(v9 + 120);
    v13 = ThreadpoolWait;
    if ( v12 )
    {
      LastError = GetLastError();
      WaitForThreadpoolWaitCallbacks(v12, 1);
      CloseThreadpoolWait(v12);
      SetLastError(LastError);
    }
    *(_QWORD *)(v9 + 120) = v13;
    if ( v13 )
    {
      v14 = *a1;
      if ( *a1 )
      {
        v21 = GetLastError();
        wil::details::event_watcher_state::`scalar deleting destructor'(v14, v22);
        SetLastError(v21);
      }
      *a1 = (wil::details::event_watcher_state *)v9;
      SetThreadpoolWait(*(PTP_WAIT *)(v9 + 120), *(HANDLE *)(v9 + 112), 0LL);
      if ( v5 )
        wil::details::CloseHandle(v5, v15);
      return 0LL;
    }
    v17 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0xC55,
            (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
            v11);
    wil::details::event_watcher_state::`scalar deleting destructor'((wil::details::event_watcher_state *)v9, v19);
  }
  else
  {
    v17 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC49,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL,
      v23);
  }
  if ( v5 )
    wil::details::CloseHandle(v5, v18);
  return v17;
}
