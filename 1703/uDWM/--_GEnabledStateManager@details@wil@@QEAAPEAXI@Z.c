/*
 * XREFs of ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180080248
 * Callers:
 *     ??1?$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ @ 0x18004CD68 (--1-$shutdown_aware_object@VEnabledStateManager@details@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x180016F04 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180017490 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800176E8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800733FC (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 *     ?WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1800814C0 (-WilApi_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

struct _TP_TIMER **__fastcall wil::details::EnabledStateManager::`scalar deleting destructor'(struct _TP_TIMER **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // r9d
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v5; // rdx
  struct _TP_TIMER *v6; // rcx
  struct _TP_TIMER *v7; // rcx
  wil::details *v8; // rcx
  struct _TP_TIMER *v9; // rcx

  *(_BYTE *)this = 0;
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 2,
    0LL);
  *(_BYTE *)this = 0;
  wil::details::EnabledStateManager::RecordCachedUsageUnderLock((wil::details::EnabledStateManager *)this, v2, v3, v4);
  v6 = this[12];
  if ( v6 )
    MemoryFree(v6);
  v7 = this[8];
  if ( v7 )
    MemoryFree(v7);
  v8 = this[4];
  if ( v8 )
    wil::details::WilApi_UnsubscribeFeatureStateChangeNotification(v8, v5);
  v9 = this[2];
  if ( v9 )
    wil::details::DestroyThreadPoolTimer<0>::Destroy(v9);
  return this;
}
