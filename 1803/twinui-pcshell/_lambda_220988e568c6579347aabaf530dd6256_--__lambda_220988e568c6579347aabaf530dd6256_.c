/*
 * XREFs of _lambda_220988e568c6579347aabaf530dd6256_::__lambda_220988e568c6579347aabaf530dd6256_ @ 0x180295428
 * Callers:
 *     ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x180295080 (--$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControl.c)
 *     ??_E?$CTaskWrapper@V_lambda_220988e568c6579347aabaf530dd6256_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180295480 (--_E-$CTaskWrapper@V_lambda_220988e568c6579347aabaf530dd6256_@@@ComTaskPool@Internal@Windows@@UE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_220988e568c6579347aabaf530dd6256_::__lambda_220988e568c6579347aabaf530dd6256_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
}
