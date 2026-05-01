/*
 * XREFs of ?CancelJumpViewTelemetryTimeout@CJumpViewExperienceManager@@AEAAXXZ @ 0x1801763A4
 * Callers:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180175A70 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ?OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180177940 (-OnViewShown@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18007AE68 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 */

void __fastcall CJumpViewExperienceManager::CancelJumpViewTelemetryTimeout(CJumpViewExperienceManager *this)
{
  struct _TP_TIMER **v1; // rcx

  v1 = (struct _TP_TIMER **)((char *)this + 808);
  if ( *v1 )
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v1,
      0LL);
}
