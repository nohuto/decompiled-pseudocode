/*
 * XREFs of ??1?$ComPtr@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F90F0
 * Callers:
 *     __lambda_cc443415f5ecfa248de51aa242c4a017_::operator()_::_1_::dtor$2 @ 0x1800B0A58 (__lambda_cc443415f5ecfa248de51aa242c4a017_--operator()_--_1_--dtor$2.c)
 *     _ViewEventDispatcher::ViewPropertyChanged_::_1_::dtor$4 @ 0x1800B2CDC (_ViewEventDispatcher--ViewPropertyChanged_--_1_--dtor$4.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::dtor$5 @ 0x1800B2E90 (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--dtor$5.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$21 @ 0x1800B3111 (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$21.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::dtor$3 @ 0x1801CF16B (_ViewEventDispatcher--SwitchAsync_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$3 @ 0x1801CF53F (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::~ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>(
        ViewEventArgsForShowAsStandalone **a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::InternalRelease(a1);
}
