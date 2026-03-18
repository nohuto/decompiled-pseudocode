/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180132C30
 * Callers:
 *     ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x1800C25A8 (--1-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18007983C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800C05CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C0D9C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180133870 (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x180134D3C (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

struct _TP_TIMER **__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(struct _TP_TIMER **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r9d
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v5; // rdx
  wil::details *v6; // rcx
  wil::details *v7; // rcx
  wil::details *v8; // rcx
  wil::details *v9; // rcx
  struct _TP_TIMER *v10; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this, v2, v3, v4);
  v6 = this[13];
  if ( v6 )
    wil::details::FreeProcessHeap(v6, v5);
  v7 = this[9];
  if ( v7 )
    wil::details::FreeProcessHeap(v7, v5);
  v8 = this[5];
  if ( v8 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v8, v5);
  v9 = this[4];
  if ( v9 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v9, v5);
  v10 = this[2];
  if ( v10 )
    wil::details::DestroyThreadPoolTimer<0>::Destroy(v10);
  return this;
}
