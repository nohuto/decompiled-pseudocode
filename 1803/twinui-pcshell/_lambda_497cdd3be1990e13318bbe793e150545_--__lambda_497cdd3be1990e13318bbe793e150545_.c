/*
 * XREFs of _lambda_497cdd3be1990e13318bbe793e150545_::__lambda_497cdd3be1990e13318bbe793e150545_ @ 0x1801156FC
 * Callers:
 *     _CImmersiveWindowManager::_ScheduleInteractiveNotificationForApps_::_1_::dtor$3 @ 0x180116845 (_CImmersiveWindowManager--_ScheduleInteractiveNotificationForApps_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_497cdd3be1990e13318bbe793e150545_::__lambda_497cdd3be1990e13318bbe793e150545_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArrayPrivate>::InternalRelease((__int64 *)a1);
}
