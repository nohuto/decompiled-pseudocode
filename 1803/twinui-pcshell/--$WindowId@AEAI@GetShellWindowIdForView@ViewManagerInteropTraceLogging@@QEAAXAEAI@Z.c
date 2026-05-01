/*
 * XREFs of ??$WindowId@AEAI@GetShellWindowIdForView@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x1801DB670
 * Callers:
 *     ?GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowType@4@PEAI@Z @ 0x1801DC70C (-GetShellWindowIdForView@ViewManagerBridge@@QEAAJPEAUIShellView@Server@Navigation@@PEAW4WindowTy.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::GetShellWindowIdForView::WindowId<unsigned int &>(
        __int64 a1,
        int *a2)
{
  void *v4; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v4);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (int)Context;
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a2;
    v14 = 0;
    v9 = v7;
    v12 = &v9;
    v13 = 4;
    return TlgWrite(v6, &unk_18039481E, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 3u, &pData);
  }
  return result;
}
