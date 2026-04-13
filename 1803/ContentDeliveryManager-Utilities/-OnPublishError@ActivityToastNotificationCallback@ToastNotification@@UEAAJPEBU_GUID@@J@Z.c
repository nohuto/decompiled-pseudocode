/*
 * XREFs of ?OnPublishError@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@J@Z @ 0x18004BDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800032AC (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180048E7C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::OnPublishError(
        HANDLE *this,
        const struct _GUID *a2,
        unsigned int a3)
{
  __int64 v4; // r8
  const char *v5; // r9
  const char *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrMsg(
    retaddr,
    (void *)0x9E,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)a3,
    (__int64)"Error publishing completion activity",
    v7);
  if ( !SetEvent(this[3]) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x86F, v4, v5);
    __debugbreak();
  }
  return 0LL;
}
