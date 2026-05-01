/*
 * XREFs of ??$SwitchAsync@AEAIAEAIAEAI@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI00@Z @ 0x180138AC8
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
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
  int v12; // [rsp+30h] [rbp-29h] BYREF
  int v13; // [rsp+34h] [rbp-25h] BYREF
  int v14; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  int *v16; // [rsp+60h] [rbp+7h]
  __int64 v17; // [rsp+68h] [rbp+Fh]
  int *v18; // [rsp+70h] [rbp+17h]
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  int *v20; // [rsp+80h] [rbp+27h]
  __int64 v21; // [rsp+88h] [rbp+2Fh]

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
    LODWORD(v8) = TlgWrite(v8, &unk_18026164C, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 5u, &pData);
  }
  return (int)v8;
}
