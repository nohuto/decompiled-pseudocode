/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180008078
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180008070 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x180008200 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x180008268 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800083E0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180008CD0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(_BOOL8 a1)
{
  bool v1; // di
  __int64 v2; // r10
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v4; // rbx
  void (*v5)(void); // rax
  void (__fastcall *v6)(struct CAudioSessionManagerProvider *); // rax
  BOOL v7; // [rsp+38h] [rbp-9h] BYREF
  struct CAudioSessionManagerProvider *v8; // [rsp+40h] [rbp-1h] BYREF
  _DWORD v9[2]; // [rsp+48h] [rbp+7h] BYREF
  __int64 v10; // [rsp+50h] [rbp+Fh]
  __int64 v11; // [rsp+58h] [rbp+17h]
  unsigned __int16 *v12; // [rsp+60h] [rbp+1Fh] BYREF
  int v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+6Ch] [rbp+2Bh]
  void *v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+7Ch] [rbp+3Bh]
  BOOL *v18; // [rsp+80h] [rbp+3Fh]
  int v19; // [rsp+88h] [rbp+47h]
  int v20; // [rsp+8Ch] [rbp+4Bh]

  v11 = -2LL;
  v1 = a1;
  v2 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     a1,
                     lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v2 > 5u )
  {
    v7 = v1;
    v18 = &v7;
    v19 = 4;
    v20 = 0;
    v9[0] = ((unsigned int)&unk_180144E26 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v9[1] = 5;
    v10 = 0LL;
    v12 = *(unsigned __int16 **)(v2 + 8);
    v13 = *v12;
    v14 = 2;
    v15 = &unk_180144E31;
    v16 = 29;
    v17 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v2 + 32), v9, 0LL, 0LL, 3, &v12, v1);
  }
  v8 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v8);
  v4 = v8;
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v8, v1);
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
    v6 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v4 + 16LL);
    if ( (char *)v6 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v4);
    else
      v6(v4);
  }
}
