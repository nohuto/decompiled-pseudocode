/*
 * XREFs of ?PushDesiredNavigationLevelToDerivedClass@WindowWrapperBase@@AEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F2D1C
 * Callers:
 *     _lambda_86226957380faec138486a0d7bb67cf3_::operator() @ 0x1801F0C08 (_lambda_86226957380faec138486a0d7bb67cf3_--operator().c)
 *     ?SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z @ 0x1801F3B40 (-SetNavigationLevelOverride@WindowWrapperBase@@UEAA_NW4NavigationLevelOverride@@@Z.c)
 *     ?SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1801F3D70 (-SetRegistration@WindowWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario.c)
 *     ?put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z @ 0x1801F5670 (-put_VisibilityRevoked@WindowWrapperBase@@UEAAJE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801F2894 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 */

void __fastcall WindowWrapperBase::PushDesiredNavigationLevelToDerivedClass(WindowWrapperBase *a1, unsigned int a2)
{
  __int64 v4; // rsi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 39) + 168LL))(*((_QWORD *)a1 + 39));
  v4 = *((int *)a1 + 82);
  (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, a2);
  if ( v4 )
    WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)a1, v4, 2);
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion(a1);
}
