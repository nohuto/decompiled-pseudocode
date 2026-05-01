/*
 * XREFs of ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x180091564
 * Callers:
 *     ?UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ @ 0x1800315E0 (-UnboostShellPriority@ViewEventDispatcher@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(int *a1)
{
  ULONG result; // eax
  __int64 v3; // r10
  int v4; // eax
  REGHANDLE v5; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  int v7; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  int *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (unsigned int)Context;
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    v4 = *a1;
    v16 = 0;
    v7 = v4;
    v14 = &v7;
    v15 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v3 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180393804 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v5 = *(_QWORD *)(v3 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v11 = &unk_18039380F;
    UserData.Reserved = 2;
    v12 = 39;
    v13 = 1;
    return EventWriteTransfer(v5, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  return result;
}
