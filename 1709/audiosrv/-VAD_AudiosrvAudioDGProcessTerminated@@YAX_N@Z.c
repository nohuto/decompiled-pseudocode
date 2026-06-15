/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18002C878
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x18002C730 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180009160 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180013EC0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(unsigned __int8 a1)
{
  __int64 v2; // r10
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v4; // rbx
  void (*v5)(void); // rax
  __int64 (__fastcall *v6)(volatile signed __int32 *); // rax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v8; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  struct CAudioSessionManagerProvider *v10; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v11[2]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v12; // [rsp+58h] [rbp+7h]
  __int64 v13; // [rsp+60h] [rbp+Fh]
  unsigned __int16 *v14; // [rsp+68h] [rbp+17h] BYREF
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  void *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  int *v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]

  v13 = -2LL;
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
  v2 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v8 = a1;
    v20 = &v8;
    v21 = 4;
    v22 = 0;
    v11[0] = ((unsigned int)&unk_18010EB7C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v11[1] = 5;
    v12 = 0LL;
    v14 = *(unsigned __int16 **)(v2 + 8);
    v15 = *v14;
    v16 = 2;
    v17 = &unk_18010EB87;
    v18 = 29;
    v19 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v2 + 32), v11, 0LL, 0LL, 3, &v14);
  }
  v10 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v10);
  v4 = v10;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v10, a1);
  if ( g_pVolumeProvider )
  {
    v5 = *(void (**)(void))(*(_QWORD *)g_pVolumeProvider + 40LL);
    if ( (char *)v5 == (char *)CVolumeProvider::NotifyAudioDGTerminated )
      CVolumeProvider::NotifyAudioDGTerminated(g_pVolumeProvider);
    else
      v5();
  }
  if ( v4 )
  {
    v6 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL);
    if ( v6 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release((volatile signed __int32 *)v4);
    else
      v6((volatile signed __int32 *)v4);
  }
}
