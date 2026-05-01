/*
 * XREFs of ??$OnStartShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180075A1C
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1800797F0 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     wil::details::ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___::_ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___ @ 0x1800FAFA8 (wil--details--ScopeExitFn__lambda_16f240e79846c0147bdc525c16bf95d7___--_ScopeExitFn__lambda_16f2.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

int __fastcall StartWindowTelemetry::OnStartShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
        int *a1,
        int *a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  int v6; // eax
  REGHANDLE v7; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  int v11; // [rsp+40h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp+7h] BYREF
  void *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int *v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804389D0;
    qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
    qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8);
    InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
  }
  LODWORD(v4) = (_DWORD)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u && (*(_QWORD *)(v5 + 16) & 0x200000000000LL) != 0 )
  {
    v4 = *(_QWORD *)(v5 + 24) & 0x200000000000LL;
    if ( v4 == *(_QWORD *)(v5 + 24) )
    {
      v6 = *a1;
      v20 = 0;
      v23 = 0;
      v10 = v6;
      v18 = &v10;
      v11 = *a2;
      v21 = &v11;
      v19 = 4;
      v22 = 4;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803994F1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v7 = *(_QWORD *)(v5 + 32);
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v15 = &unk_1803994FC;
      UserData.Reserved = 2;
      v16 = 45;
      v17 = 1;
      LODWORD(v4) = EventWriteTransfer(v7, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  return v4;
}
