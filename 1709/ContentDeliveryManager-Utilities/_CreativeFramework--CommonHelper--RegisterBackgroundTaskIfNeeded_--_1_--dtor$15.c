/*
 * XREFs of _CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded_::_1_::dtor$15 @ 0x1800BC851
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded_::_1_::dtor_15(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 136));
}
