/*
 * XREFs of _lambda_c684876424e85aad1b0ea528e88729ce_::__lambda_c684876424e85aad1b0ea528e88729ce_ @ 0x18000A3C4
 * Callers:
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x1801E650C (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x1801E6598 (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _ViewWrapperBase::ChangeSuppressPopupsCount_::_1_::dtor$1 @ 0x1801E699C (_ViewWrapperBase--ChangeSuppressPopupsCount_--_1_--dtor$1.c)
 *     _CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor$1 @ 0x1801E69F0 (_CApplicationManager--GetImmersiveApplicationArraySafe_--_1_--dtor$1.c)
 *     _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$4 @ 0x1801E6AEC (_CApplicationManager--_CreateImmersiveApp_--_1_--dtor$4.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$6 @ 0x1801E6E36 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$6.c)
 *     _CApplicationManager::_GetLastActiveModernApp_::_1_::dtor$1 @ 0x1801E71C4 (_CApplicationManager--_GetLastActiveModernApp_--_1_--dtor$1.c)
 *     _CClassicWindowManager::EnumerateOwnershipTree_::_1_::dtor$4 @ 0x1801E7DD5 (_CClassicWindowManager--EnumerateOwnershipTree_--_1_--dtor$4.c)
 *     _CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons_::_1_::dtor$2 @ 0x1801E9328 (_CFrameApplicationPresentation--SynchronizeWindowTitleAndButtons_--_1_--dtor$2.c)
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a____::_1_::dtor$0 @ 0x1801E9418 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_e1bed2b100b1af394f2735e08786001a____--_1.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$3 @ 0x1801EBBEF (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$6 @ 0x1801EECEB (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$6.c)
 *     _ViewEventDispatcher::_QueuePendingActivationNodeForDestruction_::_1_::dtor$1 @ 0x1801EED0F (_ViewEventDispatcher--_QueuePendingActivationNodeForDestruction_--_1_--dtor$1.c)
 *     _ViewWrapperBase::ViewDestroyed_::_1_::dtor$2 @ 0x1801EF400 (_ViewWrapperBase--ViewDestroyed_--_1_--dtor$2.c)
 *     _ViewWrapperBase::NotifyHostChanged_::_1_::dtor$1 @ 0x1801EF4A8 (_ViewWrapperBase--NotifyHostChanged_--_1_--dtor$1.c)
 *     _ViewWrapperBase::NotifyReadyForPresentationChanged_::_1_::dtor$1 @ 0x1801EF520 (_ViewWrapperBase--NotifyReadyForPresentationChanged_--_1_--dtor$1.c)
 *     _ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange_::_1_::dtor$1 @ 0x1801EF550 (_ViewWrapperBase--NotifyGlobalComponentsForWindowStateChange_--_1_--dtor$1.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce____::_1_::dtor$0 @ 0x1801F0CBB (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_c684876424e85aad1b0ea528e88729ce_::__lambda_c684876424e85aad1b0ea528e88729ce_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
