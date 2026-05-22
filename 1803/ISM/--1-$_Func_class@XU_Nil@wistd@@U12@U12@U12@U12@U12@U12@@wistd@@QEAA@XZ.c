/*
 * XREFs of ??1?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@QEAA@XZ @ 0x18004520C
 * Callers:
 *     _wil::registry_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::registry_watcher_state_____ptr64_void_(__cdecl_)(wil::details::registry_watcher_state_____ptr64)_&wil::details::delete_registry_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::registry_watcher_state_____ptr64_0_std::nullptr_t____wil::err_returncode_policy_::create_common_::_1_::dtor$6 @ 0x1800E5B1D (_wil--registry_watcher_t_wil--details--unique_storage_wil--details--resource_policy_ea_1800E5B1D.c)
 *     _wil::event_watcher_t_wil::details::unique_storage_wil::details::resource_policy_wil::details::event_watcher_state_____ptr64_void_(__cdecl_)(wil::details::event_watcher_state_____ptr64)_&wil::details::delete_event_watcher_state_wistd::integral_constant_unsigned___int64_2__wil::details::event_watcher_state_____ptr64_0_std::nullptr_t____wil::err_exception_policy_::create_take_hevent_ownership_::_1_::dtor$6 @ 0x1800E6C53 (_wil--event_watcher_t_wil--details--unique_storage_wil--details--resource_policy_wi_ea_1800E6C53.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::~_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
