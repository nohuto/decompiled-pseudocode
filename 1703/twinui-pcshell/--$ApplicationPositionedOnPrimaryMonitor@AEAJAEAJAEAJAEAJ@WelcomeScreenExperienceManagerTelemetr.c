/*
 * XREFs of ??$ApplicationPositionedOnPrimaryMonitor@AEAJAEAJAEAJAEAJ@WelcomeScreenExperienceManagerTelemetry@@SAXAEAJ000@Z @ 0x1800B4D90
 * Callers:
 *     ?PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ @ 0x1800B38A0 (-PositionApplicationOnPrimaryMonitor@CWelcomeScreenExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B0FD0 (-Provider@WelcomeScreenExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall WelcomeScreenExperienceManagerTelemetry::ApplicationPositionedOnPrimaryMonitor<long &,long &,long &,long &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _TlgProvider_t *v8; // rax
  int v9; // ecx
  int v10; // ecx
  int v12; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+3Ch] [rbp-35h] BYREF
  int v14; // [rsp+40h] [rbp-31h] BYREF
  int v15; // [rsp+44h] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  int *v17; // [rsp+68h] [rbp-9h]
  __int64 v18; // [rsp+70h] [rbp-1h]
  int *v19; // [rsp+78h] [rbp+7h]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  int *v21; // [rsp+88h] [rbp+17h]
  __int64 v22; // [rsp+90h] [rbp+1Fh]
  int *v23; // [rsp+98h] [rbp+27h]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]

  v8 = WelcomeScreenExperienceManagerLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a1;
    v17 = &v12;
    v19 = &v13;
    v14 = *a3;
    v21 = &v14;
    v15 = *a4;
    v12 = v9;
    v10 = *a2;
    v23 = &v15;
    v18 = 4LL;
    v13 = v10;
    v20 = 4LL;
    v22 = 4LL;
    v24 = 4LL;
    LODWORD(v8) = TlgWrite(v8, &unk_1801FBA4D, 0LL, 0LL, 6u, &pData);
  }
  return (int)v8;
}
