/*
 * XREFs of ?LauncherOpened@LauncherInvokeActivity@StartWindowTelemetry@@QEAAXII@Z @ 0x180153038
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelemetry@@@Z @ 0x180156B84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@StartWindowTelem.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

void __fastcall StartWindowTelemetry::LauncherInvokeActivity::LauncherOpened(
        StartWindowTelemetry::LauncherInvokeActivity *this,
        int a2,
        int a3)
{
  const struct _TlgProvider_t *v4; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-68h] BYREF
  int *v6; // [rsp+50h] [rbp-48h]
  int v7; // [rsp+58h] [rbp-40h]
  int v8; // [rsp+5Ch] [rbp-3Ch]
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int v12; // [rsp+A8h] [rbp+10h] BYREF
  int v13; // [rsp+B0h] [rbp+18h] BYREF

  v13 = a3;
  v12 = a2;
  v4 = CommonStartTelemetryLogging::Provider();
  if ( *(_DWORD *)v4 > 5u
    && (*((_QWORD *)v4 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v4 + 3) & 0x400000000000LL) == *((_QWORD *)v4 + 3) )
  {
    v8 = 0;
    v11 = 0;
    v6 = &v12;
    v9 = &v13;
    v7 = 4;
    v10 = 4;
    TlgWrite(v4, &unk_180203094, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 4u, &pData);
  }
}
