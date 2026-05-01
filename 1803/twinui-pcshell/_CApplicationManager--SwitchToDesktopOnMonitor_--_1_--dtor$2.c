/*
 * XREFs of _CApplicationManager::SwitchToDesktopOnMonitor_::_1_::dtor$2 @ 0x18010DC3F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 32));
}
