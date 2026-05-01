/*
 * XREFs of _lambda_4c0281b189a4f50ab192cc99e41387bc_::__lambda_4c0281b189a4f50ab192cc99e41387bc_ @ 0x180019780
 * Callers:
 *     _CActivationBasedAppAndGlomCollection::RemoveApplication_::_1_::dtor$6 @ 0x180197AD4 (_CActivationBasedAppAndGlomCollection--RemoveApplication_--_1_--dtor$6.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$16 @ 0x1801987C9 (_CApplicationManager--_HandleActivation2_--_1_--dtor$16.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac____::_1_::dtor$2 @ 0x180198A75 (_CIAMGlobals--QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac____--_1_--dtor$2.c)
 *     _CDelayIAMOperations::CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a___::operator()_::_1_::dtor$3 @ 0x180198BE9 (_CDelayIAMOperations--CDelayedOperation__lambda_13c840c931e6c4b9015195fc4e60665a____ea_180198BE9.c)
 *     _CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps_::_1_::dtor$3 @ 0x18019918E (_CImmersiveWindowManager--_ScheduleInteractiveNotificationForApps_--_1_--dtor$3.c)
 *     _CAppViewManager::Switch_::_1_::dtor$2 @ 0x1801996CB (_CAppViewManager--Switch_--_1_--dtor$2.c)
 *     _CImmersiveApp::_QueuePresentationChangeNotification_::_1_::dtor$2 @ 0x18019A4C6 (_CImmersiveApp--_QueuePresentationChangeNotification_--_1_--dtor$2.c)
 *     __lambda_4283d24cd011cefa10f50035df6139a0_::operator()_::_1_::dtor$5 @ 0x18019A991 (__lambda_4283d24cd011cefa10f50035df6139a0_--operator()_--_1_--dtor$5.c)
 *     _HolographicPositioner::_SendViewTransitionNotification_::_1_::dtor$3 @ 0x18019D82C (_HolographicPositioner--_SendViewTransitionNotification_--_1_--dtor$3.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$4 @ 0x1801A12F1 (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
