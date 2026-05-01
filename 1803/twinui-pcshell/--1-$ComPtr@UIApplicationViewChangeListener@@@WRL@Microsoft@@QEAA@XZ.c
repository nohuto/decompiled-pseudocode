/*
 * XREFs of ??1?$ComPtr@UIApplicationViewChangeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x180097C70
 * Callers:
 *     _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x18001E090 (_lambda_4181134c5161f261fff3e61f273c9fd8_--operator().c)
 *     _ApplicationViewManagerVisibilityDebouncer::ProcessPendingNotifications_::_1_::dtor$7 @ 0x180097BFD (_ApplicationViewManagerVisibilityDebouncer--ProcessPendingNotifications_--_1_--dtor$7.c)
 *     _ObjectArrayAdapter_IApplicationViewChangeListener_::Iterator::Iterator_::_1_::dtor$0 @ 0x180097D11 (_ObjectArrayAdapter_IApplicationViewChangeListener_--Iterator--Iterator_--_1_--dtor$0.c)
 *     __lambda_4181134c5161f261fff3e61f273c9fd8_::operator()_::_1_::dtor$1 @ 0x1800B1C3C (__lambda_4181134c5161f261fff3e61f273c9fd8_--operator()_--_1_--dtor$1.c)
 *     __lambda_4181134c5161f261fff3e61f273c9fd8_::operator()_::_1_::dtor$10 @ 0x1800B1C60 (__lambda_4181134c5161f261fff3e61f273c9fd8_--operator()_--_1_--dtor$10.c)
 *     _AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged_::_1_::dtor$1 @ 0x1800B1CC8 (_AgileApplicationViewChangeListenerConverter--OnApplicationViewChanged_--_1_--dtor$1.c)
 *     _CApplicationViewManager::RegisterForApplicationViewChanges_::_1_::dtor$0 @ 0x1800B27A0 (_CApplicationViewManager--RegisterForApplicationViewChanges_--_1_--dtor$0.c)
 *     _ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges_::_1_::dtor$0 @ 0x18013DF8F (_ApplicationViewManagerVisibilityDebouncer--RegisterForApplicationViewChanges_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::~ComPtr<IApplicationViewChangeListener>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::InternalRelease(a1);
}
