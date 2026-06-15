/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18009D72C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180060D88 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180060F74 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x18009D8E8 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  __int64 *v2; // r10
  unsigned int v3; // r8d
  __int64 *v4; // rax
  unsigned int v5; // r9d
  __int64 v6; // rdx
  __int64 *v7; // rcx
  __int64 *i; // rcx
  const GUID *v9; // r8
  const GUID *v10; // r9
  void *v11; // r8
  const struct _TlgProvider_t *v12; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+6Ch] [rbp-94h]
  _DWORD v20[1024]; // [rsp+70h] [rbp-90h] BYREF

  memset(v20, 0, sizeof(v20));
  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = 0;
  v20[0] = 1;
  v4 = (__int64 *)*v2;
  v5 = 8;
  while ( v4 != v2 )
  {
    if ( *((_DWORD *)v4 + 8) )
    {
      if ( v3 >= 0x3FE )
        break;
      v6 = v5;
      v5 += 4;
      ++v3;
      *(_DWORD *)((char *)v20 + v6) = *((_DWORD *)v4 + 7);
    }
    if ( !*((_BYTE *)v4 + 25) )
    {
      v7 = (__int64 *)v4[2];
      if ( *((_BYTE *)v7 + 25) )
      {
        for ( i = (__int64 *)v4[1]; !*((_BYTE *)i + 25) && v4 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v4 = i;
        v4 = i;
      }
      else
      {
        do
        {
          v4 = v7;
          v7 = (__int64 *)*v7;
        }
        while ( !*((_BYTE *)v7 + 25) );
      }
    }
  }
  v20[1] = v3;
  v14 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, v20, 4096LL, 0LL);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v11);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v12 > 4u )
  {
    v19 = 0;
    v17 = &v14;
    v18 = 4;
    TlgWrite(v12, &unk_180110728, v9, v10, 3u, &pData);
  }
}
