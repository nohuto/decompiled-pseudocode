/*
 * XREFs of ??1?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F87A8
 * Callers:
 *     _CImmersiveApp::GetBehaviorFlagsInternal_::_1_::dtor$2 @ 0x18009DBD3 (_CImmersiveApp--GetBehaviorFlagsInternal_--_1_--dtor$2.c)
 *     _CAppViewManager::_GetViewForSwitchInternalByHostId_::_1_::dtor$3 @ 0x1800B1140 (_CAppViewManager--_GetViewForSwitchInternalByHostId_--_1_--dtor$3.c)
 *     _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$1 @ 0x1800B3A9C (_CApplicationManager--_CreateImmersiveApp_--_1_--dtor$1.c)
 *     _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$2 @ 0x1800B3AA8 (_CApplicationManager--_CreateImmersiveApp_--_1_--dtor$2.c)
 *     _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$3 @ 0x1800B3AB4 (_CApplicationManager--_CreateImmersiveApp_--_1_--dtor$3.c)
 *     _CApplicationManager::OnShellHookMessage_::_1_::dtor$24 @ 0x1800B3FC0 (_CApplicationManager--OnShellHookMessage_--_1_--dtor$24.c)
 *     _CApplicationManager::_UpdatePerApplicationDataIfNeeded_::_1_::dtor$1 @ 0x1800F12CB (_CApplicationManager--_UpdatePerApplicationDataIfNeeded_--_1_--dtor$1.c)
 *     _CApplicationManager::_UpdatePerApplicationDataIfNeeded_::_1_::dtor$0_0 @ 0x1801117F8 (_CApplicationManager--_UpdatePerApplicationDataIfNeeded_--_1_--dtor$0_0.c)
 *     _CAppViewManager::_GetAppMainWindow_::_1_::dtor$1 @ 0x1801261C9 (_CAppViewManager--_GetAppMainWindow_--_1_--dtor$1.c)
 *     _CAppViewManager::_GetViewForSwitchInternal_::_1_::dtor$3 @ 0x18012686F (_CAppViewManager--_GetViewForSwitchInternal_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::~ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>(
        void **a1)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease(a1);
}
