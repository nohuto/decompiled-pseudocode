/*
 * XREFs of _CApplicationManager::OnShellHookMessage_::_1_::dtor$28 @ 0x1800B3FE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::OnShellHookMessage_::_1_::dtor_28(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(a2 + 64);
}
