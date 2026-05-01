/*
 * XREFs of _lambda_c684876424e85aad1b0ea528e88729ce_::__lambda_c684876424e85aad1b0ea528e88729ce_ @ 0x18000A368
 * Callers:
 *     _CApplicationManager::RefreshMonitorMappings_::_1_::dtor$3 @ 0x180197EBF (_CApplicationManager--RefreshMonitorMappings_--_1_--dtor$3.c)
 *     _CApplicationManager::TerminateApplication_::_1_::dtor$4 @ 0x180197F1F (_CApplicationManager--TerminateApplication_--_1_--dtor$4.c)
 *     _CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor$1 @ 0x180198301 (_CApplicationManager--GetImmersiveApplicationArraySafe_--_1_--dtor$1.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$6 @ 0x180198649 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$6.c)
 *     _CApplicationManager::_GetLastActiveModernApp_::_1_::dtor$1 @ 0x18019899D (_CApplicationManager--_GetLastActiveModernApp_--_1_--dtor$1.c)
 *     _CClassicWindowManager::EnumerateOwnershipTree_::_1_::dtor$4 @ 0x1801994F7 (_CClassicWindowManager--EnumerateOwnershipTree_--_1_--dtor$4.c)
 *     _CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons_::_1_::dtor$2 @ 0x18019A8E9 (_CFrameApplicationPresentation--SynchronizeWindowTitleAndButtons_--_1_--dtor$2.c)
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098____::_1_::dtor$0 @ 0x18019AA09 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_eb88fe4cf858de5e6f9898dba3345098____--_1.c)
 *     _CVirtualTouchpadExperienceManager::HideInternal_::_1_::dtor$3 @ 0x18019CA1F (_CVirtualTouchpadExperienceManager--HideInternal_--_1_--dtor$3.c)
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$6 @ 0x18019EB44 (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$6.c)
 *     _std::_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std::allocator_int__void_bool_::_Do_call_::_1_::dtor$10 @ 0x18019EB74 (_std--_Func_impl__lambda_50b3f89cea81ac99891e676c02ace6a0__std--allocator_int__void_ea_18019EB74.c)
 *     _ViewWrapperBase::ViewDestroyed_::_1_::dtor$2 @ 0x18019F2A1 (_ViewWrapperBase--ViewDestroyed_--_1_--dtor$2.c)
 *     _ViewWrapperBase::NotifyHostChanged_::_1_::dtor$1 @ 0x18019F349 (_ViewWrapperBase--NotifyHostChanged_--_1_--dtor$1.c)
 *     _ViewWrapperBase::ChangeSuppressPopupsCount_::_1_::dtor$1 @ 0x18019F36D (_ViewWrapperBase--ChangeSuppressPopupsCount_--_1_--dtor$1.c)
 *     _ViewWrapperBase::NotifyGlobalComponentsForWindowStateChange_::_1_::dtor$1 @ 0x18019F3E5 (_ViewWrapperBase--NotifyGlobalComponentsForWindowStateChange_--_1_--dtor$1.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce____::_1_::dtor$0 @ 0x1801A0B28 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729c.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
