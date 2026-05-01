/*
 * XREFs of ?LauncherClosed@CommonStartTelemetry@@SAXXZ @ 0x18007AE98
 * Callers:
 *     ?OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180079750 (-OnStartHidden@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Win.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void CommonStartTelemetry::LauncherClosed(void)
{
  __int64 v0; // r10
  unsigned __int16 *v1; // rax
  REGHANDLE v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  void *v7; // [rsp+60h] [rbp-20h]
  int v8; // [rsp+68h] [rbp-18h]
  int v9; // [rsp+6Ch] [rbp-14h]

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
  v0 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v0 > 5u
    && (*(_QWORD *)(v0 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v0 + 24) & 0x400000000000LL) == *(_QWORD *)(v0 + 24) )
  {
    *(_DWORD *)&EventDescriptor.Level = 5;
    v1 = *(unsigned __int16 **)(v0 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180399A2F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    UserData.Ptr = (ULONGLONG)v1;
    EventDescriptor.Keyword = 0x400000000000LL;
    UserData.Size = *v1;
    v7 = &unk_180399A3A;
    UserData.Reserved = 2;
    v2 = *(_QWORD *)(v0 + 32);
    v8 = 18;
    v9 = 1;
    EventWriteTransfer(v2, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
}
