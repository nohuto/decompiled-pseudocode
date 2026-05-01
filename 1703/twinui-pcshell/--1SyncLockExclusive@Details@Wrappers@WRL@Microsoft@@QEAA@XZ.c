/*
 * XREFs of ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800026A0
 * Callers:
 *     _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$0 @ 0x18019B014 (_ApplicationViewManagerVisibilityDebouncer--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___::Run_::_1_::dtor$0 @ 0x18019B134 (_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5f803f865b4b07caa2d72f9fc7ffab60___--Run_-.c)
 *     _NotificationDispatcher::AddTask_::_1_::dtor$0 @ 0x18019B170 (_NotificationDispatcher--AddTask_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::v_SetCloak_::_1_::dtor$0 @ 0x18019B1DF (_CWin32ApplicationView--v_SetCloak_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$0 @ 0x18019B2C3 (_CWin32ApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$0.c)
 *     _CWin32ApplicationView::GetCloakableWindows_::_1_::dtor$0 @ 0x18019B347 (_CWin32ApplicationView--GetCloakableWindows_--_1_--dtor$0.c)
 *     _CWinRTApplicationView::SetShowInSwitchers_::_1_::dtor$2 @ 0x18019B3BF (_CWinRTApplicationView--SetShowInSwitchers_--_1_--dtor$2.c)
 *     _CWinRTApplicationView::SetSizeConstraintsForDpi_::_1_::dtor$0 @ 0x18019B413 (_CWinRTApplicationView--SetSizeConstraintsForDpi_--_1_--dtor$0.c)
 *     _CApplicationViewBase::SetCloak_::_1_::dtor$0 @ 0x18019B45B (_CApplicationViewBase--SetCloak_--_1_--dtor$0.c)
 *     _CApplicationViewBase::SetVirtualDesktopId_::_1_::dtor$0 @ 0x18019B467 (_CApplicationViewBase--SetVirtualDesktopId_--_1_--dtor$0.c)
 *     _CApplicationViewBase::SetEnterpriseId_::_1_::dtor$0 @ 0x18019B48B (_CApplicationViewBase--SetEnterpriseId_--_1_--dtor$0.c)
 *     _CApplicationViewBase::RefreshEnterpriseId_::_1_::dtor$0 @ 0x18019B4A3 (_CApplicationViewBase--RefreshEnterpriseId_--_1_--dtor$0.c)
 *     _CApplicationViewBase::ResetEnterpriseIdOnProcessIdMatch_::_1_::dtor$0 @ 0x18019B4AF (_CApplicationViewBase--ResetEnterpriseIdOnProcessIdMatch_--_1_--dtor$0.c)
 *     _XamlExplorerHostShellComponent::CreateXamlExplorerHostWindow_::_1_::dtor$1 @ 0x18019F548 (_XamlExplorerHostShellComponent--CreateXamlExplorerHostWindow_--_1_--dtor$1.c)
 *     _XamlExplorerHost::SubscribeToServices_::_1_::dtor$0 @ 0x18019F90A (_XamlExplorerHost--SubscribeToServices_--_1_--dtor$0.c)
 *     _XamlExplorerHost::CreateTaskbar_::_1_::dtor$0 @ 0x18019F9CF (_XamlExplorerHost--CreateTaskbar_--_1_--dtor$0.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84__void_Windows::UI::Xaml::Window_____ptr64_HWND_______ptr64_::Invoke_::_1_::dtor$5 @ 0x18019FBEF (_Platform--Details--__abi_FunctorCapture__lambda_59c80d91275ef09dee0ea9ccd3ec1c84___ea_18019FBEF.c)
 *     _XamlTaskbarManager::SubscribeToServices_::_1_::dtor$0 @ 0x18019FDB5 (_XamlTaskbarManager--SubscribeToServices_--_1_--dtor$0.c)
 *     _XamlTaskbarManager::UpdateTaskbarExistenceForMonitor_::_1_::dtor$0 @ 0x18019FE4E (_XamlTaskbarManager--UpdateTaskbarExistenceForMonitor_--_1_--dtor$0.c)
 *     _XamlTaskbarManager::CreateInitialTaskbars_::_1_::dtor$0 @ 0x18019FEB1 (_XamlTaskbarManager--CreateInitialTaskbars_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::SetTaskbarData_::_1_::dtor$0 @ 0x1801A07ED (_XamlTaskbarProxy--SetTaskbarData_--_1_--dtor$0.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_ec2760f202b80fe0ecce5a590d38ad00__void_::Invoke_::_1_::dtor$0 @ 0x1801A0A63 (_Platform--Details--__abi_FunctorCapture__lambda_ec2760f202b80fe0ecce5a590d38ad00__void_--Invoke.c)
 *     _AppViewSwitchItemDataSource::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1801A4034 (_AppViewSwitchItemDataSource--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair_::_1_::dtor$0 @ 0x1801A5211 (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--RegisterHostComponen.c)
 *     _Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList_::_1_::dtor$0 @ 0x1801A525F (_Windows--Internal--OneCore--ViewEventHandlers--ComponentRelationshipStore--PlaceComponentInfoOn.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive(RTL_SRWLOCK **this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ReleaseSRWLockExclusive(v2);
    *this = 0LL;
  }
}
