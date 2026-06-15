/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x180025884
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x180023F30 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ @ 0x18001DFD0 (-NotifyAudioDGTerminated@CVolumeProvider@@UEAAXXZ.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18001E4F0 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180025D84 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180025E10 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(__int64 a1)
{
  unsigned __int8 v1; // di
  const struct _TlgProvider_t *v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v6; // rbx
  void (*v7)(void); // rax
  void (__fastcall *v8)(struct CAudioSessionManagerProvider *); // rax
  struct CAudioSessionManagerProvider *v9[2]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct CAudioSessionManagerProvider **v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v9[1] = (struct CAudioSessionManagerProvider *)-2LL;
  v1 = a1;
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                                    a1,
                                                    lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    LODWORD(v9[0]) = v1;
    v11 = v9;
    v12 = 4;
    v13 = 0;
    TlgWrite(v2, &unk_1800F8C70, v3, v4, 3u, &pData);
  }
  v9[0] = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(v9);
  v6 = v9[0];
  if ( AudioSessionManagerProvider >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v9[0], v1);
  if ( g_pVolumeProvider )
  {
    v7 = *(void (**)(void))(*(_QWORD *)g_pVolumeProvider + 40LL);
    if ( (char *)v7 == (char *)CVolumeProvider::NotifyAudioDGTerminated )
      CVolumeProvider::NotifyAudioDGTerminated(g_pVolumeProvider);
    else
      v7();
  }
  if ( v6 )
  {
    v8 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v8 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
      ATL::CComObject<CAudioSessionManagerProvider>::Release(v6);
    else
      v8(v6);
  }
}
