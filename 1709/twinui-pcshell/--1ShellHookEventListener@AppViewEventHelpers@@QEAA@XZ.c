/*
 * XREFs of ??1ShellHookEventListener@AppViewEventHelpers@@QEAA@XZ @ 0x180191270
 * Callers:
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$5 @ 0x1801F5A0A (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$5.c)
 *     _AppViewDataSourceAdapter::AppViewDataSourceAdapter_::_1_::dtor$6 @ 0x1801F5A1D (_AppViewDataSourceAdapter--AppViewDataSourceAdapter_--_1_--dtor$6.c)
 *     _AppViewDataSourceAdapter::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x1801F5A7C (_AppViewDataSourceAdapter--_scalar_deleting_destructor__--_1_--dtor$5.c)
 * Callees:
 *     ?Unregister@?$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VApplicationViewEventRegistration@details@AppViewEventHelpers@@@AppViewEventHelpers@@QEAAXXZ @ 0x18019310C (-Unregister@-$EventListener@UIApplicationViewCollection@@UIApplicationViewChangeListener@@VAppli.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AppViewEventHelpers::ShellHookEventListener::~ShellHookEventListener(
        AppViewEventHelpers::ShellHookEventListener *this)
{
  __int64 v2; // rcx

  AppViewEventHelpers::EventListener<IApplicationViewCollection,IApplicationViewChangeListener,AppViewEventHelpers::details::ApplicationViewEventRegistration>::Unregister(this);
  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
