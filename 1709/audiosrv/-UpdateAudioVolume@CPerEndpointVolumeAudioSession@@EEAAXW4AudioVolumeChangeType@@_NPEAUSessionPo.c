/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180076980
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x1800185E8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_dg @ 0x18006B9E8 (WPP_SF_dg.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800726A8 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     WPP_SF_dgd @ 0x180077050 (WPP_SF_dgd.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::UpdateAudioVolume(
        __int64 a1,
        int a2,
        bool a3,
        struct SessionPolicyGains *a4,
        unsigned __int8 a5,
        float a6,
        unsigned int a7,
        float *a8,
        __int64 a9)
{
  int VolumeStrip; // ebx
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edi
  float *v16; // rsi
  CAudioDGProcess *v17; // rcx
  __int64 v18; // rdx
  double v19; // [rsp+20h] [rbp-58h]
  struct IVolumeStrip *v20; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF

  v20 = 0LL;
  CAudioSession::SetVolumeAllStreams(a1, a2, a3, a4, 0, 1.0, 0, 0LL, a9);
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip((struct IUnknown **)a1, &v20);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v12 = a1 + 336;
    VolumeStrip = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64))(*(_QWORD *)v20 + 144LL))(
                    v20,
                    a5,
                    a1 + 336);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v13 = *(_QWORD *)(a1 + 1088);
    v21 = 0;
    VolumeStrip = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v21);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v15 = 0;
    if ( a7 )
    {
      v16 = a8;
      v17 = WPP_GLOBAL_Control;
      do
      {
        if ( v17 != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v17 + 7) & 0x200000) != 0
          && *((_BYTE *)v17 + 25) >= 4u )
        {
          v19 = (float)(a6 * *v16);
          WPP_SF_dg(*((_QWORD *)v17 + 2), 0x90u, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, v15);
          v17 = WPP_GLOBAL_Control;
        }
        if ( v15 >= v21 )
          goto LABEL_20;
        VolumeStrip = (*(__int64 (__fastcall **)(struct IVolumeStrip *, _QWORD, __int64, __int64, double))(*(_QWORD *)v20 + 96LL))(
                        v20,
                        v15,
                        v14,
                        v12,
                        COERCE_DOUBLE(*(_QWORD *)&v19));
        if ( VolumeStrip == 1 )
          VolumeStrip = 0;
        if ( VolumeStrip < 0 )
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
            || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0
            || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
          {
            goto LABEL_20;
          }
          WPP_SF_dgd(*((_QWORD *)WPP_GLOBAL_Control + 2), v18, v14, v15, (float)(a6 * *v16), VolumeStrip);
        }
        v17 = WPP_GLOBAL_Control;
LABEL_20:
        ++v15;
        ++v16;
      }
      while ( v15 < a7 );
    }
    if ( VolumeStrip < 0 )
LABEL_22:
      AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::UpdateAudioVolume", 5678, VolumeStrip);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v20 + 16LL))(v20);
}
