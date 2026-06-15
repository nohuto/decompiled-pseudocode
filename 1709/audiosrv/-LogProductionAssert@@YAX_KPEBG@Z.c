/*
 * XREFs of ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18005FB40
 * Callers:
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x18001745C (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180019F00 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x18002C670 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall LogProductionAssert(__int64 a1, const unsigned __int16 *a2)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  TraceLoggingHProvider v5; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+70h] [rbp+2Fh]
  int v11; // [rsp+74h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp+37h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+67h] BYREF

  v13 = a1;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  if ( **((_DWORD **)Context + 1) > 2u )
  {
    if ( TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 1uLL) )
    {
      v11 = 0;
      v9 = &v13;
      v10 = 8;
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v5, &unk_180110BAD, v3, v4, 4u, &pData);
    }
  }
}
