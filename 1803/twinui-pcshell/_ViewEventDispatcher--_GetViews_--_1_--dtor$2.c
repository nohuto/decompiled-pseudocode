/*
 * XREFs of _ViewEventDispatcher::_GetViews_::_1_::dtor$2 @ 0x1801D015E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::_GetViews_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 96));
}
