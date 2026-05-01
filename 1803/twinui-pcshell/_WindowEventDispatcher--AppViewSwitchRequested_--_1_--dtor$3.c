/*
 * XREFs of _WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor$3 @ 0x1801D486D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>((void **)(a2 + 72));
}
