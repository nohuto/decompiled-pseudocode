/*
 * XREFs of _CApplicationManager::_CApplicationManager_::_1_::dtor$18 @ 0x180197C6B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_CApplicationManager_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>(*(_QWORD *)(a2 + 64) + 640LL);
}
