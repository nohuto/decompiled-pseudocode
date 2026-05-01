/*
 * XREFs of ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964
 * Callers:
 *     ??$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1801A7E20 (--$MakeAndInitialize@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V12.c)
 *     ??$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1801A8FF4 (--$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@A.c)
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1801ED80C (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 *     _lambda_84ae6e21f9379359c5dabe643d80e783_::operator() @ 0x1801F0970 (_lambda_84ae6e21f9379359c5dabe643d80e783_--operator().c)
 *     ?RuntimeClassInitialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEBG@Z @ 0x1801F32CC (-RuntimeClassInitialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView.c)
 *     ??0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUISnapServiceProvider@@PEAUIMultitaskingViewManager@@PEAUIInspectable@@5PEAUIAppLayoutCache@@PE$AAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PE$AAUIVirtualDesktopController@9ComposableShell@Internal@Windows@@@Z @ 0x18021B52C (--0XamlAllUpViewController@@QE$AAA@PEAUIAllUpViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmers.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x180221D2C (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIApplicationViewSwitcher@@PEAUIImme.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x1802224D8 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 *     ??$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconFactory@@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802335E4 (--$MakeAndInitialize@VAppViewIconFactory@@V1@AEAPEAUIApplicationView@@AEAPEAUIApplicationViewIco.c)
 *     ?InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@PEAUIInspectable@@44@Z @ 0x1802364B4 (-InitializeDataSource@AppViewDataSourceAdapterBase@@IEAAXPEAUIApplicationViewCollection@@PEAUIAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
