/*
 * XREFs of ??$ExperienceManager_UpdateWindowPosition_Params@AEAHAEAH@ExperienceManager_UpdateWindowPosition@QuickConnectTelemetry@@QEAAXAEAH0@Z @ 0x180179A7C
 * Callers:
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017F688 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18017FAD4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_UpdateWindowPosition::ExperienceManager_UpdateWindowPosition_Params<int &,int &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rax
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]

  v6 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
         a1,
         lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  v7 = *(const struct _TlgProvider_t **)(v6 + 8);
  if ( *(_DWORD *)v7 > 5u )
  {
    LOBYTE(v6) = TlgKeywordOn(v7, 0x200000000000uLL);
    if ( (_BYTE)v6 )
    {
      v13 = 0;
      v16 = 0;
      v12 = 4;
      v15 = 4;
      v11 = a2;
      v14 = a3;
      LOBYTE(v6) = TlgWrite(v8, &unk_18038ECA8, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  return v6;
}
