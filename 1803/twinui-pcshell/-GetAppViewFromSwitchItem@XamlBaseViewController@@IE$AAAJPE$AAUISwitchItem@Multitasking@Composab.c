/*
 * XREFs of ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180223808
 * Callers:
 *     ?CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAU?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@6@@Z @ 0x18021CB0C (-CreateVirtualDesktopContextMenuItems@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitas.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchItemContextMenuArgs@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAUISwitcherViewModel@4567@@Z @ 0x18021D688 (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAVSwitchI.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18021DF2C (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::operator() @ 0x1802226E4 (_lambda_f100e3a3eb499b75a430141e91e776cf_--operator().c)
 *     CAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___::Invoke @ 0x180223940 (CAsyncCallbackWithLambda__lambda_6da01eabb83d75cf2035c440dbe0e034___--Invoke.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1802239A8 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?GetApplicationViewForItem@AppViewDataSourceHelpers@@YA?AV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801FAEA0 (-GetApplicationViewForItem@AppViewDataSourceHelpers@@YA-AV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlBaseViewController::GetAppViewFromSwitchItem(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // edi
  struct _GUID *ApplicationViewForItem; // rax
  __int64 v6; // rbx
  struct _GUID v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)&v8.Data1 = a1;
  v4 = 0;
  *a3 = 0LL;
  ApplicationViewForItem = AppViewDataSourceHelpers::GetApplicationViewForItem(&v8, a2);
  v6 = *(_QWORD *)&ApplicationViewForItem->Data1;
  *(_QWORD *)&ApplicationViewForItem->Data1 = 0LL;
  v9 = v6;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)&v8);
  if ( v6 )
  {
    *a3 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v4 = -2147418113;
  }
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v9);
  return v4;
}
