/*
 * XREFs of ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x18007C330
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18007D9F0 (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::Shutdown(NotificationDispatcher **this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  NotificationDispatcher::Shutdown(this[14]);
  v2 = (*(__int64 (__fastcall **)(NotificationDispatcher *, _QWORD))(*(_QWORD *)this[21] + 96LL))(
         this[21],
         *((unsigned int *)this + 44));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x162,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v2);
  *((_DWORD *)this + 44) = 0;
  return 0LL;
}
