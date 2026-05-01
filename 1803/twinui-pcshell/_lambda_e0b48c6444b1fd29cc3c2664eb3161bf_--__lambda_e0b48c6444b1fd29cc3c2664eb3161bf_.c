/*
 * XREFs of _lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::__lambda_e0b48c6444b1fd29cc3c2664eb3161bf_ @ 0x1800F892C
 * Callers:
 *     _CRotationManagerSync::ReconcileModernOrientationPreferences_::_1_::dtor$1 @ 0x1800B0E88 (_CRotationManagerSync--ReconcileModernOrientationPreferences_--_1_--dtor$1.c)
 *     _CImmersiveMode::ImmersiveLauncherWNFCallback_::_1_::dtor$1 @ 0x1800B124C (_CImmersiveMode--ImmersiveLauncherWNFCallback_--_1_--dtor$1.c)
 *     _CApplicationManager::OnMessage_::_1_::dtor$16 @ 0x1800B3C0C (_CApplicationManager--OnMessage_--_1_--dtor$16.c)
 *     _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$5 @ 0x1800B4190 (_CImmersiveApp--_ScheduleApplicationNotifications_--_1_--dtor$5.c)
 *     _CIAMSpecialWindowBase::s_SpecialMsgWndProc_::_1_::dtor$16 @ 0x1800B5E8C (_CIAMSpecialWindowBase--s_SpecialMsgWndProc_--_1_--dtor$16.c)
 *     _CApplicationManager::_SendServiceAvailabilityChangedNotification_::_1_::dtor$3 @ 0x1800F0B63 (_CApplicationManager--_SendServiceAvailabilityChangedNotification_--_1_--dtor$3.c)
 *     _Windows::Internal::ComTaskPoolHandler::_FireCompletion_::_1_::dtor$1 @ 0x1801A7A8B (_Windows--Internal--ComTaskPoolHandler--_FireCompletion_--_1_--dtor$1.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028a____::_1_::dtor$0 @ 0x1802026E6 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_2d2fadc52317ec55899deb772019028.c)
 *     _MonitorFrame::DestroyInternal_::_1_::dtor$1 @ 0x18020A7FA (_MonitorFrame--DestroyInternal_--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883____::_1_::dtor$0 @ 0x18021A011 (_CreationThreadDispatcher--RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_49f034628129c0f6bb6239b08c86aef5____::_1_::dtor$0 @ 0x18021A135 (_CreationThreadDispatcher--RunAsync__lambda_49f034628129c0f6bb6239b08c86aef5____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae____::_1_::dtor$0 @ 0x18021A379 (_CreationThreadDispatcher--RunAsync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____::_1_::dtor$0 @ 0x18021A49D (_CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____--_1_--dtor$0.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ActivationChanged_::_1_::dtor$1 @ 0x18021BE07 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ActivationChanged_--_1_--dtor$.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$1 @ 0x18021E7C8 (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDism_ea_18021E7C8.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnLightDismiss_::_1_::dtor$1 @ 0x18021EBE7 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnLightDismiss_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ViewLoaded_::_1_::dtor$1 @ 0x18021F480 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ViewLoaded_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::__lambda_e0b48c6444b1fd29cc3c2664eb3161bf_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
