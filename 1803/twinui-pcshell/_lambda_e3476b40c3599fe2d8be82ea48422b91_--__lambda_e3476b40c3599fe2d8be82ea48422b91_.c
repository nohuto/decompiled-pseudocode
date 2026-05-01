/*
 * XREFs of _lambda_e3476b40c3599fe2d8be82ea48422b91_::__lambda_e3476b40c3599fe2d8be82ea48422b91_ @ 0x1800F8224
 * Callers:
 *     _CActivationBasedAppAndGlomCollection::PositionNewCreatedApp_::_1_::dtor$3 @ 0x1800B54DC (_CActivationBasedAppAndGlomCollection--PositionNewCreatedApp_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e3476b40c3599fe2d8be82ea48422b91_::__lambda_e3476b40c3599fe2d8be82ea48422b91_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
}
