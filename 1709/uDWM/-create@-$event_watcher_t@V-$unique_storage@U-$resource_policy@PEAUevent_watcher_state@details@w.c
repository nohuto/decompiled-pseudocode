/*
 * XREFs of ?create@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18003E8B8
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18003E504 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x18003E7D4 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18003F160 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180044E10 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067694 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800676AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
        wil::details::event_watcher_state **a1,
        void *a2,
        __int64 a3)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v7; // rax
  const char *v8; // r9
  wil::details *v9; // rdx
  int take_hevent_ownership; // eax
  void *v11; // rdx
  unsigned int LastError; // ebx
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+68h] [rbp+20h] BYREF

  TargetHandle = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &TargetHandle,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v7 = GetCurrentProcess();
  if ( DuplicateHandle(v7, a2, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v9 = (wil::details *)TargetHandle;
    TargetHandle = 0LL;
    take_hevent_ownership = wil::event_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::event_watcher_state *,void (*)(wil::details::event_watcher_state *),&void wil::details::delete_event_watcher_state(wil::details::event_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::event_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_take_hevent_ownership(
                              a1,
                              v9,
                              a3,
                              v8);
    LastError = take_hevent_ownership;
    if ( take_hevent_ownership < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15E1,
        (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)take_hevent_ownership,
        v14);
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x15E2,
                  (unsigned int)"internal\\sdk\\inc\\wil\\ResultMacros.h",
                  v8);
  }
  if ( TargetHandle )
    wil::details::CloseHandle((wil::details *)TargetHandle, v11);
  return LastError;
}
