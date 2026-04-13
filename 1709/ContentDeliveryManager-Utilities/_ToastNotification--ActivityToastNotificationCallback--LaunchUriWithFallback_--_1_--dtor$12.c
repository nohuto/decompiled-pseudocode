/*
 * XREFs of _ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback_::_1_::dtor$12 @ 0x1800B77C1
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180012E70 (--1-$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::LaunchUriWithFallback_::_1_::dtor_12(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 8;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~8u;
    return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 72));
  }
  return result;
}
