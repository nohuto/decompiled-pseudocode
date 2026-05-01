/*
 * XREFs of ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x18008475C
 * Callers:
 *     ?RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z @ 0x18007D1FC (-RuntimeClassInitialize@CGlobals@ApplicationViewManagement@@QEAAJPEAVCApplicationViewManager@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007B014 (-Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
        __int64 a1,
        __int64 a2)
{
  const struct _TlgProvider_t *v3; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v6; // [rsp+50h] [rbp-38h]
  int v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+5Ch] [rbp-2Ch]
  __int64 v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  v3 = ApplicationViewManagementLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
  {
    v8 = 0;
    v11 = 0;
    v6 = L"SubKey";
    v10 = 4;
    v7 = 14;
    v9 = a2;
    LODWORD(v3) = TlgWrite(v3, &unk_18025835F, 0LL, 0LL, 4u, &pData);
  }
  return (int)v3;
}
