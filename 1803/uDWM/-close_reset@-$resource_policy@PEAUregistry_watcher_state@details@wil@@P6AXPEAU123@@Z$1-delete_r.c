/*
 * XREFs of ?close_reset@?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x1800702D4
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180031EA4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ?create_common@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJ$$QEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180032264 (-create_common@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_st.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006FCF0 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180070354 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

void __fastcall wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>::close_reset(
        wil::details::registry_watcher_state *this)
{
  DWORD LastError; // esi
  void *v3; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  LastError = GetLastError();
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  SRWLock = (PSRWLOCK)((char *)this + 144);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 35, 0xFFFFFFFF) == 1 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      0LL);
    if ( this )
      wil::details::registry_watcher_state::`scalar deleting destructor'(this, v3);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  SetLastError(LastError);
}
