/*
 * XREFs of ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x180138B98
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18013751C (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        float *a6,
        float *a7)
{
  const struct _TlgProvider_t *v11; // rax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v18; // [rsp+30h] [rbp-81h] BYREF
  int v19; // [rsp+34h] [rbp-7Dh] BYREF
  int v20; // [rsp+38h] [rbp-79h] BYREF
  int v21; // [rsp+3Ch] [rbp-75h] BYREF
  int v22; // [rsp+40h] [rbp-71h] BYREF
  int v23; // [rsp+44h] [rbp-6Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  int *v25; // [rsp+70h] [rbp-41h]
  __int64 v26; // [rsp+78h] [rbp-39h]
  int *v27; // [rsp+80h] [rbp-31h]
  __int64 v28; // [rsp+88h] [rbp-29h]
  int *v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h]
  int *v31; // [rsp+A0h] [rbp-11h]
  __int64 v32; // [rsp+A8h] [rbp-9h]
  int *v33; // [rsp+B0h] [rbp-1h]
  __int64 v34; // [rsp+B8h] [rbp+7h]
  int *v35; // [rsp+C0h] [rbp+Fh]
  __int64 v36; // [rsp+C8h] [rbp+17h]

  v11 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    v12 = *a3;
    v13 = *a2;
    v25 = &v18;
    v27 = &v19;
    v20 = *a4;
    v29 = &v20;
    v19 = v12;
    v18 = v13;
    v26 = 4LL;
    v14 = *a5;
    v31 = &v21;
    v21 = v14;
    v28 = 4LL;
    v30 = 4LL;
    v15 = (int)*a6;
    v32 = 4LL;
    v33 = &v22;
    v34 = 4LL;
    v36 = 4LL;
    v22 = v15;
    v16 = (int)*a7;
    v35 = &v23;
    v23 = v16;
    LODWORD(v11) = TlgWrite(v11, &unk_1802615A2, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 8u, &pData);
  }
  return (int)v11;
}
