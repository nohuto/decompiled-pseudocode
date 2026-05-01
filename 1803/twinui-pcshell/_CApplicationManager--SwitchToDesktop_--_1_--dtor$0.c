/*
 * XREFs of _CApplicationManager::SwitchToDesktop_::_1_::dtor$0 @ 0x18010DA0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::SwitchToDesktop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 80));
}
