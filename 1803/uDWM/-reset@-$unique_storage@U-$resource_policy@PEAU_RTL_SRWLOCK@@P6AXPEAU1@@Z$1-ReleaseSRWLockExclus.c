/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180070354
 * Callers:
 *     ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180031EA4 (-RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ.c)
 *     ??1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ @ 0x18006FAA0 (--1HolographicDriverDetectedWatcher@Mirage@Windows@@QEAA@XZ.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z @ 0x18006FF10 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z.c)
 *     ?close_reset@?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x1800702D4 (-close_reset@-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-delete_r.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        RTL_SRWLOCK **a1,
        RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    ReleaseSRWLockExclusive(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
