/*
 * XREFs of _CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::dtor$4 @ 0x1800BB53F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::LaunchCortanaService::LaunchCortana_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
