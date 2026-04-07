/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800367B0
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x180031838 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18003FE5C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x180067B9C (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x180067E88 (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x180067F04 (-Destroy@-$DestroyThreadPoolTimer@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
        struct _TP_TIMER **a1,
        struct _TP_TIMER *a2)
{
  struct _TP_TIMER *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolTimer<0>::Destroy(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
