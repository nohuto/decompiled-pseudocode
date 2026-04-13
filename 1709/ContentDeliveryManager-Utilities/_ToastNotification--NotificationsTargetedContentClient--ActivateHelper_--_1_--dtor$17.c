/*
 * XREFs of _ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor$17 @ 0x1800B7492
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180012E70 (--1-$com_ptr_t@UITargetedContentItemState@TargetedContent@Services@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper_::_1_::dtor_17(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 96) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 96) &= ~4u;
    return wil::com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>::~com_ptr_t<Windows::Services::TargetedContent::ITargetedContentItemState,wil::err_exception_policy>((__int64 *)(a2 + 32));
  }
  return result;
}
