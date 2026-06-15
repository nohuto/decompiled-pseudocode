/*
 * XREFs of ?LogProductionAssert@@YAX_KPEBG@Z @ 0x18009BD38
 * Callers:
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180007FE0 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180047130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180047790 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x180098920 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 */

void __fastcall LogProductionAssert(__int64 a1, const unsigned __int16 *a2)
{
  TraceLoggingHProvider *v3; // rax
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  TraceLoggingHProvider v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF

  v12 = a1;
  v3 = (TraceLoggingHProvider *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                  a1,
                                  lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v3[1] > 2u )
  {
    if ( TlgKeywordOn(v3[1], 1uLL) )
    {
      v10 = 0;
      v8 = &v12;
      v9 = 8;
      TlgCreateWsz(&pDesc, a2);
      TlgWrite(v6, &unk_180144AF0, v4, v5, 4u, &pData);
    }
  }
}
