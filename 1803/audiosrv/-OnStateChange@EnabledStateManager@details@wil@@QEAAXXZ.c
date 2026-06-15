/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800B2CF8
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180015C44 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_ @ 0x1800B0E80 (_lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z @ 0x180015FA8 (-wil_details_ModifyFeatureData@@YAHPEATwil_details_FeaturePropertyCache@@P6AH0PEAX@Z1@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbp
  union wil_details_FeaturePropertyCache **Ptr; // rsi
  union wil_details_FeaturePropertyCache **v4; // rdi
  __int64 (__fastcall *v5)(union wil_details_FeaturePropertyCache *, void *); // rdx

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (union wil_details_FeaturePropertyCache **)this[10].Ptr;
    v4 = (union wil_details_FeaturePropertyCache **)((char *)Ptr
                                                   + (((char *)this[11].Ptr - (char *)Ptr) & 0xFFFFFFFFFFFFFFF0uLL));
    while ( Ptr != v4 )
    {
      v5 = wil_details_SetEnabledAndHasNotificationStateCallback;
      if ( *(_DWORD *)Ptr )
        v5 = wil_details_SetHasNotificationStateCallback;
      wil_details_ModifyFeatureData(Ptr[1], v5, 0LL);
      Ptr += 2;
    }
    this[11].Ptr = this[10].Ptr;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
