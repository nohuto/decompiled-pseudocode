/*
 * XREFs of _lambda_7eae7a1c8177dd920e080cdaffe7035f_::__lambda_7eae7a1c8177dd920e080cdaffe7035f_ @ 0x18014CBDC
 * Callers:
 *     _FullScreenPositioner::UnsubscribeFromServices_::_1_::dtor$5 @ 0x18014E822 (_FullScreenPositioner--UnsubscribeFromServices_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_7eae7a1c8177dd920e080cdaffe7035f_::__lambda_7eae7a1c8177dd920e080cdaffe7035f_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1);
}
