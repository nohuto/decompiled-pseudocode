/*
 * XREFs of ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180077120
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180146FE0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 *     _ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::StartActivity_::_1_::dtor$1 @ 0x18019AFE4 (_ApplicationViewManagement--ApplicationViewTraceLogging--RaiseApplicationViewChange_ea_18019AFE4.c)
 *     _CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow_::_1_::dtor$0 @ 0x18019CEDD (_CortanaDesktopExperienceView--CreateCortanaAltTabProxyWindow_--_1_--dtor$0.c)
 *     _GetViewId_::_1_::dtor$2 @ 0x18019D2DA (_GetViewId_--_1_--dtor$2.c)
 *     _HolographicPositionerTelemetry::ControlLost::StartActivity_::_1_::dtor$0 @ 0x18019D2E6 (_HolographicPositionerTelemetry--ControlLost--StartActivity_--_1_--dtor$0.c)
 *     _DeserializePropertySet_::_1_::dtor$0 @ 0x18019ECFD (_DeserializePropertySet_--_1_--dtor$0.c)
 *     __lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()_::_1_::dtor$1 @ 0x18019F1ED (__lambda_e749f471b43b5c52416cbe595e41d9dc_--operator()_--_1_--dtor$1.c)
 *     _XamlLauncher::LogErrorIfStartOrCortanaArentInstalled_::_1_::dtor$0 @ 0x1801A3C68 (_XamlLauncher--LogErrorIfStartOrCortanaArentInstalled_--_1_--dtor$0.c)
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
