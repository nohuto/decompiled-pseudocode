/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002B46C
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18002B618 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     _lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_ @ 0x180031A80 (_lambda_03b97fe06f3466f47fbded311dc3ec81_--_lambda_invoker_cdecl_.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180060D88 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180060F74 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x18009D4E4 (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, unsigned __int8 a2)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v6; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+48h] [rbp-B8h]
  unsigned __int16 *v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+58h] [rbp-A8h]
  int v12; // [rsp+5Ch] [rbp-A4h]
  void *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  char *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  int *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  _DWORD v22[1024]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v23; // [rsp+10B8h] [rbp+FB8h] BYREF

  v23 = a2;
  if ( *((_BYTE *)this + 88) != a2 )
  {
    v22[1] = -1;
    if ( a2 > 1u )
      v22[0] = (a2 != 0 ? 2 : 0) | 1 | (a2 << 14);
    else
      v22[0] = (a2 != 0 ? 2 : 0) | 1;
    v6 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v22, 8LL, 0LL);
    if ( v6 >= 0 )
      *((_BYTE *)this + 88) = v23;
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
    v3 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v3 > 4u )
    {
      v18 = 0;
      v21 = 0;
      v16 = (char *)&v23;
      v19 = &v6;
      v17 = 1;
      v20 = 4;
      v9 = 0LL;
      v8[1] = 4;
      v10 = *(unsigned __int16 **)(v3 + 8);
      v8[0] = ((unsigned int)&unk_1801107A0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v4 = *(_QWORD *)(v3 + 32);
      v11 = *v10;
      v13 = &unk_1801107AB;
      v12 = 2;
      v14 = 52;
      v15 = 1;
      EtwEventWriteTransfer(v4, v8, 0LL, 0LL, 4, &v10);
    }
  }
}
