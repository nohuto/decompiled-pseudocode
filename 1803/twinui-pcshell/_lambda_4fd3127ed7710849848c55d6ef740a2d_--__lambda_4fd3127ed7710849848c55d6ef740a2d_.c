/*
 * XREFs of _lambda_4fd3127ed7710849848c55d6ef740a2d_::__lambda_4fd3127ed7710849848c55d6ef740a2d_ @ 0x18009EE04
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_4fd3127ed7710849848c55d6ef740a2d_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18009EF90 (--_G-$CTaskWrapper@V_lambda_4fd3127ed7710849848c55d6ef740a2d_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransitionDirection@@@Z @ 0x1801B3734 (-_SendViewTransitionNotification@HolographicPositioner@@AEAAJPEAUIApplicationView@@W4ViewTransit.c)
 *     _HolographicPositioner::_SendViewTransitionNotification_::_1_::dtor$3 @ 0x1801B385C (_HolographicPositioner--_SendViewTransitionNotification_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

unsigned int __fastcall lambda_4fd3127ed7710849848c55d6ef740a2d_::__lambda_4fd3127ed7710849848c55d6ef740a2d_(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)(a1 + 8));
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)a1);
}
