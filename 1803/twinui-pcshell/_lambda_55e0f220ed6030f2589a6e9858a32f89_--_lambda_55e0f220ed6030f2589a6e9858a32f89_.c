/*
 * XREFs of _lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_ @ 0x1802978D4
 * Callers:
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89_____lambda_55e0f220ed6030f2589a6e9858a32f89__&___ptr64_ @ 0x18029774C (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32.c)
 *     ?BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ @ 0x180298090 (-BeginAnimation@MultitaskingViewAnimationCoordinatorBase@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D5D0 (-InternalAddRef@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_55e0f220ed6030f2589a6e9858a32f89_::_lambda_55e0f220ed6030f2589a6e9858a32f89_(
        __int64 *a1,
        __int64 *a2)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalAddRef(a1);
  a1[1] = a2[1];
  return a1;
}
