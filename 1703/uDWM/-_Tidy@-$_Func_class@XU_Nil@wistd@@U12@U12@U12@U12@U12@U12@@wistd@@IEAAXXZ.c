/*
 * XREFs of ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x1800493C0
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x18004934C (--0-$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBK@Z@wistd@@@Z.c)
 *     ??0event_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAV?$function@$$A6AXXZ@wistd@@@Z @ 0x180049834 (--0event_watcher_state@details@wil@@QEAA@$$QEAV-$unique_any_t@V-$event_t@V-$unique_storage@U-$re.c)
 *     ??1?$wnf_subscription_state@K@details@wil@@UEAA@XZ @ 0x180072D74 (--1-$wnf_subscription_state@K@details@wil@@UEAA@XZ.c)
 *     ??_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800732D0 (--_Gevent_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
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
