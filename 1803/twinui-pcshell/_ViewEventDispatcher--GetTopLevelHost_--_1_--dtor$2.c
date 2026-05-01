/*
 * XREFs of _ViewEventDispatcher::GetTopLevelHost_::_1_::dtor$2 @ 0x1801CB4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::GetTopLevelHost_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 32));
}
