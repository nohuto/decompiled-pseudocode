/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800F61A0
 * Callers:
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::TryCreateAppExecutionDataForAppState_::_1_::dtor$1 @ 0x1800B1D7C (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--TryCreateAppExecu_ea_1800B1D7C.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x1800B28E0 (_DeserializePropertySet_--_1_--dtor$0.c)
 *     _AppViewManagerTabTelemetry::GetAppNameFromView_::_1_::dtor$0 @ 0x180120682 (_AppViewManagerTabTelemetry--GetAppNameFromView_--_1_--dtor$0.c)
 *     _AppViewManagerTabTelemetry::GetAppNameFromView_::_1_::dtor$1 @ 0x18012068E (_AppViewManagerTabTelemetry--GetAppNameFromView_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x1801856F2 (_CortanaDesktopExperienceView--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _GetViewId_::_1_::dtor$2 @ 0x1801AED86 (_GetViewId_--_1_--dtor$2.c)
 *     _HolographicPositionerTelemetry::ControlGained::StartActivity_::_1_::dtor$0 @ 0x1801B0454 (_HolographicPositionerTelemetry--ControlGained--StartActivity_--_1_--dtor$0.c)
 *     _HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity_::_1_::dtor$0 @ 0x1801B05B3 (_HolographicPositionerTelemetry--ControlGainedForActivation--StartActivity_--_1_--dtor$0.c)
 *     _HolographicPositionerTelemetry::ControlLost::StartActivity_::_1_::dtor$0 @ 0x1801B070C (_HolographicPositionerTelemetry--ControlLost--StartActivity_--_1_--dtor$0.c)
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short_____ptr64_void_(__cdecl_)(void_____ptr64)_&CoTaskMemFree_wistd::integral_constant_unsigned___int64_0__unsigned_short_____ptr64_0_std::nullptr_t________::_1_::dtor$0 @ 0x1801C01E3 (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--details--resource_p.c)
 *     __lambda_5eeb3274d8dd6409222f94091fb661d1_::operator()_::_1_::dtor$1 @ 0x1801E310F (__lambda_5eeb3274d8dd6409222f94091fb661d1_--operator()_--_1_--dtor$1.c)
 *     __lambda_4f3507863b21d28a47ffae36e7c55767_::operator()_::_1_::dtor$1 @ 0x1801EE349 (__lambda_4f3507863b21d28a47ffae36e7c55767_--operator()_--_1_--dtor$1.c)
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180224640 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     _XamlLauncher::LogErrorIfStartOrCortanaArentInstalled_::_1_::dtor$0 @ 0x1802276E9 (_XamlLauncher--LogErrorIfStartOrCortanaArentInstalled_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor$2 @ 0x180265890 (__anonymous_namespace_--GetFriendlyNameForExe_--_1_--dtor$2.c)
 *     ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x18026A010 (-Execute@AllUpViewUriHandler@@UEAAJXZ.c)
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x18028DD7C (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 *     _ViewSizePreferenceHelpers::GetViewValueSetFromSite_::_1_::dtor$2 @ 0x1802B4D18 (_ViewSizePreferenceHelpers--GetViewValueSetFromSite_--_1_--dtor$2.c)
 *     _CDesktopPositioner::_GetLaunchPositionForPeoplePane_::_1_::dtor$2 @ 0x1802C171A (_CDesktopPositioner--_GetLaunchPositionForPeoplePane_--_1_--dtor$2.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1803047E8 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
