/*
 * XREFs of _lambda_c375c8f4cb799a2f5bee00a6619de85c_::__lambda_c375c8f4cb799a2f5bee00a6619de85c_ @ 0x1800F989C
 * Callers:
 *     _CFrameApplicationPresentation::_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad813499630____::_1_::dtor$2 @ 0x1800B1498 (_CFrameApplicationPresentation--_AddTaskToQueue__lambda_75ecb61212cbd325c11a4ad8134_ea_1800B1498.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x18008B0F8 (-InternalRelease@-$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c375c8f4cb799a2f5bee00a6619de85c_::__lambda_c375c8f4cb799a2f5bee00a6619de85c_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IApplicationViewPosition>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::InternalRelease(a1);
}
