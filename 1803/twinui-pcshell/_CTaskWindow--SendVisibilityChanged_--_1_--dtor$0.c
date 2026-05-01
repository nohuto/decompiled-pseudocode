/*
 * XREFs of _CTaskWindow::SendVisibilityChanged_::_1_::dtor$0 @ 0x180134C02
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTaskWindow::SendVisibilityChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 80));
}
