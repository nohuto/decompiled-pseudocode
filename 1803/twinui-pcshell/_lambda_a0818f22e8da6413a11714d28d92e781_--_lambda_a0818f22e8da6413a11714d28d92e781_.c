/*
 * XREFs of _lambda_a0818f22e8da6413a11714d28d92e781_::_lambda_a0818f22e8da6413a11714d28d92e781_ @ 0x18009D5B0
 * Callers:
 *     ?DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18011F150 (-DragComplete@CAppViewManager@@UEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ @ 0x18000AE8C (-InternalAddRef@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_a0818f22e8da6413a11714d28d92e781_::_lambda_a0818f22e8da6413a11714d28d92e781_(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalAddRef(a1);
  a1[1] = *a3;
  return a1;
}
