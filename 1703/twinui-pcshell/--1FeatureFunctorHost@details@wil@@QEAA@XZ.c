/*
 * XREFs of ??1FeatureFunctorHost@details@wil@@QEAA@XZ @ 0x180084994
 * Callers:
 *     _DesktopBlueLightReductionManager::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18019B4BB (_DesktopBlueLightReductionManager--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::SetSite_::_1_::dtor$0 @ 0x18019B500 (_DesktopBlueLightReductionManager--SetSite_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::PublishServices_::_1_::dtor$0 @ 0x18019B545 (_DesktopBlueLightReductionManager--PublishServices_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::SubscribeToServices_::_1_::dtor$0 @ 0x18019B58A (_DesktopBlueLightReductionManager--SubscribeToServices_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::PerformDelayedInitialization_::_1_::dtor$0 @ 0x18019B5F3 (_DesktopBlueLightReductionManager--PerformDelayedInitialization_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::UnsubscribeFromServices_::_1_::dtor$0 @ 0x18019B638 (_DesktopBlueLightReductionManager--UnsubscribeFromServices_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::ShutdownServices_::_1_::dtor$0 @ 0x18019B67D (_DesktopBlueLightReductionManager--ShutdownServices_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::OnMessage_::_1_::dtor$0 @ 0x18019B6C2 (_DesktopBlueLightReductionManager--OnMessage_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::MonitorAdded_::_1_::dtor$0 @ 0x18019B744 (_DesktopBlueLightReductionManager--MonitorAdded_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::DisplaySettingsChange_::_1_::dtor$0 @ 0x18019B789 (_DesktopBlueLightReductionManager--DisplaySettingsChange_--_1_--dtor$0.c)
 *     _DesktopBlueLightReductionManager::OnIdleStateFlagsChanged_::_1_::dtor$0 @ 0x18019B7CE (_DesktopBlueLightReductionManager--OnIdleStateFlagsChanged_--_1_--dtor$0.c)
 *     _TaskbarLayoutPolicyManager::CanApplyMDMLayout_::_1_::dtor$0 @ 0x18019B936 (_TaskbarLayoutPolicyManager--CanApplyMDMLayout_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureFunctorHost::~FeatureFunctorHost(wil::details::FeatureFunctorHost *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    *(_DWORD *)(v1 + 16) = *((_DWORD *)this + 5);
}
