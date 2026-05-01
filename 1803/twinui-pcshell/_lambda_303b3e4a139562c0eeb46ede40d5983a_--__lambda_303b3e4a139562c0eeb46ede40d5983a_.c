/*
 * XREFs of _lambda_303b3e4a139562c0eeb46ede40d5983a_::__lambda_303b3e4a139562c0eeb46ede40d5983a_ @ 0x1800F8998
 * Callers:
 *     _CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__const_&___ptr64__::_1_::dtor$1 @ 0x1800B12A4 (_CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a__con_ea_1800B12A4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955F4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_303b3e4a139562c0eeb46ede40d5983a_::__lambda_303b3e4a139562c0eeb46ede40d5983a_(__int64 a1)
{
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile int **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
}
