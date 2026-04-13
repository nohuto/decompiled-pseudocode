/*
 * XREFs of _UniqueExtendedExecutionSession::CloseSession_::_1_::dtor$5 @ 0x1800B97DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UniqueExtendedExecutionSession::CloseSession_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 112));
}
