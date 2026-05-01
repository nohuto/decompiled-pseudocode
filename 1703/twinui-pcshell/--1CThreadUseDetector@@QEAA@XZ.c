/*
 * XREFs of ??1CThreadUseDetector@@QEAA@XZ @ 0x180026B58
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$0 @ 0x180197CDD (_CApplicationManager--OnShellHookMessage_--_1_--dtor$0.c)
 *     _CApplicationManager::PerformModeBasedCallouts_::_1_::dtor$0 @ 0x180198169 (_CApplicationManager--PerformModeBasedCallouts_--_1_--dtor$0.c)
 *     _CApplicationManager::DisplaySettingsChange_::_1_::dtor$0 @ 0x180198325 (_CApplicationManager--DisplaySettingsChange_--_1_--dtor$0.c)
 *     _CApplicationManager::_CreatePerMonitorComponents_::_1_::dtor$0 @ 0x18019839D (_CApplicationManager--_CreatePerMonitorComponents_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor$0 @ 0x1801986F1 (_CApplicationManager--_HandleApplicationRequestActivation_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$0 @ 0x180198721 (_CApplicationManager--_HandleActivation2_--_1_--dtor$0.c)
 *     _XamlAllUpViewHost::ToggleAllUpView_::_1_::dtor$0 @ 0x180199206 (_XamlAllUpViewHost--ToggleAllUpView_--_1_--dtor$0.c)
 *     _CImmersiveMode::HandleActivationDeprecated_::_1_::dtor$0 @ 0x180199212 (_CImmersiveMode--HandleActivationDeprecated_--_1_--dtor$0.c)
 *     _CImmersiveMode::CompleteInitialization_::_1_::dtor$0 @ 0x18019922A (_CImmersiveMode--CompleteInitialization_--_1_--dtor$0.c)
 *     _CImmersiveMode::_PrepareDeferredNotifications_::_1_::dtor$0 @ 0x180199266 (_CImmersiveMode--_PrepareDeferredNotifications_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleMonitorMove_::_1_::dtor$0 @ 0x180199381 (_CClassicWindowManager--HandleMonitorMove_--_1_--dtor$0.c)
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$0 @ 0x180199399 (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$0.c)
 *     _AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged_::_1_::dtor$0 @ 0x180199413 (_AgileApplicationViewChangeListenerConverter--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleOwnerSwitch_::_1_::dtor$0 @ 0x18019942B (_CClassicWindowManager--HandleOwnerSwitch_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x180199443 (_CClassicWindowManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CClassicWindowManager::IsActiveApp_::_1_::dtor$0 @ 0x18019947F (_CClassicWindowManager--IsActiveApp_--_1_--dtor$0.c)
 *     _XamlAllUpViewHost::Show_::_1_::dtor$0 @ 0x1801A0EEE (_XamlAllUpViewHost--Show_--_1_--dtor$0.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$0 @ 0x1801A12C1 (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$0.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$0 @ 0x1801A3576 (_XamlAltTabViewHost--Show_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$0 @ 0x1801A3711 (_XamlSnapAssistViewHost--Show_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CThreadUseDetector::~CThreadUseDetector(LPCRITICAL_SECTION *this)
{
  if ( *((int *)this + 2) >= 0 )
    LeaveCriticalSection(*this);
}
