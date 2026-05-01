/*
 * XREFs of CAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___::Invoke @ 0x180223940
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180093198 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180223808 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18030535C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___::Invoke(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0LL;
  XamlBaseViewController::GetAppViewFromSwitchItem(a1, *(_QWORD *)(a1 + 48), &v5);
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(v2, 3u, v3);
  ApplicationViewHelpers::CloseView(v5, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 64LL), 7LL);
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v5);
  return 0LL;
}
