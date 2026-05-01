/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F8924
 * Callers:
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x1800B16E0 (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$1 @ 0x1800B36EC (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$1.c)
 *     _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x1800B374C (_CApplicationManager--_HandleViewCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x1800B3758 (_CApplicationManager--_HandleViewCreation_EnsureApplicationView_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(a1);
}
