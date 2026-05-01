/*
 * XREFs of _ViewEventDispatcher::DecrementPopupCount_::_1_::dtor$1 @ 0x1801CA468
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::DecrementPopupCount_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 64));
}
