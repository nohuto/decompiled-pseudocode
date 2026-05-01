/*
 * XREFs of _lambda_4c0281b189a4f50ab192cc99e41387bc_::__lambda_4c0281b189a4f50ab192cc99e41387bc_ @ 0x18001A690
 * Callers:
 *     _CActivationBasedAppAndGlomCollection::RemoveApplication_::_1_::dtor$6 @ 0x1801E60C5 (_CActivationBasedAppAndGlomCollection--RemoveApplication_--_1_--dtor$6.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$16 @ 0x1801E6FE2 (_CApplicationManager--_HandleActivation2_--_1_--dtor$16.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d____::_1_::dtor$2 @ 0x1801E72F2 (_CIAMGlobals--QueueViewManagementTask__lambda_dd218d06e01812e8f78efc8b549ff05d____--_1_--dtor$2.c)
 *     _CDelayIAMOperations::CDelayedOperation__lambda_8cc3593281a222309b233a0538363bd3___::operator()_::_1_::dtor$3 @ 0x1801E7442 (_CDelayIAMOperations--CDelayedOperation__lambda_8cc3593281a222309b233a0538363bd3____ea_1801E7442.c)
 *     _CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps_::_1_::dtor$3 @ 0x1801E79DC (_CImmersiveWindowManager--_ScheduleInteractiveNotificationForApps_--_1_--dtor$3.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x1801E7FC3 (_CAppViewManager--Switch_--_1_--dtor$2.c)
 *     _CImmersiveApp::_QueuePresentationChangeNotification_::_1_::dtor$2 @ 0x1801E8F84 (_CImmersiveApp--_QueuePresentationChangeNotification_--_1_--dtor$2.c)
 *     __lambda_4283d24cd011cefa10f50035df6139a0_::operator()_::_1_::dtor$5 @ 0x1801E93B8 (__lambda_4283d24cd011cefa10f50035df6139a0_--operator()_--_1_--dtor$5.c)
 *     _HolographicPositioner::_SendViewTransitionNotification_::_1_::dtor$3 @ 0x1801ED815 (_HolographicPositioner--_SendViewTransitionNotification_--_1_--dtor$3.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$4 @ 0x1801F1920 (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_4c0281b189a4f50ab192cc99e41387bc_::__lambda_4c0281b189a4f50ab192cc99e41387bc_(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v4 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
