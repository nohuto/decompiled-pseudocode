/*
 * XREFs of ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C328
 * Callers:
 *     ?SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z @ 0x18013B390 (-SetImageLocation@UAPViewWrapper@@UEAAJURect@Foundation@Windows@@@Z.c)
 *     ?SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18013F220 (-SetShellCloak@ViewWrapperBase@@UEAAJW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z.c)
 *     ?SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z @ 0x18013F350 (-SetWindowOwner@ViewWrapperBase@@UEAAJPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@ViewWrapperBase@@UEAAJXZ @ 0x18013F420 (-SetForegroundWindow@ViewWrapperBase@@UEAAJXZ.c)
 *     ?GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z @ 0x18013F590 (-GetLightweightProperty@ViewWrapperBase@@UEAAJPEBGPEAK@Z.c)
 *     ?GetPropertyAsBoolean@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18013FE90 (-GetPropertyAsBoolean@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x18013FF70 (-GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 *     ?get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801401E0 (-get_NavigationLevel@ViewWrapperBase@@UEAAJPEAW4NavigationLevel@ViewManagerInterop@Shell@Interna.c)
 *     ?get_CanHandleCloseRequest@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180140750 (-get_CanHandleCloseRequest@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     ?get_ProcessId@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1801407C0 (-get_ProcessId@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     ?get_WindowResizingState@ViewWrapperBase@@UEAAJPEAW4WindowResizingState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180140950 (-get_WindowResizingState@ViewWrapperBase@@UEAAJPEAW4WindowResizingState@ViewManagerInterop@Shell.c)
 *     ?get_PointerActivationPolicy@ViewWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180140AC0 (-get_PointerActivationPolicy@ViewWrapperBase@@UEAAJPEAW4PointerActivationPolicy@ViewManagerInter.c)
 *     ?EnableInput@ViewWrapperBase@@UEAAJE@Z @ 0x180140B40 (-EnableInput@ViewWrapperBase@@UEAAJE@Z.c)
 *     ?get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180140BE0 (-get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x180141160 (-get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     ?get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z @ 0x180141210 (-get_ClientWindowReadyForPresentation@ViewWrapperBase@@UEAAJPEAE@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___::Run @ 0x180144E10 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___--Run.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall ViewEventDispatcher::AcquireLockShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = a1 + 37;
  AcquireSRWLockShared(a1 + 37);
  *a2 = v2;
  return a2;
}
