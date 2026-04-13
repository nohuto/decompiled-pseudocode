/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180044FEC
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800452A4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$8 @ 0x1800B9B1A (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$8.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$9 @ 0x1800B9B7A (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$9.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800BBB1B (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppInfo--RuntimeClassIni.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$3 @ 0x1800BBC70 (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800BBC70.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$3 @ 0x1800BBEA0 (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--catch$3.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800451B8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
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
    JUMPOUT(0x180045029LL);
  }
  return result;
}
