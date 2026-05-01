/*
 * XREFs of _ViewEventDispatcher::OnShellHookMessage_::_1_::dtor$1 @ 0x1800B2C44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::OnShellHookMessage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(a2 + 56);
}
