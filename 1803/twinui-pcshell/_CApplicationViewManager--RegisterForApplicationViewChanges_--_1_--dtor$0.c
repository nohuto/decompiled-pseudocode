/*
 * XREFs of _CApplicationViewManager::RegisterForApplicationViewChanges_::_1_::dtor$0 @ 0x1800B27A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CApplicationViewManager::RegisterForApplicationViewChanges_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationViewChangeListener>::~ComPtr<IApplicationViewChangeListener>((__int64 *)(a2 + 88));
}
