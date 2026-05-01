/*
 * XREFs of _CApplicationManager::CreateNewGlom_::_1_::dtor$7 @ 0x18010653E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::CreateNewGlom_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 72));
}
