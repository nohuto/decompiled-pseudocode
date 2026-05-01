/*
 * XREFs of ??$ExperienceManager_ShowContactCard_Params@_NAEAMAEAMAEAMAEAMAEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@4@AEAW4ContactCardTabKind@674@AEAI@ExperienceManager_ShowContactCard@QuickConnectTelemetry@@QEAAX$$QEA_NAEAM111AEAW4Placement@Popups@UI@Windows@@AEAW4ContactCardHeaderKind@Contacts@ApplicationModel@5@AEAW4ContactCardTabKind@785@AEAI@Z @ 0x180179840
 * Callers:
 *     ?ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAUIContactCardOptions@456@ME@Z @ 0x18017D3E0 (-ShowContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@_KPEAUIContact@Contacts@Applicatio.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvider@@P6AXXZ@Z @ 0x18017FAD4 (-get@-$static_lazy@VQuickConnectLoggingProvider@@@details@wil@@QEAAPEAVQuickConnectLoggingProvid.c)
 */

char __fastcall QuickConnectTelemetry::ExperienceManager_ShowContactCard::ExperienceManager_ShowContactCard_Params<bool,float &,float &,float &,float &,enum Windows::UI::Popups::Placement &,enum Windows::ApplicationModel::Contacts::ContactCardHeaderKind &,enum Windows::ApplicationModel::Contacts::ContactCardTabKind &,unsigned int &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        int *a8,
        int *a9,
        __int64 a10)
{
  __int64 v14; // rax
  const struct _TlgProvider_t *v15; // r10
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v20; // [rsp+30h] [rbp-B9h] BYREF
  int v21; // [rsp+34h] [rbp-B5h] BYREF
  int v22; // [rsp+38h] [rbp-B1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v24; // [rsp+60h] [rbp-89h]
  __int64 v25; // [rsp+68h] [rbp-81h]
  __int64 v26; // [rsp+70h] [rbp-79h]
  __int64 v27; // [rsp+78h] [rbp-71h]
  __int64 v28; // [rsp+80h] [rbp-69h]
  __int64 v29; // [rsp+88h] [rbp-61h]
  __int64 v30; // [rsp+90h] [rbp-59h]
  __int64 v31; // [rsp+98h] [rbp-51h]
  __int64 v32; // [rsp+A0h] [rbp-49h]
  __int64 v33; // [rsp+A8h] [rbp-41h]
  int *v34; // [rsp+B0h] [rbp-39h]
  __int64 v35; // [rsp+B8h] [rbp-31h]
  int *v36; // [rsp+C0h] [rbp-29h]
  __int64 v37; // [rsp+C8h] [rbp-21h]
  int *v38; // [rsp+D0h] [rbp-19h]
  __int64 v39; // [rsp+D8h] [rbp-11h]
  __int64 v40; // [rsp+E0h] [rbp-9h]
  __int64 v41; // [rsp+E8h] [rbp-1h]

  v14 = wil::details::static_lazy<QuickConnectLoggingProvider>::get(
          a1,
          lambda_f050a8947b8d1270f7eda0e498aa88e8_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v14 + 8) > 5u )
  {
    LOBYTE(v14) = TlgKeywordOn(*(TraceLoggingHProvider *)(v14 + 8), 0x200000000000uLL);
    if ( (_BYTE)v14 )
    {
      v30 = a5;
      v32 = a6;
      v24 = a2;
      v25 = 1LL;
      v26 = a3;
      v16 = *a7;
      v34 = &v20;
      v20 = v16;
      v27 = 4LL;
      v28 = a4;
      v17 = *a8;
      v36 = &v21;
      v21 = v17;
      v29 = 4LL;
      v31 = 4LL;
      v18 = *a9;
      v38 = &v22;
      v40 = a10;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v22 = v18;
      v39 = 4LL;
      v41 = 4LL;
      LOBYTE(v14) = TlgWrite(v15, &unk_18038F133, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 0xBu, &pData);
    }
  }
  return v14;
}
