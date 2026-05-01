/*
 * XREFs of _CApplicationManager::SubscribeToServices_::_1_::dtor$5 @ 0x18010D91A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::SubscribeToServices_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 96));
}
