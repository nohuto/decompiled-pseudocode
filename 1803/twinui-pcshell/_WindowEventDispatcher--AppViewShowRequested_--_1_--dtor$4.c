/*
 * XREFs of _WindowEventDispatcher::AppViewShowRequested_::_1_::dtor$4 @ 0x1801D44B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowEventDispatcher::AppViewShowRequested_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>((void **)(a2 + 88));
}
