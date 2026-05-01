/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071D0C
 * Callers:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x180071948 (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     _CApplicationManager::_AttemptPendingActivationTracking_::_1_::dtor$1 @ 0x18010EBE7 (_CApplicationManager--_AttemptPendingActivationTracking_--_1_--dtor$1.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18018A1C0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_18018A1C0.c)
 *     ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x18018A208 (--_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z.c)
 *     ??_E?$CMultitaskingViewTaskCallback@V_lambda_9d128d93ab32f25580f43de7f914180a_@@@@UEAAPEAXI@Z @ 0x18026AA40 (--_E-$CMultitaskingViewTaskCallback@V_lambda_9d128d93ab32f25580f43de7f914180a_@@@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18026AAE0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCal.c)
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_a07bbd685e96231049fd04a75b23a5bf_@@@@UEAAPEAXI@Z @ 0x18026B260 (--_G-$CMultitaskingViewTaskCallback@V_lambda_a07bbd685e96231049fd04a75b23a5bf_@@@@UEAAPEAXI@Z.c)
 *     ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x18026B930 (--_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z.c)
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z @ 0x18026C360 (--_G-$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z.c)
 *     ??_EMultitaskingViewGestureState@@UEAAPEAXI@Z @ 0x18026C3B0 (--_EMultitaskingViewGestureState@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18026DC2C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$Runtime.c)
 *     ??_E?$CMultitaskingViewTaskCallback@V_lambda_582c6993ad05377755ea5aed50f4c8b6_@@@@UEAAPEAXI@Z @ 0x18026F9B0 (--_E-$CMultitaskingViewTaskCallback@V_lambda_582c6993ad05377755ea5aed50f4c8b6_@@@@UEAAPEAXI@Z.c)
 *     ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x1802D21DC (--_EAppLayoutCache@@UEAAPEAXI@Z.c)
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1802E1708 (--1TabletModeCoverWindow@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802E17B0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@U.c)
 *     ??1CGITCookieObject@@UEAA@XZ @ 0x180309EE4 (--1CGITCookieObject@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180309F70 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@M.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180311FC0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIAppLayoutInternal@@U-$C.c)
 *     ??_ECAppLayout@@UEAAPEAXI@Z @ 0x180312000 (--_ECAppLayout@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
}
