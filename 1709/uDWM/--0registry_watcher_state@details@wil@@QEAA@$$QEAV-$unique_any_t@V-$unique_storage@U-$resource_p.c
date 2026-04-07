/*
 * XREFs of ??0registry_watcher_state@details@wil@@QEAA@$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003F2F8
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003E5EC (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18003EA24 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::registry_watcher_state::registry_watcher_state(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v8; // rdx
  __int64 result; // rax

  *(_QWORD *)(a1 + 104) = 0LL;
  v5 = *(_QWORD *)(a4 + 104);
  if ( v5 )
  {
    if ( v5 == a4 )
    {
      *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, a1);
      wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
        a4,
        v8);
    }
    else
    {
      *(_QWORD *)(a1 + 104) = v5;
      *(_QWORD *)(a4 + 104) = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  *(_QWORD *)(a1 + 112) = *a2;
  result = a1;
  *a2 = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_BYTE *)(a1 + 136) = 1;
  *(_DWORD *)(a1 + 140) = 1;
  *(_QWORD *)(a1 + 144) = 0LL;
  return result;
}
