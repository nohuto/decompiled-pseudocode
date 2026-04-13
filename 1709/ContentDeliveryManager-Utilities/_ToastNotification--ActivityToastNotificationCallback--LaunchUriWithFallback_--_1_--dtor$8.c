/*
 * XREFs of _ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback_::_1_::dtor$8 @ 0x1800B779D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
