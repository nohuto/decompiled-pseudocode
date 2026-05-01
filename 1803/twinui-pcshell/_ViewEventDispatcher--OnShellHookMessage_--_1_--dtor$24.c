/*
 * XREFs of _ViewEventDispatcher::OnShellHookMessage_::_1_::dtor$24 @ 0x1800B2C38
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventDispatcher::OnShellHookMessage_::_1_::dtor_24(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(a2 + 48);
}
