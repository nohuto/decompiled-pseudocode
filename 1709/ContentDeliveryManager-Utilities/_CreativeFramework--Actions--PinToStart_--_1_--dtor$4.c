/*
 * XREFs of _CreativeFramework::Actions::PinToStart_::_1_::dtor$4 @ 0x1800BA07C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::PinToStart_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 80));
}
