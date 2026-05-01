/*
 * XREFs of ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x180267E78
 * Callers:
 *     ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x180267760 (-QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4Multitask.c)
 *     ?MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ @ 0x1802713F0 (-MoveForegroundForPendingHostDismiss@CMultitaskingViewManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ForegroundStaging::SetActive(ForegroundStaging *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)this;
  if ( !v1 )
  {
    v2 = -2147019873;
    v3 = 26LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\MultitaskingView\\inc\\ForegroundStagingWindow.h",
      (const char *)v2);
    return v2;
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  if ( (v2 & 0x80000000) != 0 )
  {
    v3 = 27LL;
    goto LABEL_5;
  }
  return v2;
}
