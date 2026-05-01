/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x1802B1B24
 * Callers:
 *     ??_E?$CTaskWrapper@V_lambda_5c8667dff346ed4d003bfb934b61e856_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1802B1C90 (--_E-$CTaskWrapper@V_lambda_5c8667dff346ed4d003bfb934b61e856_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1802B2A5C (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 *     _CSwitchController::_PerformDelayedActivationInternal_::_1_::dtor$3 @ 0x1802B2BC7 (_CSwitchController--_PerformDelayedActivationInternal_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
