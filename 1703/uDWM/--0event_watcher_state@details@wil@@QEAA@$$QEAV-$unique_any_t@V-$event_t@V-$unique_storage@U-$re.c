/*
 * XREFs of ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049834
 * Callers:
 *     ?create_take_hevent_ownership@?$event_watcher_t@V?$unique_storage@U?$resource_policy@PEAUevent_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_event_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEAX$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049690 (-create_take_hevent_ownership@-$event_watcher_t@V-$unique_storage@U-$resource_policy@PEAUevent_w.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x1800493C0 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::details::event_watcher_state::event_watcher_state(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx
  _QWORD *result; // rax

  a1[13] = 0LL;
  v4 = *(_QWORD *)(a3 + 104);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      a1[13] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 8LL))(v4, a1);
      wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a3,
        v7);
    }
    else
    {
      a1[13] = v4;
      *(_QWORD *)(a3 + 104) = 0LL;
    }
  }
  else
  {
    a1[13] = 0LL;
  }
  a1[14] = *a2;
  result = a1;
  *a2 = 0LL;
  a1[15] = 0LL;
  return result;
}
