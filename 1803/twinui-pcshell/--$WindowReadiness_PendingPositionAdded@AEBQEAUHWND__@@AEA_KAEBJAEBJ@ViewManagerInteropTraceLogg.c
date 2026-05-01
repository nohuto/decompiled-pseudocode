/*
 * XREFs of ??$WindowReadiness_PendingPositionAdded@AEBQEAUHWND__@@AEA_KAEBJAEBJ@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_KAEBJ2@Z @ 0x180087740
 * Callers:
 *     ?PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18004EF60 (-PushDesiredPositionToWindow@ViewWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18005B694 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionAdded<HWND__ * const &,unsigned __int64 &,long const &,long const &>(
        __int64 *a1,
        int *a2,
        int *a3,
        int *a4)
{
  ULONG result; // eax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rax
  REGHANDLE v11; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-59h] BYREF
  int v13; // [rsp+34h] [rbp-55h] BYREF
  int v14; // [rsp+38h] [rbp-51h] BYREF
  int v15; // [rsp+3Ch] [rbp-4Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  __int64 *v23; // [rsp+80h] [rbp-9h]
  __int64 v24; // [rsp+88h] [rbp-1h]
  int *v25; // [rsp+90h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+Fh]
  int *v27; // [rsp+A0h] [rbp+17h]
  __int64 v28; // [rsp+A8h] [rbp+1Fh]
  int *v29; // [rsp+B0h] [rbp+27h]
  __int64 v30; // [rsp+B8h] [rbp+2Fh]

  Context = 0LL;
  result = InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( result && fPending )
  {
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    Context = qword_180438940;
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    result = InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v17 = *a1;
    v23 = &v17;
    v13 = *a2;
    v25 = &v13;
    v14 = *a3;
    v27 = &v14;
    v15 = *a4;
    v29 = &v15;
    v24 = 8LL;
    v26 = 4LL;
    v28 = 4LL;
    v30 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v10 = *(unsigned __int16 **)(v9 + 8);
    v11 = *(_QWORD *)(v9 + 32);
    UserData.Ptr = (ULONGLONG)v10;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803979D7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *v10;
    v20 = &unk_1803979E2;
    UserData.Reserved = 2;
    v21 = 85;
    v22 = 1;
    return EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
