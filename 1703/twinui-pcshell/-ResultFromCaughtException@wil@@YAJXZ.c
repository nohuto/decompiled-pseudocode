/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180082BB0
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180082D58 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _wil::ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____::_1_::catch$1 @ 0x18019D8B7 (_wil--ResultFromException__lambda_ad3df784e05b04cbdb34881b2f8587dd____--_1_--catch$1.c)
 *     _ViewEventDispatcher::TryShowAsStandaloneAsync_::_1_::catch$7 @ 0x18019E19C (_ViewEventDispatcher--TryShowAsStandaloneAsync_--_1_--catch$7.c)
 *     _ViewEventDispatcher::SwitchAsync_::_1_::catch$5 @ 0x18019E216 (_ViewEventDispatcher--SwitchAsync_--_1_--catch$5.c)
 *     _ViewEventDispatcher::TryShowAsViewModeAsync_::_1_::catch$5 @ 0x18019E290 (_ViewEventDispatcher--TryShowAsViewModeAsync_--_1_--catch$5.c)
 *     _ViewManagerBridge::OnConnected_::_1_::catch$5 @ 0x18019EE1D (_ViewManagerBridge--OnConnected_--_1_--catch$5.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$3 @ 0x18019EFBE (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$3.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082C20 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
    JUMPOUT(0x180082BEDLL);
  }
  return result;
}
