/*
 * XREFs of ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C
 * Callers:
 *     ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x1801110F0 (-SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?SetShellCloak@ViewWrapperBase@@UEAAJW4_SET_SHELL_CLOAK@@@Z @ 0x180114CF0 (-SetShellCloak@ViewWrapperBase@@UEAAJW4_SET_SHELL_CLOAK@@@Z.c)
 *     ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x180114E20 (-SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@ViewWrapperBase@@UEAAJXZ @ 0x180114EF0 (-SetForegroundWindow@ViewWrapperBase@@UEAAJXZ.c)
 *     ?GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z @ 0x180115060 (-GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z.c)
 *     ?GetPropertyAsBoolean@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180115960 (-GetPropertyAsBoolean@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x180115A40 (-GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180115CB0 (-get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Interna.c)
 *     ?get_CanHandleCloseRequest@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180116210 (-get_CanHandleCloseRequest@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     ?get_ProcessId@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180116280 (-get_ProcessId@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     ?get_WindowResizingState@ViewWrapperBase@@UEAAJPEAW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116410 (-get_WindowResizingState@ViewWrapperBase@@UEAAJPEAW4WindowResizingState@ViewManagerInterop@Shell.c)
 *     ?get_PointerActivationPolicy@ViewWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180116580 (-get_PointerActivationPolicy@ViewWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInter.c)
 *     ?EnableInput@ViewWrapperBase@@UEAAJE@Z @ 0x180116600 (-EnableInput@ViewWrapperBase@@UEAAJE@Z.c)
 *     ?get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z @ 0x1801166A0 (-get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180116B10 (-get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180116BC0 (-get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___::Run @ 0x18011A4F0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___--Run.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 */

RTL_SRWLOCK **__fastcall ViewEventDispatcher::AcquireLockShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 28, a2);
  return a2;
}
