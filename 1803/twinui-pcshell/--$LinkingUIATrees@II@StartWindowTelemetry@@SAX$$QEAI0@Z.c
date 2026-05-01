/*
 * XREFs of ??$LinkingUIATrees@II@StartWindowTelemetry@@SAX$$QEAI0@Z @ 0x180075624
 * Callers:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800779B8 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

int __fastcall StartWindowTelemetry::LinkingUIATrees<unsigned int,unsigned int>(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  REGHANDLE v6; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  void *v12; // [rsp+68h] [rbp+17h]
  int v13; // [rsp+70h] [rbp+1Fh]
  int v14; // [rsp+74h] [rbp+23h]
  __int64 v15; // [rsp+78h] [rbp+27h]
  int v16; // [rsp+80h] [rbp+2Fh]
  int v17; // [rsp+84h] [rbp+33h]
  __int64 v18; // [rsp+88h] [rbp+37h]
  int v19; // [rsp+90h] [rbp+3Fh]
  int v20; // [rsp+94h] [rbp+43h]

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
      v17 = 0;
      v20 = 0;
      v16 = 4;
      v19 = 4;
      v15 = a1;
      v18 = a2;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = *(_QWORD *)(v5 + 8);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1803982F7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v6 = *(_QWORD *)(v5 + 32);
      EventDescriptor.Keyword = 0x200000000000LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v12 = &unk_180398302;
      UserData.Reserved = 2;
      v13 = 43;
      v14 = 1;
      LODWORD(v4) = EventWriteTransfer(v6, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
  }
  return v4;
}
