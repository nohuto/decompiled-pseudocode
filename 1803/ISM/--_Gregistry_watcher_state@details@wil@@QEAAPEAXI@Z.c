/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x180045254
 * Callers:
 *     _lambda_f1fd7dcd3a18171c461af661371627e6_::_lambda_invoker_cdecl_ @ 0x180044E40 (_lambda_f1fd7dcd3a18171c461af661371627e6_--_lambda_invoker_cdecl_.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180044F90 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z @ 0x180045338 (-delete_registry_watcher_state@details@wil@@YAXPEAUregistry_watcher_state@12@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this,
        __int64 a2)
{
  struct _TP_WAIT *v3; // rdi
  void *v4; // rcx
  const char *v5; // r9
  HKEY v6; // rcx
  wil::details::registry_watcher_state *v7; // rcx
  struct wil::details::registry_watcher_state *v8; // rdx
  wil::details *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    SetThreadpoolWait(*((PTP_WAIT *)this + 16), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(v3, 1);
    CloseThreadpoolWait(v3);
  }
  v4 = (void *)*((_QWORD *)this + 15);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x879,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v5);
    wil::details::delete_registry_watcher_state(v9, v8);
  }
  else
  {
    v6 = (HKEY)*((_QWORD *)this + 14);
    if ( v6 )
      RegCloseKey(v6);
    v7 = (wil::details::registry_watcher_state *)*((_QWORD *)this + 13);
    if ( v7 )
    {
      LOBYTE(a2) = v7 != this;
      (*(void (__fastcall **)(wil::details::registry_watcher_state *, __int64))(*(_QWORD *)v7 + 24LL))(v7, a2);
      *((_QWORD *)this + 13) = 0LL;
    }
    operator delete(this);
  }
}
