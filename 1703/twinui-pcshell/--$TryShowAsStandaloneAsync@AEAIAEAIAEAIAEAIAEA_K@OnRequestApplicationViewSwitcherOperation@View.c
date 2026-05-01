/*
 * XREFs of ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x18010E44C
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010C48C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  const struct _TlgProvider_t *v10; // rax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+34h] [rbp-65h] BYREF
  int v17; // [rsp+38h] [rbp-61h] BYREF
  int v18; // [rsp+3Ch] [rbp-5Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *v20; // [rsp+60h] [rbp-39h]
  __int64 v21; // [rsp+68h] [rbp-31h]
  int *v22; // [rsp+70h] [rbp-29h]
  __int64 v23; // [rsp+78h] [rbp-21h]
  int *v24; // [rsp+80h] [rbp-19h]
  __int64 v25; // [rsp+88h] [rbp-11h]
  int *v26; // [rsp+90h] [rbp-9h]
  __int64 v27; // [rsp+98h] [rbp-1h]
  __int64 v28; // [rsp+A0h] [rbp+7h]
  __int64 v29; // [rsp+A8h] [rbp+Fh]

  v10 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    v11 = *a3;
    v12 = *a2;
    v20 = &v15;
    v22 = &v16;
    v17 = *a4;
    v24 = &v17;
    v16 = v11;
    v15 = v12;
    v21 = 4LL;
    v13 = *a5;
    v26 = &v18;
    v28 = a6;
    v23 = 4LL;
    v25 = 4LL;
    v18 = v13;
    v27 = 4LL;
    v29 = 8LL;
    LODWORD(v10) = TlgWrite(v10, &unk_1801FE146, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 7u, &pData);
  }
  return (int)v10;
}
