/*
 * XREFs of _CApplicationManager::_GetMonitorForNotifyApp_::_1_::dtor$0 @ 0x18010FA93
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_GetMonitorForNotifyApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 112));
}
