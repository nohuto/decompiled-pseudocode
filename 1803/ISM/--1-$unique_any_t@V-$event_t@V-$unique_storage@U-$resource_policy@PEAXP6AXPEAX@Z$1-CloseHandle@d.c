/*
 * XREFs of ??1?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAA@XZ @ 0x1800048B0
 * Callers:
 *     __dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent___::_1_::dtor$1 @ 0x1800E3567 (__dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent___--_1_--dtor$1.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$26 @ 0x1800E35BF (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$26.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$4 @ 0x1800E35CB (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$4.c)
 *     _MPC3DStateHelper::MPC3DStateHelper_::_1_::dtor$28 @ 0x1800E35DB (_MPC3DStateHelper--MPC3DStateHelper_--_1_--dtor$28.c)
 *     _MPCHeadUpdateListener::Initialize_::_1_::dtor$7 @ 0x1800E6C1C (_MPCHeadUpdateListener--Initialize_--_1_--dtor$7.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state_____ptr64_void_(__cdecl_)(wil::details::event_watcher_state_____ptr64)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state_____ptr64_0_std::nullptr_t____wil::err_exception_policy_::create_take_hevent_ownership_::_1_::dtor$0 @ 0x1800E6C28 (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wil--details--e.c)
 *     _Windows::Internal::Holographic::SpatialGraphDriverClient::SpatialGraphDriverClient_::_1_::dtor$2 @ 0x1800E9E85 (_Windows--Internal--Holographic--SpatialGraphDriverClient--SpatialGraphDriverClient_ea_1800E9E85.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>>(
        void **a1)
{
  void *v1; // rcx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( v1 && !CloseHandle(v1) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x879,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v2);
    JUMPOUT(0x1800048E1LL);
  }
}
