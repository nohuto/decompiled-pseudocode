/*
 * XREFs of _lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_ @ 0x18026BFB8
 * Callers:
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z @ 0x18026C360 (--_G-$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x18026CAD8 (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_e6f893affb6bf575c6b684d40d6f796c_::__lambda_e6f893affb6bf575c6b684d40d6f796c_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)(a1 + 32));
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 8));
}
