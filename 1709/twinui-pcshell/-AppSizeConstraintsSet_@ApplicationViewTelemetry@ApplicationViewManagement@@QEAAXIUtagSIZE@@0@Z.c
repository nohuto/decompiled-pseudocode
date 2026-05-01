/*
 * XREFs of ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180085AF8
 * Callers:
 *     ?SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z @ 0x180085830 (-SetSizeConstraintsForDpi@AppSizeConstraintsCache@@EEAAJIAEBUAPP_SIZE_CONSTRAINTS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18007B014 (-Provider@ApplicationViewManagementLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(
        ApplicationViewManagement::ApplicationViewTelemetry *this,
        int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  const struct _TlgProvider_t *v4; // rax
  struct tagSIZE v5; // [rsp+30h] [rbp-39h] BYREF
  struct tagSIZE v6; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  struct tagSIZE *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  LONG *p_cy; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  struct tagSIZE *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  LONG *v16; // [rsp+A0h] [rbp+37h]
  __int64 v17; // [rsp+A8h] [rbp+3Fh]
  int v18; // [rsp+D8h] [rbp+6Fh] BYREF

  v18 = a2;
  v5 = a3;
  v6 = a4;
  v4 = ApplicationViewManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v9 = 4LL;
    v8 = &v18;
    v10 = &v5;
    p_cy = &v5.cy;
    v14 = &v6;
    v16 = &v6.cy;
    v11 = 4LL;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 4LL;
    TlgWrite(v4, &unk_1802583AC, 0LL, 0LL, 7u, &pData);
  }
}
