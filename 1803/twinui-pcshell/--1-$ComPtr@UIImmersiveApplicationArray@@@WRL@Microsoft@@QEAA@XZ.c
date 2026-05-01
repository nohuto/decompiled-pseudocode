/*
 * XREFs of ??1?$ComPtr@UIImmersiveApplicationArray@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8904
 * Callers:
 *     _CApplicationManager::GetImmersiveApplicationArraySafe_::_1_::dtor$0 @ 0x1800B3C30 (_CApplicationManager--GetImmersiveApplicationArraySafe_--_1_--dtor$0.c)
 *     _CApplicationManager::GetAllApplicationsByHostId_::_1_::dtor$0 @ 0x1800B3E34 (_CApplicationManager--GetAllApplicationsByHostId_--_1_--dtor$0.c)
 *     _CApplicationManager::GetImmersiveApplicationArray_::_1_::dtor$1 @ 0x1800B3E7C (_CApplicationManager--GetImmersiveApplicationArray_--_1_--dtor$1.c)
 *     _CApplicationManager::GetAllApplicationsByHostIDSafe_::_1_::dtor$0 @ 0x1800F1661 (_CApplicationManager--GetAllApplicationsByHostIDSafe_--_1_--dtor$0.c)
 *     _CApplicationManager::GetAllApplicationsByAppIDSafe_::_1_::dtor$0 @ 0x1801071BC (_CApplicationManager--GetAllApplicationsByAppIDSafe_--_1_--dtor$0.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$1 @ 0x180107980 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$1.c)
 *     _CFallbackWindow::_GetVisibleApp_::_1_::dtor$1 @ 0x180115008 (_CFallbackWindow--_GetVisibleApp_--_1_--dtor$1.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$0 @ 0x1801163DE (_CImmersiveWindowManager--Set_--_1_--dtor$0.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$2 @ 0x1801163F6 (_CImmersiveWindowManager--Set_--_1_--dtor$2.c)
 *     _CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps_::_1_::dtor$2 @ 0x180116839 (_CImmersiveWindowManager--_ScheduleInteractiveNotificationForApps_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IImmersiveApplicationArray>::~ComPtr<IImmersiveApplicationArray>(__int64 *a1)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease(a1);
}
