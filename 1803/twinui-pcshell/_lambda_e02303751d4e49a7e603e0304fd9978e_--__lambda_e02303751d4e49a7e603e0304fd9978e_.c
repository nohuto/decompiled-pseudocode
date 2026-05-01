/*
 * XREFs of _lambda_e02303751d4e49a7e603e0304fd9978e_::__lambda_e02303751d4e49a7e603e0304fd9978e_ @ 0x1800F8964
 * Callers:
 *     _CActivationBasedAppAndGlomCollection::PositionNewCreatedApp_::_1_::dtor$12 @ 0x1800B54F4 (_CActivationBasedAppAndGlomCollection--PositionNewCreatedApp_--_1_--dtor$12.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e02303751d4e49a7e603e0304fd9978e_::__lambda_e02303751d4e49a7e603e0304fd9978e_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)(a1 + 16));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
}
