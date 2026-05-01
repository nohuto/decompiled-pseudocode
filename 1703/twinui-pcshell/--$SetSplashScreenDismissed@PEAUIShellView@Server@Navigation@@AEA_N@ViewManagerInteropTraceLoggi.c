/*
 * XREFs of ??$SetSplashScreenDismissed@PEAUIShellView@Server@Navigation@@AEA_N@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEA_N@Z @ 0x18010D350
 * Callers:
 *     ?SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z @ 0x180109700 (-SetSplashScreenDismissed@ViewManagerBridge@@UEAAXPEAUIUnknown@@_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::SetSplashScreenDismissed<Navigation::Server::IShellView *,bool &>(
        __int64 *a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  __int64 v12; // [rsp+70h] [rbp-38h]
  int v13; // [rsp+78h] [rbp-30h]
  int v14; // [rsp+7Ch] [rbp-2Ch]

  v4 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a1;
    v11 = 0;
    v14 = 0;
    v7 = v5;
    v9 = &v7;
    v10 = 8;
    v12 = a2;
    v13 = 1;
    LODWORD(v4) = TlgWrite(v4, &unk_1801FE34B, 0LL, 0LL, 4u, &pData);
  }
  return (int)v4;
}
