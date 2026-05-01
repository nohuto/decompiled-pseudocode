/*
 * XREFs of ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180066824
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180067BE0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E6FC (-_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_OnViewDestroyed@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18015E7E0 (-_OnViewDestroyed@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?CortanaExperienceManager_DeferredSuspensionTimerCanceled@CortanaProactiveTelemetry@@SAXXZ @ 0x180074D68 (-CortanaExperienceManager_DeferredSuspensionTimerCanceled@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?close_reset@?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007A9FC (-close_reset@-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolTimer@US.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer(CortanaSharedExperienceManager *this)
{
  struct _TP_TIMER *v2; // rcx

  CortanaProactiveTelemetry::CortanaExperienceManager_DeferredSuspensionTimerCanceled();
  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 56);
  if ( v2 )
    wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v2);
  *((_QWORD *)this + 56) = 0LL;
  return 0LL;
}
