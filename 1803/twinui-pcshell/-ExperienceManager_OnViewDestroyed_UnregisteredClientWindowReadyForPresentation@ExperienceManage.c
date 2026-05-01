/*
 * XREFs of ?ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation@ExperienceManager_OnViewDestroyed@QuickConnectTelemetry@@QEAAXXZ @ 0x18017B6A8
 * Callers:
 *     ?OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017C870 (-OnViewDestroyed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18017FAD4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

void __fastcall QuickConnectTelemetry::ExperienceManager_OnViewDestroyed::ExperienceManager_OnViewDestroyed_UnregisteredClientWindowReadyForPresentation(
        QuickConnectTelemetry::ExperienceManager_OnViewDestroyed *this)
{
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<QuickConnectLoggingProvider>::get(
                                           this,
                                           lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( TlgKeywordOn(v2, 0x200000000000uLL) )
      TlgWrite(v3, &unk_18038FD3B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
