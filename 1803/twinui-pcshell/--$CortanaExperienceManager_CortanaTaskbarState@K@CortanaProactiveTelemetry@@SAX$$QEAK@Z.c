/*
 * XREFs of ??$CortanaExperienceManager_CortanaTaskbarState@K@CortanaProactiveTelemetry@@SAX$$QEAK@Z @ 0x180074B10
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x18006351C (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

int __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_CortanaTaskbarState<unsigned long>(int *a1)
{
  __int64 v2; // rax
  __int64 v3; // r10
  int v4; // eax
  REGHANDLE v5; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  int v8; // [rsp+34h] [rbp-5h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  void *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  int *v15; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

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
  LODWORD(v2) = (_DWORD)Context;
  v3 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v3 > 5u && (*(_QWORD *)(v3 + 16) & 0x400000000000LL) != 0 )
  {
    v2 = *(_QWORD *)(v3 + 24) & 0x400000000000LL;
    if ( v2 == *(_QWORD *)(v3 + 24) )
    {
      v4 = *a1;
      v17 = 0;
      v8 = v4;
      v15 = &v8;
      v16 = 4;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v3 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039079C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v5 = *(_QWORD *)(v3 + 32);
      EventDescriptor.Keyword = 0x400000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v12 = &unk_1803907A7;
      UserData.Reserved = 2;
      v13 = 69;
      v14 = 1;
      LODWORD(v2) = EventWriteTransfer(v5, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
    }
  }
  return v2;
}
