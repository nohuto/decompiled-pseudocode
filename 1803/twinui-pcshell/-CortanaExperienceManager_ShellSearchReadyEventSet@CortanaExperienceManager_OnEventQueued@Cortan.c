/*
 * XREFs of ?CortanaExperienceManager_ShellSearchReadyEventSet@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800742D4
 * Callers:
 *     ?_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180066C30 (-_OnViewEvent@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@F.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::CortanaExperienceManager_ShellSearchReadyEventSet(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this)
{
  __int64 v2; // r10
  const GUID *v3; // r8
  unsigned __int16 *v4; // rax
  REGHANDLE v5; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-30h] BYREF
  void *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

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
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v3 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    v4 = *(unsigned __int16 **)(v2 + 8);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18038C61A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    UserData.Ptr = (ULONGLONG)v4;
    UserData.Size = *v4;
    v10 = &unk_18038C625;
    UserData.Reserved = 2;
    v5 = *(_QWORD *)(v2 + 32);
    v11 = 53;
    v12 = 1;
    EventWriteTransfer(v5, &EventDescriptor, v3, 0LL, 2u, &UserData);
  }
}
