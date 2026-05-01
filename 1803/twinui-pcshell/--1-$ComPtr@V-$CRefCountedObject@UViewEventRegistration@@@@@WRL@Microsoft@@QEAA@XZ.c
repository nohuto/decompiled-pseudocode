/*
 * XREFs of ??1?$ComPtr@V?$CRefCountedObject@UViewEventRegistration@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAD48
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded_::_1_::dtor$1 @ 0x1800B2AA2 (_ViewEventDispatcher--_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNee_ea_1800B2AA2.c)
 *     _ViewEventDispatcher::_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNeeded_::_1_::dtor$3 @ 0x1800B2ABA (_ViewEventDispatcher--_EnsureViewsHaveWrappersForSameListenerAndNotifyListenerIfNee_ea_1800B2ABA.c)
 *     _ViewEventDispatcher::_EnsureViewHasWrapperAndListener_::_1_::dtor$3 @ 0x1800B2B02 (_ViewEventDispatcher--_EnsureViewHasWrapperAndListener_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$2 @ 0x1800B2B68 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::NavigateAwayFromView_::_1_::dtor$1 @ 0x1800B2C80 (_ViewEventDispatcher--NavigateAwayFromView_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewPropertyChanged_::_1_::dtor$1 @ 0x1800B2CAC (_ViewEventDispatcher--ViewPropertyChanged_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$1 @ 0x1800B2D27 (_ViewEventDispatcher--ViewDestroyed_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::ViewCreated_::_1_::dtor$2 @ 0x1800B2D98 (_ViewEventDispatcher--ViewCreated_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$2 @ 0x1800B2E78 (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$2 @ 0x1800B2F08 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::OnIdleStateChanged_::_1_::dtor$2 @ 0x1801CC075 (_ViewEventDispatcher--OnIdleStateChanged_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::RecoverViews_::_1_::dtor$1 @ 0x1801CC7E0 (_ViewEventDispatcher--RecoverViews_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::RegisterForViewEventsWithOptions_::_1_::dtor$0 @ 0x1801CCC2F (_ViewEventDispatcher--RegisterForViewEventsWithOptions_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::RegisterForViewEventsWithOptions_::_1_::dtor$2 @ 0x1801CCC47 (_ViewEventDispatcher--RegisterForViewEventsWithOptions_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::dtor$2 @ 0x1801CF15F (_ViewEventDispatcher--SwitchAsync_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::TryConsolidate_::_1_::dtor$1 @ 0x1801CF2C2 (_ViewEventDispatcher--TryConsolidate_--_1_--dtor$1.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$2 @ 0x1801CF533 (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_HandleWindowCreatedWithNoView_::_1_::dtor$3 @ 0x1801D04E0 (_ViewEventDispatcher--_HandleWindowCreatedWithNoView_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::_OverrideNavigationLevelForView_::_1_::dtor$2 @ 0x1801D0719 (_ViewEventDispatcher--_OverrideNavigationLevelForView_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::_RaiseViewEvent_::_1_::dtor$0_0 @ 0x1801D0B82 (_ViewEventDispatcher--_RaiseViewEvent_--_1_--dtor$0_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::~ComPtr<CRefCountedObject<ViewEventRegistration>>(
        void **a1)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<ViewEventRegistration>>::InternalRelease(a1);
}
