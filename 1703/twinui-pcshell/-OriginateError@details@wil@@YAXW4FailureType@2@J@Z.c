/*
 * XREFs of ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x1800039D8
 * Callers:
 *     ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x180024DF8 (-Unregister@AgileRegistrationList@@QEAAJK@Z.c)
 *     ?OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBlob@@@Z @ 0x18010BAD0 (-OnRequestNavigateToView@ViewManagerBridge@@UEAAJIIW4ViewActivationFlags@Navigation@@_KPEAUMsgBl.c)
 *     ?CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18011DBEC (-CreateTaskbar@XamlExplorerHost@@QE$AAAXPEAUIImmersiveMonitor@@PEAVCreationThreadDispatcher@@PEA.c)
 *     ?add@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@EvaluateItem@SwitchItemDataViewImpl@23456@UE$AAA?AVEventRegistrationToken@Foundation@Windows@@PE$AAV?$TypedEventHandler@PE$AAUISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PE$AAUIEvaluateItemEventArgs@23456@@Foundation@Windows@@@Z @ 0x1801335F8 (-add@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Eval.c)
 *     ?AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@AE$AAAXPE$AAUISwitchItem@23456@@Z @ 0x180134DE8 (-AddSwitchItem@SwitchItemDataViewImpl@Common@Multitasking@Experiences@ComposableShell@WindowsInt.c)
 *     ?SetDataSource@?QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@SwitchItemDataViewImpl@23456@UE$AAAXPE$AAUISwitchItemDataSource@23456@@Z @ 0x180135108 (-SetDataSource@-QISwitchItemDataView@Common@Multitasking@Experiences@ComposableShell@WindowsInte.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x180144288 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 *     ?InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXPEAUISwitchItem@23456@@Z @ 0x180160E8C (-InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 (*wil::details::OriginateError())(void)
{
  __int64 (*result)(void); // rax

  result = wil::details::g_pfnOriginateCallback;
  if ( wil::details::g_pfnOriginateCallback )
    return (__int64 (*)(void))wil::details::g_pfnOriginateCallback();
  return result;
}
