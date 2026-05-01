/*
 * XREFs of ??$CortanaExperienceManager_SetPositioningAnchorRect@AEAMAEAMAEAMAEAM@CortanaProactiveTelemetry@@SAXAEAM000@Z @ 0x1800749C0
 * Callers:
 *     ?OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z @ 0x1800663F0 (-OnTraySearchItemChanged@CortanaDesktopExperienceView@@UEAAJURect@Foundation@Windows@@0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

ULONG __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_SetPositioningAnchorRect<float &,float &,float &,float &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  ULONG result; // eax
  __int64 v9; // r10
  REGHANDLE v10; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  void *v15; // [rsp+68h] [rbp-19h]
  int v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+74h] [rbp-Dh]
  __int64 v18; // [rsp+78h] [rbp-9h]
  int v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+84h] [rbp+3h]
  __int64 v21; // [rsp+88h] [rbp+7h]
  int v22; // [rsp+90h] [rbp+Fh]
  int v23; // [rsp+94h] [rbp+13h]
  __int64 v24; // [rsp+98h] [rbp+17h]
  int v25; // [rsp+A0h] [rbp+1Fh]
  int v26; // [rsp+A4h] [rbp+23h]
  __int64 v27; // [rsp+A8h] [rbp+27h]
  int v28; // [rsp+B0h] [rbp+2Fh]
  int v29; // [rsp+B4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  result = (unsigned int)Context;
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v19 = 4;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v18 = a1;
    v21 = a2;
    v24 = a3;
    v27 = a4;
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803907ED - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v10 = *(_QWORD *)(v9 + 32);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v15 = &unk_1803907F8;
    UserData.Reserved = 2;
    v16 = 74;
    v17 = 1;
    return EventWriteTransfer(v10, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return result;
}
