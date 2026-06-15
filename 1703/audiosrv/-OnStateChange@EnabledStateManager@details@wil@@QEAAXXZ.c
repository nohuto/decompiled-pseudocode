/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800ABCBC
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180028C00 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_ @ 0x1800A9A50 (_lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180028F44 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180028FD8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(signed __int32 *, void *); // rdx
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_BYTE *)this )
  {
    wil::srwlock::lock_exclusive((__int64)this + 8, (__int64)&SRWLock);
    v2 = *((_QWORD *)this + 9);
    v3 = v2 + ((*((_QWORD *)this + 10) - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    while ( v2 != v3 )
    {
      v4 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetEnabledAndHasNotificationStateCallback;
      if ( *(_DWORD *)v2 )
        v4 = (__int64 (__fastcall *)(signed __int32 *, void *))wil_details_SetHasNotificationStateCallback;
      wil_details_ModifyFeatureData(*(union wil_details_FeaturePropertyCache **)(v2 + 8), v4, 0LL);
      v2 += 16LL;
    }
    v5 = SRWLock;
    *((_QWORD *)this + 10) = *((_QWORD *)this + 9);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
  }
}
