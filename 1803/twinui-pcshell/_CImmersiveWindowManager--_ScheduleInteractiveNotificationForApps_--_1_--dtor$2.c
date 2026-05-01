/*
 * XREFs of _CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps_::_1_::dtor$2 @ 0x180116839
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArray>::~ComPtr<IImmersiveApplicationArray>((__int64 *)(a2 + 48));
}
