/*
 * XREFs of ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x18010E548
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18010C48C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::SwitchAsync<unsigned int &,unsigned int &,unsigned int &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _TlgProvider_t *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+34h] [rbp-35h] BYREF
  int v14; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  int *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  int *v20; // [rsp+80h] [rbp+17h]
  __int64 v21; // [rsp+88h] [rbp+1Fh]

  v8 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a2;
    v10 = *a3;
    v16 = &v12;
    v18 = &v13;
    v14 = *a4;
    v20 = &v14;
    v12 = v9;
    v17 = 4LL;
    v13 = v10;
    v19 = 4LL;
    v21 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_1801FE0F6, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
  }
  return (int)v8;
}
