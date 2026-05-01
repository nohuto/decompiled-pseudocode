/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18001D898
 * Callers:
 *     _lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_ @ 0x18001D810 (_lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_--_lambda_invoker_cdecl_.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001D958 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18001D818 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  volatile signed __int32 *v4; // rdx
  signed __int32 v5; // eax
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // [rsp+28h] [rbp-10h]
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)this )
  {
    wil::srwlock::lock_exclusive((char *)this + 8, &SRWLock);
    v2 = *((_QWORD *)this + 9);
    v3 = v2 + ((*((_QWORD *)this + 10) - v2) & 0xFFFFFFFFFFFFFFF0uLL);
    v7 = v3;
    while ( v2 != v3 )
    {
      if ( *(_DWORD *)v2 )
      {
        v4 = *(volatile signed __int32 **)(v2 + 8);
        do
        {
          if ( (*v4 & 0x30) == 0 )
            break;
          v5 = *v4;
        }
        while ( v5 != _InterlockedCompareExchange(v4, *v4 & 0xFFFFFFCF, v5) );
        v3 = v7;
      }
      else
      {
        wil_details_SetEnabledAndHasNotificationStateProperties(*(volatile signed __int32 **)(v2 + 8), 0, 0);
      }
      v2 += 16LL;
    }
    v6 = SRWLock;
    *((_QWORD *)this + 10) = *((_QWORD *)this + 9);
    if ( v6 )
      ReleaseSRWLockExclusive(v6);
  }
}
