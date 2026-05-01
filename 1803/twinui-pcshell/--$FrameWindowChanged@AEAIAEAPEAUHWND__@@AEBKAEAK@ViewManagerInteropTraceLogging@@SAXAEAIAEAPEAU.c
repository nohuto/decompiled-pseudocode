/*
 * XREFs of ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x180090D0C
 * Callers:
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0001_0001@@@Z @ 0x180053930 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  ULONG result; // eax
  __int64 v9; // r10
  int v10; // eax
  REGHANDLE v11; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-59h] BYREF
  int v13; // [rsp+3Ch] [rbp-55h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-51h] BYREF
  __int64 v15; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-29h] BYREF
  void *v18; // [rsp+78h] [rbp-19h]
  int v19; // [rsp+80h] [rbp-11h]
  int v20; // [rsp+84h] [rbp-Dh]
  int *v21; // [rsp+88h] [rbp-9h]
  int v22; // [rsp+90h] [rbp-1h]
  int v23; // [rsp+94h] [rbp+3h]
  __int64 *v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A4h] [rbp+13h]
  __int64 v27; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B4h] [rbp+23h]
  __int64 v30; // [rsp+B8h] [rbp+27h]
  int v31; // [rsp+C0h] [rbp+2Fh]
  int v32; // [rsp+C4h] [rbp+33h]

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
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a1;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v13 = v10;
    v21 = &v13;
    v15 = *a2;
    v24 = &v15;
    v22 = 4;
    v25 = 8;
    v27 = a3;
    v28 = 4;
    v30 = a4;
    v31 = 4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180397218 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v11 = *(_QWORD *)(v9 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v18 = &unk_180397223;
    UserData.Reserved = 2;
    v19 = 72;
    v20 = 1;
    return EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
