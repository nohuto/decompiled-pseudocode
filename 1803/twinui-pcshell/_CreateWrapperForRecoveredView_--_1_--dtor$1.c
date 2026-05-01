/*
 * XREFs of _CreateWrapperForRecoveredView_::_1_::dtor$1 @ 0x1801CA386
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateWrapperForRecoveredView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 64));
}
