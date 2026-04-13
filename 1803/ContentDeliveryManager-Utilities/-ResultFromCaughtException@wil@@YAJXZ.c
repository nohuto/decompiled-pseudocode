/*
 * XREFs of ?ResultFromCaughtException@wil@@YAJXZ @ 0x180048D1C
 * Callers:
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180048F9C (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$12 @ 0x1800C6BC8 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$12.c)
 *     _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800C6C49 (_CreativeFramework--Actions--GetEntitlementForRecord_--_1_--catch$13.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::RuntimeClassInitialize_::_1_::catch$0 @ 0x1800C8F8D (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppInfo--RuntimeClassIni.c)
 *     _Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppDisplayInfo::RuntimeClassInitialize_::_1_::catch$6 @ 0x1800C90EE (_Windows--Internal--Extensions--ApplicationModel--ContentDeliveryManagerAppDisplayI_ea_1800C90EE.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::ResolveLayoutBindings_::_1_::catch$8 @ 0x1800C931E (_CreativeFramework--TargetedContentLayoutHelpers--ResolveLayoutBindings_--_1_--catch$8.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048EE8 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
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
    JUMPOUT(0x180048D59LL);
  }
  return result;
}
