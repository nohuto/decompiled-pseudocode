/*
 * XREFs of _CursorNotificationProcessor::OnMitMessageReceived_::_1_::dtor$1 @ 0x1800E3F9E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CursorNotificationProcessor::OnMitMessageReceived_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<Microsoft::WRL::ComPtr<IMessageProxy>>::~vector<Microsoft::WRL::ComPtr<IMessageProxy>>(a2 + 72, a2);
}
