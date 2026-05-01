/*
 * XREFs of ?Shutdown@ConnectedStandbyHelper@@QEAAXXZ @ 0x1801E1C5C
 * Callers:
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CF790 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801D9BD0 (-UnsubscribeFromServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     PdcNotificationClientUnregister @ 0x1802FA114 (PdcNotificationClientUnregister.c)
 */

void __fastcall ConnectedStandbyHelper::Shutdown(ConnectedStandbyHelper *this)
{
  void *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v3 = PdcNotificationClientUnregister(v2);
    if ( v3 >= 0 )
      *((_QWORD *)this + 4) = 0LL;
    else
      wil::details::in1diag3::_Log_NtStatus(
        retaddr,
        (void *)0x27,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
        (const char *)(unsigned int)v3);
  }
}
