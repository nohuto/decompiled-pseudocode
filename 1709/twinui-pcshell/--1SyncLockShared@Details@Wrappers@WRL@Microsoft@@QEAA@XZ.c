/*
 * XREFs of ??1SyncLockShared@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180002874
 * Callers:
 *     _CWin32ApplicationView::GetSizeConstraintsForDpi_::_1_::dtor$0 @ 0x1801E9CE4 (_CWin32ApplicationView--GetSizeConstraintsForDpi_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::UpdateWindowPosition_::_1_::dtor$0 @ 0x1801E9E94 (_XamlTaskbarProxy--UpdateWindowPosition_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::dtor$0 @ 0x1801EC5A7 (_PenWorkspace--Discover--RecentAppsCache--GetSortedAppList_--_1_--dtor$0.c)
 *     _XamlTaskbarManager::GetTaskbar_::_1_::dtor$0 @ 0x1801F00D6 (_XamlTaskbarManager--GetTaskbar_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CreateDesktopW_::_1_::dtor$0 @ 0x1801F00EE (_VirtualDesktopController--CreateDesktopW_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::FindFrameWrapper_::_1_::dtor$0 @ 0x1801F08E8 (_TouchKeyboardExperienceManager--FindFrameWrapper_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::GetStartButtonRect_::_1_::dtor$0 @ 0x1801F08F4 (_XamlTaskbarProxy--GetStartButtonRect_--_1_--dtor$0.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_::Invoke_::_1_::dtor$0 @ 0x1801F0900 (_Platform--Details--__abi_FunctorCapture__lambda_96eb3092302b05654d332d00c578341a__void_--Invoke.c)
 *     _XamlTaskbarProxy::AsyncDestroy_::_1_::dtor$0 @ 0x1801F0941 (_XamlTaskbarProxy--AsyncDestroy_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::OnClientWindowReadyForPresentationChanged_::_1_::dtor$3 @ 0x1801F6601 (_TouchKeyboardExperienceManager--OnClientWindowReadyForPresentationChanged_--_1_--dtor$3.c)
 *     _TouchKeyboardExperienceManager::OnViewCreated_::_1_::dtor$0 @ 0x1801F6619 (_TouchKeyboardExperienceManager--OnViewCreated_--_1_--dtor$0.c)
 *     _VirtualDesktopDataSource::get_VirtualDesktops_::_1_::dtor$0 @ 0x1801F6E48 (_VirtualDesktopDataSource--get_VirtualDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::SwitchToDesktop_::_1_::dtor$0 @ 0x1801F6FFE (_VirtualDesktopController--SwitchToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::RemoveDesktop_::_1_::dtor$0 @ 0x1801F7022 (_VirtualDesktopController--RemoveDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::MoveSwitchItemToDesktop_::_1_::dtor$0 @ 0x1801F708E (_VirtualDesktopController--MoveSwitchItemToDesktop_--_1_--dtor$0.c)
 *     _VirtualDesktopController::CanSwitchItemMoveDesktops_::_1_::dtor$0 @ 0x1801F70CA (_VirtualDesktopController--CanSwitchItemMoveDesktops_--_1_--dtor$0.c)
 *     _VirtualDesktopController::GetAdjacentDesktop_::_1_::dtor$0 @ 0x1801F70EE (_VirtualDesktopController--GetAdjacentDesktop_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockShared::~SyncLockShared(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockShared(v2);
    *this = 0LL;
  }
}
