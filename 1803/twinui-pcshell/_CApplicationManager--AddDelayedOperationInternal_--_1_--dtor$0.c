/*
 * XREFs of _CApplicationManager::AddDelayedOperationInternal_::_1_::dtor$0 @ 0x1800B3C90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::AddDelayedOperationInternal_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IAsyncCallback>::~ComPtr<IAsyncCallback>(a2 + 72);
}
