/*
 * XREFs of _CAppViewManager::_ProcessNextOperation_::_1_::dtor$4 @ 0x1800B0EF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_ProcessNextOperation_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>(a2 + 32);
}
