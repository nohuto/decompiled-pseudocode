/*
 * XREFs of _CAppViewManager::ShowAsStandalone_::_1_::dtor$3 @ 0x1800B11C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::ShowAsStandalone_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>(a2 + 128);
}
