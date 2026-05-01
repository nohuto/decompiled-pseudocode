/*
 * XREFs of ??$ChangeSplashScreenRect@PEAUIShellView@Server@Navigation@@AEAHAEAHAEAHAEAH@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAH111@Z @ 0x180138600
 * Callers:
 *     ?SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z @ 0x180134070 (-SetSplashScreenRect@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ChangeSplashScreenRect<Navigation::Server::IShellView *,int &,int &,int &,int &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4,
        _DWORD *a5)
{
  const struct _TlgProvider_t *v9; // rax
  __int64 v10; // rcx
  int v12; // [rsp+38h] [rbp-51h] BYREF
  int v13; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v14; // [rsp+40h] [rbp-49h] BYREF
  int v15; // [rsp+44h] [rbp-45h] BYREF
  __int64 v16; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-31h] BYREF
  __int64 *v18; // [rsp+78h] [rbp-11h]
  __int64 v19; // [rsp+80h] [rbp-9h]
  int *v20; // [rsp+88h] [rbp-1h]
  __int64 v21; // [rsp+90h] [rbp+7h]
  int *v22; // [rsp+98h] [rbp+Fh]
  __int64 v23; // [rsp+A0h] [rbp+17h]
  int *v24; // [rsp+A8h] [rbp+1Fh]
  __int64 v25; // [rsp+B0h] [rbp+27h]
  int *v26; // [rsp+B8h] [rbp+2Fh]
  __int64 v27; // [rsp+C0h] [rbp+37h]

  v9 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a1;
    v18 = &v16;
    v20 = &v12;
    v13 = *a3;
    v22 = &v13;
    v14 = *a4;
    v24 = &v14;
    v16 = v10;
    v12 = *a2;
    LODWORD(v10) = *a5;
    v26 = &v15;
    v19 = 8LL;
    v21 = 4LL;
    v23 = 4LL;
    v25 = 4LL;
    v15 = v10;
    v27 = 4LL;
    LODWORD(v9) = TlgWrite(v9, &unk_1802618C1, 0LL, 0LL, 7u, &pData);
  }
  return (int)v9;
}
