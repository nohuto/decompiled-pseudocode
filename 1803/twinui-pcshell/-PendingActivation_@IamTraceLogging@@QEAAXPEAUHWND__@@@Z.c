/*
 * XREFs of ?PendingActivation_@IamTraceLogging@@QEAAXPEAUHWND__@@@Z @ 0x18010962C
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x180102B84 (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall IamTraceLogging::PendingActivation_(IamTraceLogging *this, HWND a2)
{
  DWORD WindowThreadProcessId; // eax
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  DWORD dwProcessId; // [rsp+34h] [rbp-25h] BYREF
  DWORD v7; // [rsp+38h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  HWND v9; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  HWND *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  DWORD *p_dwProcessId; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  DWORD *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
  Context = 0LL;
  v7 = WindowThreadProcessId;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = &v9;
    p_dwProcessId = &dwProcessId;
    v17 = &v7;
    v9 = a2;
    v12 = 8;
    v15 = 4;
    v18 = 4;
    TlgWrite(v4, &unk_180385F6B, 0LL, 0LL, 5u, &pData);
  }
}
