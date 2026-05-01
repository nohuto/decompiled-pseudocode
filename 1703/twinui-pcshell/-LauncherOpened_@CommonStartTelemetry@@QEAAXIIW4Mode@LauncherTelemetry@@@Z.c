/*
 * XREFs of ?LauncherOpened_@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x180148254
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18014A8B0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall CommonStartTelemetry::LauncherOpened_(__int64 a1, int a2, int a3, int a4)
{
  const struct _TlgProvider_t *v5; // rax
  int v7; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  int *v9; // [rsp+68h] [rbp+7h]
  __int64 v10; // [rsp+70h] [rbp+Fh]
  int *v11; // [rsp+78h] [rbp+17h]
  __int64 v12; // [rsp+80h] [rbp+1Fh]
  int *v13; // [rsp+88h] [rbp+27h]
  __int64 v14; // [rsp+90h] [rbp+2Fh]
  int v15; // [rsp+D0h] [rbp+6Fh] BYREF
  int v16; // [rsp+D8h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  v5 = CommonStartTelemetryLogging::Provider();
  if ( *(_DWORD *)v5 > 5u
    && (*((_QWORD *)v5 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v5 + 3) & 0x400000000000LL) == *((_QWORD *)v5 + 3) )
  {
    v10 = 4LL;
    v9 = &v15;
    v11 = &v16;
    v13 = &v7;
    v12 = 4LL;
    v7 = a4;
    v14 = 4LL;
    LODWORD(v5) = TlgWrite(v5, &unk_1802025C0, 0LL, 0LL, 5u, &pData);
  }
  return (int)v5;
}
