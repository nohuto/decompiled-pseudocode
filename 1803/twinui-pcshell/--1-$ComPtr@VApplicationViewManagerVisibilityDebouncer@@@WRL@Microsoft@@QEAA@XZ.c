/*
 * XREFs of ??1?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E0B4
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$2 @ 0x180097BA9 (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_ApplicationViewManagerVisibilityDebouncer_ApplicationViewManagerVisibilityDebouncer_IApplicationViewCollection_____ptr64_&___ptr64__::_1_::dtor$2 @ 0x18013D6E2 (_Microsoft--WRL--Details--MakeAndInitialize_ApplicationViewManagerVisibilityDebounc_ea_18013D6E2.c)
 *     _NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a____::_1_::dtor$0 @ 0x18013D7C0 (_NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a____--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer_CreateInstance_::_1_::dtor$0 @ 0x18013DC5C (_ApplicationViewManagerVisibilityDebouncer_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::~ComPtr<ApplicationViewManagerVisibilityDebouncer>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(a1);
}
