/*
 * XREFs of ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802263D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180077C4C (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x18022ABB4 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall XamlLauncher::ConnectToMonitor(XamlLauncher *this, struct IImmersiveMonitor *a2)
{
  unsigned __int8 v4; // al

  if ( !*((_QWORD *)this + 28) )
    return 2147943568LL;
  if ( ImmersiveMonitorHelper::ConnectToMonitor(*((ImmersiveMonitorHelper **)this + 13), a2) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 96LL))(*((_QWORD *)this + 28));
    XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 24), v4);
  }
  return 0LL;
}
