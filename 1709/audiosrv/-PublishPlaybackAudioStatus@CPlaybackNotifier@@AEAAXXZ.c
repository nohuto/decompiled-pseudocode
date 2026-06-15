/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18000F354
 * Callers:
 *     ?UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z @ 0x18000F4C0 (-UpdateAudioPlaybackStatus@CPlaybackNotifier@@AEAAXW4REFERENCE_OPERATION@@PEBG@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180060D88 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180060F74 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x18009D490 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?SerializeEventHeaderFromEndpointMap@CPlaybackNotifier@@AEAAXPEADK@Z @ 0x18000F298 (-SerializeEventHeaderFromEndpointMap@CPlaybackNotifier@@AEAAXPEADK@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 fPending; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v6[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v8; // [rsp+50h] [rbp-B0h] BYREF
  int v9; // [rsp+58h] [rbp-A8h]
  int v10; // [rsp+5Ch] [rbp-A4h]
  void *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+6Ch] [rbp-94h]
  char *v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  char v17[4096]; // [rsp+80h] [rbp-80h] BYREF

  memset(v17, 0, sizeof(v17));
  CPlaybackNotifier::SerializeEventHeaderFromEndpointMap(this, v17);
  HIDWORD(fPending) = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, v17, 4096LL, 0LL);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  if ( (_DWORD)fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 4u )
  {
    v16 = 0;
    v14 = (char *)&fPending + 4;
    v15 = 4;
    v7 = 0LL;
    v6[1] = 4;
    v8 = *(unsigned __int16 **)(v2 + 8);
    v6[0] = ((unsigned int)&unk_18011075B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v3 = *(_QWORD *)(v2 + 32);
    v9 = *v8;
    v11 = &unk_180110766;
    v10 = 2;
    v12 = 57;
    v13 = 1;
    EtwEventWriteTransfer(v3, v6, 0LL, 0LL, 3, &v8, fPending, Context);
  }
}
