/*
 * XREFs of ??$SessionIdleTaskCompletionAdded@AEAIAEBQEAUHWND__@@AEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEBQEAUHWND__@@AEAK@Z @ 0x1801E3EC0
 * Callers:
 *     _lambda_4e85baddd9af2aed2f97afae8fd139c5_::operator() @ 0x1801E479C (_lambda_4e85baddd9af2aed2f97afae8fd139c5_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::SessionIdleTaskCompletionAdded<unsigned int &,HWND__ * const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3)
{
  void *v6; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v8; // rcx
  int v9; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  __int64 *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  __int64 v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v6);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (int)Context;
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a1;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v11 = v9;
    v15 = &v11;
    v13 = *a2;
    v18 = &v13;
    v16 = 4;
    v19 = 8;
    v21 = a3;
    v22 = 4;
    return TlgWrite(v8, &unk_1803973DD, 0LL, 0LL, 5u, &pData);
  }
  return result;
}
