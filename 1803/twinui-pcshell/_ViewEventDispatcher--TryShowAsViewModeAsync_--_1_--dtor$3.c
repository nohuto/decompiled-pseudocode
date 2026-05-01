/*
 * XREFs of _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor$3 @ 0x1801CF53F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>::~ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs>((ViewEventArgsForShowAsStandalone **)(a2 + 72));
}
