/*
 * XREFs of ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x180142FD4
 * Callers:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180073D60 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(
        ApplicationViewManagement::ApplicationViewTelemetry *this,
        int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  void *v4; // r8
  const struct _TlgProvider_t *v5; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  struct tagSIZE v8; // [rsp+40h] [rbp-39h] BYREF
  struct tagSIZE v9; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v11; // [rsp+70h] [rbp-9h]
  int v12; // [rsp+78h] [rbp-1h]
  int v13; // [rsp+7Ch] [rbp+3h]
  struct tagSIZE *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  LONG *p_cy; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  struct tagSIZE *v20; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  LONG *v23; // [rsp+B0h] [rbp+37h]
  int v24; // [rsp+B8h] [rbp+3Fh]
  int v25; // [rsp+BCh] [rbp+43h]
  int v26; // [rsp+E8h] [rbp+6Fh] BYREF

  v26 = a2;
  Context = 0LL;
  v8 = a3;
  v9 = a4;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180438758;
    qword_180438758[0] = &LockScreenServiceLogging::`vftable';
    qword_180438770 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438758, qword_180438770, v4);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_180438758);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v11 = &v26;
    v14 = &v8;
    p_cy = &v8.cy;
    v20 = &v9;
    v23 = &v9.cy;
    v12 = 4;
    v15 = 4;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    TlgWrite(v5, &unk_180389CB4, 0LL, 0LL, 7u, &pData);
  }
}
