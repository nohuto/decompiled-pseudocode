/*
 * XREFs of ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x18013DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18013E3F0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x1801420B8 (-NotifyGlobalComponentsForWindowStateChange@ViewWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@.c)
 *     ??$WindowDestroyed@AEAIAEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@@Z @ 0x180143F44 (--$WindowDestroyed@AEAIAEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@@Z.c)
 *     ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180145CB4 (-SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::WindowDestroyed(RTL_SRWLOCK **this, HWND a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  HWND v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  ViewEventDispatcher::AcquireLockExclusive(this[21], &SRWLock);
  if ( a2 == (HWND)this[32] )
  {
    ViewManagerInteropTraceLogging::WindowDestroyed<unsigned int &,HWND__ * &>((char *)this + 148, &v5);
    ((void (__fastcall *)(char *))(*(this - 1))[21].Ptr)((char *)this - 8);
    this[32] = 0LL;
    WindowReadyState::SetWindow(this + 43, 0LL, 0LL);
    ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange(this - 1, a2, 1LL);
    ViewWrapperBase::_ReconcileSessionIdleTaskCompletion((ViewWrapperBase *)(this - 1));
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
