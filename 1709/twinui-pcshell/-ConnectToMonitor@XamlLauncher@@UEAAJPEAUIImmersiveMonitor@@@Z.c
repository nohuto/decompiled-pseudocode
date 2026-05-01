/*
 * XREFs of ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18017F920
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1801821B0 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1801869C8 (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::ConnectToMonitor(XamlLauncher *this, struct IImmersiveMonitor *a2)
{
  char v4; // al

  if ( !*((_QWORD *)this + 28) )
    return 2147943568LL;
  if ( ImmersiveMonitorHelper::ConnectToMonitor(*((ImmersiveMonitorHelper **)this + 13), a2) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 28) + 96LL))(*((_QWORD *)this + 28));
    XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 24), v4);
  }
  return 0LL;
}
