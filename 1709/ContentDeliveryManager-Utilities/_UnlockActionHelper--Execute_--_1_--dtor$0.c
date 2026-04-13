/*
 * XREFs of _UnlockActionHelper::Execute_::_1_::dtor$0 @ 0x1800B96F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockActionHelper::Execute_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 136));
}
