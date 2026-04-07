/*
 * XREFs of ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z @ 0x18006FF10
 * Callers:
 *     _lambda_f1fd7dcd3a18171c461af661371627e6_::operator() @ 0x18006FB88 (_lambda_f1fd7dcd3a18171c461af661371627e6_--operator().c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18006FCF0 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x180070354 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

void __fastcall wil::details::registry_watcher_state::ReleaseFromCallback(__int64 a1, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct _TP_WAIT *v5; // rcx
  void *v6; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 144);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 144));
  SRWLock = v2;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 140), 0xFFFFFFFF) == 1 )
  {
    v5 = *(struct _TP_WAIT **)(a1 + 128);
    *(_QWORD *)(a1 + 128) = 0LL;
    CloseThreadpoolWait(v5);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &SRWLock,
      0LL);
    if ( a1 )
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)a1, v6);
  }
  else if ( a2 != 1 )
  {
    SetThreadpoolWait(*(PTP_WAIT *)(a1 + 128), *(HANDLE *)(a1 + 120), 0LL);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
