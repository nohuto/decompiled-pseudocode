/*
 * XREFs of ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180031EA4
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x1800316A0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ @ 0x18003210C (-_Tidy@-$_Func_class@XU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@IEAAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x180032384 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180032430 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006FCF0 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180070060 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?close_reset@?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@SAXPEAUregistry_watcher_state@23@@Z @ 0x1800702D4 (-close_reset@-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1-delete_r.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180070354 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications(wil::details **this)
{
  int v2; // edx
  int v3; // r8d
  int v4; // r9d
  wil::details::registry_watcher_state **v5; // rbx
  wil::details::registry_watcher_state *v6; // rbx
  unsigned int v7; // edx
  void *v8; // rdx
  wil::details::registry_watcher_state *v10; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v12[14]; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v14[4]; // [rsp+BCh] [rbp-4Ch] BYREF
  int v15; // [rsp+C0h] [rbp-48h]
  GUID v16; // [rsp+C8h] [rbp-40h]

  v13 = 416;
  memset_0(v14, 0, 0x19CuLL);
  v15 = 0;
  v16 = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  CM_Register_Notification(&v13, this, lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_, this + 5);
  v10 = 0LL;
  v12[0] = off_1800AC7D8;
  v12[1] = this;
  v12[13] = v12;
  wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
    (unsigned int)&v10,
    v2,
    v3,
    v4,
    (__int64)v12);
  v5 = this + 4;
  if ( this + 4 == &v10 )
  {
    v6 = v10;
  }
  else
  {
    if ( *v5 )
      wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,0,std::nullptr_t>::close_reset(*v5);
    *v5 = v10;
    v6 = 0LL;
    v10 = 0LL;
  }
  if ( v6 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)v6 + 18);
    SRWLock = (PSRWLOCK)((char *)v6 + 144);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 35, 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'(v10, v7);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v12);
  wistd::_Func_class<void,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(v12);
  if ( Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected() )
    wil::details::SetEvent(*this, v8);
  return 0LL;
}
