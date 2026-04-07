/*
 * XREFs of ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006901C
 * Callers:
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18003E5EC (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x18003F038 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x180068E10 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z @ 0x180069280 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z.c)
 *     ?close_reset@?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x180069688 (-close_reset@-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-delete_r.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18003EA24 (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180044E10 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@?$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z @ 0x1800690C8 (-Destroy@-$DestroyThreadPoolWait@$0A@@details@wil@@SAXPEAU_TP_WAIT@@@Z.c)
 */

wil::details::registry_watcher_state *__fastcall wil::details::registry_watcher_state::`scalar deleting destructor'(
        wil::details::registry_watcher_state *this,
        void *a2)
{
  struct _TP_WAIT *v3; // rcx
  wil::details *v4; // rcx
  HKEY v5; // rcx
  __int64 v6; // rdx

  v3 = (struct _TP_WAIT *)*((_QWORD *)this + 16);
  if ( v3 )
    wil::details::DestroyThreadPoolWait<0>::Destroy(v3);
  v4 = (wil::details *)*((_QWORD *)this + 15);
  if ( v4 )
    wil::details::CloseHandle(v4, a2);
  v5 = (HKEY)*((_QWORD *)this + 14);
  if ( v5 )
    RegCloseKey(v5);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this,
    (__int64)a2);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    (__int64)this,
    v6);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wil::details::registry_watcher_state *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                         + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
