/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x18008CE68
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x18008CF9C (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$1 @ 0x1801EC0F2 (_wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator()_--_1_--c.c)
 *     _wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____::_1_::catch$1 @ 0x1801ED883 (_wil--ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____--_1_--catch$1.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$7 @ 0x1801EE3AF (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--catch$7.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::catch$5 @ 0x1801EE429 (_ViewEventDispatcher--SwitchAsync_--_1_--catch$5.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x1801EE4A3 (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--catch$5.c)
 *     _ViewManagerBridge::OnConnected_::_1_::catch$5 @ 0x1801EEF66 (_ViewManagerBridge--OnConnected_--_1_--catch$5.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x1801EF107 (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 *     _wil::ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9____::_1_::catch$0 @ 0x1801F66E9 (_wil--ResultFromException__lambda_fbe5239d558afea990eed82a17e484d9____--_1_--catch$0.c)
 *     _wil::ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4____::_1_::catch$0 @ 0x1801F6753 (_wil--ResultFromException__lambda_1195b550ee03e899c4c093f0587694a4____--_1_--catch$0.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008D138 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ResultFromCaughtException(wil *this, void *a2, unsigned int a3)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( !g_pfnResultFromCaughtExceptionInternal
    || (result = g_pfnResultFromCaughtExceptionInternal(0LL, 0LL, &v6), (int)result >= 0) )
  {
    wil::details::in1diag3::_FailFast_Hr(retaddr, a2, a3, (const char *)0x8007023ELL, v4);
    JUMPOUT(0x18008CEA5LL);
  }
  return result;
}
