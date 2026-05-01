/*
 * XREFs of ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180026834
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_8cc3593281a222309b233a0538363bd3___::operator() @ 0x18001AA10 (CDelayIAMOperations--CDelayedOperation__lambda_8cc3593281a222309b233a0538363bd3___--operator().c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Notify@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAAXXZ @ 0x18005C718 (-Notify@ChainLinkNotifier@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA.c)
 *     ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x18005D560 (-ClearNextIfMatch@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUICh.c)
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18007E8B0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 *     ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1800C52D0 (-OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ.c)
 *     ?BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z @ 0x1801260F8 (-BoostUnboostSiHostProcess@ViewEventDispatcher@@AEAAX_N@Z.c)
 *     ?SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013BF4C (-SetDesiredNavigationLevel@NavigationLevelHelper@LegacyViewWrapper@@QEAAXW4NavigationLevel@ViewM.c)
 *     ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z @ 0x1801D1AF0 (-WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z.c)
 *     _lambda_05d91f74b5ede77de7d082105d7f406a_::operator() @ 0x1801D2114 (_lambda_05d91f74b5ede77de7d082105d7f406a_--operator().c)
 *     _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$1 @ 0x1801EC0F2 (_wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator()_--_1_--c.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180003F84 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  unsigned int v4; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a4;
  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
  return v4;
}
