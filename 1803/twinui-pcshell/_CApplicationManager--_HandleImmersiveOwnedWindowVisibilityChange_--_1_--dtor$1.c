/*
 * XREFs of _CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange_::_1_::dtor$1 @ 0x1801101CA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_HandleImmersiveOwnedWindowVisibilityChange_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 120));
}
