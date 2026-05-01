/*
 * XREFs of ?WindowRemoved@WindowWrapperBase@@UEAAJXZ @ 0x1801F4770
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x18005B600 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801F2894 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x1801F2EA4 (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x180238AEC (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall WindowWrapperBase::WindowRemoved(WindowWrapperBase *this)
{
  __int64 v2; // rdi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 168LL))(*((_QWORD *)this + 37));
  v2 = *((int *)this + 78);
  SafeRelease<IShellItemArray>((char *)this + 144);
  *((_DWORD *)this + 78) = 0;
  WindowReadyState::SetWindow((__int64)this + 344, 0LL, 0);
  WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)this - 16, v2, 1);
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)((char *)this - 16));
  return 0LL;
}
