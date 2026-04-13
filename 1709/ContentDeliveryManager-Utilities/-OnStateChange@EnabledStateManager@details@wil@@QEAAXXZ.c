/*
 * XREFs of ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000B3A8
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000B27C (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_ @ 0x18000B800 (_lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007600 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 */

void __fastcall wil::details::EnabledStateManager::OnStateChange(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbp
  volatile signed __int32 **Ptr; // rbx
  char *v4; // rsi
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax

  if ( LOBYTE(this->Ptr) )
  {
    v2 = this + 1;
    AcquireSRWLockExclusive(this + 1);
    Ptr = (volatile signed __int32 **)this[10].Ptr;
    v4 = (char *)Ptr + (((char *)this[11].Ptr - (char *)Ptr) & 0xFFFFFFFFFFFFFFF0uLL);
    while ( Ptr != (volatile signed __int32 **)v4 )
    {
      if ( *(_DWORD *)Ptr )
      {
        v5 = Ptr[1];
        do
        {
          if ( (*v5 & 0x30) == 0 )
            break;
          v6 = *v5;
        }
        while ( v6 != _InterlockedCompareExchange(v5, *v5 & 0xFFFFFFCF, v6) );
      }
      else
      {
        wil_details_SetEnabledAndHasNotificationStateProperties(Ptr[1], 0, 0);
      }
      Ptr += 2;
    }
    this[11].Ptr = this[10].Ptr;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
}
