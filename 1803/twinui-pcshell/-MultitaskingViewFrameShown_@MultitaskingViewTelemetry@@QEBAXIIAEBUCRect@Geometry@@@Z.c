/*
 * XREFs of ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x18028258C
 * Callers:
 *     ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x180282FA0 (-Show@CMultitaskingViewFrame@@UEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        MultitaskingViewTelemetry *this,
        int a2,
        int a3,
        const struct Geometry::CRect *a4)
{
  void *v5; // r8
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  int *v11; // [rsp+68h] [rbp-19h]
  int v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  int *v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]
  int v16; // [rsp+84h] [rbp+3h]
  const struct Geometry::CRect *v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  char *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  char *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]
  char *v26; // [rsp+B8h] [rbp+37h]
  int v27; // [rsp+C0h] [rbp+3Fh]
  int v28; // [rsp+C4h] [rbp+43h]
  int v29; // [rsp+F0h] [rbp+6Fh] BYREF
  int v30; // [rsp+F8h] [rbp+77h] BYREF

  v30 = a3;
  v29 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387B0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v5);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    if ( TlgKeywordOn(v6, 0x200000000000uLL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v11 = &v29;
      v14 = &v30;
      v20 = (char *)a4 + 4;
      v23 = (char *)a4 + 8;
      v26 = (char *)a4 + 12;
      v12 = 4;
      v15 = 4;
      v17 = a4;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v27 = 4;
      TlgWrite(v7, &unk_18039C145, 0LL, 0LL, 8u, &pData);
    }
  }
}
