/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180079D78
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x18017BC90 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     ?CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z @ 0x1801CA1F8 (-CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     _ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity_::_1_::dtor$1 @ 0x1801E99D7 (_ApplicationViewManagement--ApplicationViewTraceLogging--RaiseApplicationViewChange_ea_1801E99D7.c)
 *     _CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x1801EC04A (_CortanaDesktopExperienceView--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _GetViewId_::_1_::dtor$2 @ 0x1801ED08C (_GetViewId_--_1_--dtor$2.c)
 *     _HolographicPositionerTelemetry::ControlLost::StartActivity_::_1_::dtor$0 @ 0x1801ED098 (_HolographicPositionerTelemetry--ControlLost--StartActivity_--_1_--dtor$0.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x1801EEE46 (_DeserializePropertySet_--_1_--dtor$0.c)
 *     __lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()_::_1_::dtor$1 @ 0x1801EF34C (__lambda_e749f471b43b5c52416cbe595e41d9dc_--operator()_--_1_--dtor$1.c)
 *     _XamlLauncher::LogErrorIfStartOrCortanaArentInstalled_::_1_::dtor$0 @ 0x1801F5568 (_XamlLauncher--LogErrorIfStartOrCortanaArentInstalled_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$1 @ 0x1801F6215 (_TouchKeyboardExperienceManager--_TouchKeyboardExperienceManager_--_1_--dtor$1.c)
 *     __anonymous_namespace_::GetFriendlyNameForExe_::_1_::dtor$2 @ 0x1801F7374 (__anonymous_namespace_--GetFriendlyNameForExe_--_1_--dtor$2.c)
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
