/*
 * XREFs of ??1CThreadUseDetector@@QEAA@XZ @ 0x1800272C8
 * Callers:
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$0 @ 0x1801E62E1 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$0.c)
 *     _CApplicationManager::PerformModeBasedCallouts_::_1_::dtor$0 @ 0x1801E6840 (_CApplicationManager--PerformModeBasedCallouts_--_1_--dtor$0.c)
 *     _CApplicationManager::DisplaySettingsChange_::_1_::dtor$0 @ 0x1801E6A14 (_CApplicationManager--DisplaySettingsChange_--_1_--dtor$0.c)
 *     _CApplicationManager::_CreatePerMonitorComponents_::_1_::dtor$0 @ 0x1801E6A98 (_CApplicationManager--_CreatePerMonitorComponents_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleApplicationRequestActivation_::_1_::dtor$0 @ 0x1801E6F0A (_CApplicationManager--_HandleApplicationRequestActivation_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleActivation2_::_1_::dtor$0 @ 0x1801E6F3A (_CApplicationManager--_HandleActivation2_--_1_--dtor$0.c)
 *     _XamlAllUpViewHost::ToggleAllUpView_::_1_::dtor$0 @ 0x1801E7A48 (_XamlAllUpViewHost--ToggleAllUpView_--_1_--dtor$0.c)
 *     _CImmersiveMode::HandleActivationDeprecated_::_1_::dtor$0 @ 0x1801E7A54 (_CImmersiveMode--HandleActivationDeprecated_--_1_--dtor$0.c)
 *     _CImmersiveMode::CompleteInitialization_::_1_::dtor$0 @ 0x1801E7A9B (_CImmersiveMode--CompleteInitialization_--_1_--dtor$0.c)
 *     _CImmersiveMode::_PrepareDeferredNotifications_::_1_::dtor$0 @ 0x1801E7AD7 (_CImmersiveMode--_PrepareDeferredNotifications_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleMonitorMove_::_1_::dtor$0 @ 0x1801E7C18 (_CClassicWindowManager--HandleMonitorMove_--_1_--dtor$0.c)
 *     _CClassicWindowManager::GetIntersectingMonitors_::_1_::dtor$0 @ 0x1801E7C30 (_CClassicWindowManager--GetIntersectingMonitors_--_1_--dtor$0.c)
 *     _AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1801E7CAA (_AgileApplicationViewChangeListenerConverter--OnApplicationViewChanged_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleOwnerSwitch_::_1_::dtor$0 @ 0x1801E7CC2 (_CClassicWindowManager--HandleOwnerSwitch_--_1_--dtor$0.c)
 *     _CClassicWindowManager::AttachApplicationId_::_1_::dtor$0 @ 0x1801E7CDA (_CClassicWindowManager--AttachApplicationId_--_1_--dtor$0.c)
 *     _CClassicWindowManager::HandleWindowReplaced_::_1_::dtor$0 @ 0x1801E7CFE (_CClassicWindowManager--HandleWindowReplaced_--_1_--dtor$0.c)
 *     _CClassicWindowManager::IsActiveApp_::_1_::dtor$0 @ 0x1801E7D5D (_CClassicWindowManager--IsActiveApp_--_1_--dtor$0.c)
 *     _XamlAllUpViewHost::Show_::_1_::dtor$0 @ 0x1801F127C (_XamlAllUpViewHost--Show_--_1_--dtor$0.c)
 *     _CMultitaskingViewHostBase_ISnapAssistViewHost_::DismissView_::_1_::dtor$0 @ 0x1801F18F0 (_CMultitaskingViewHostBase_ISnapAssistViewHost_--DismissView_--_1_--dtor$0.c)
 *     _XamlAltTabViewHost::Show_::_1_::dtor$0 @ 0x1801F3C33 (_XamlAltTabViewHost--Show_--_1_--dtor$0.c)
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$0 @ 0x1801F3E8A (_XamlSnapAssistViewHost--Show_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CThreadUseDetector::~CThreadUseDetector(LPCRITICAL_SECTION *this)
{
  if ( *((int *)this + 2) >= 0 )
    LeaveCriticalSection(*this);
}
