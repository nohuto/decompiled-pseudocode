/*
 * XREFs of ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180090370
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013F60 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z @ 0x18008CB88 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAVCVolumeStrip@@@Z.c)
 *     WPP_SF_dgd @ 0x180090AA4 (WPP_SF_dgd.c)
 *     WPP_SF_dg @ 0x1800ADE90 (WPP_SF_dg.c)
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
  CVolumeStrip *v17; // rcx
  __int64 v18; // rdx
  struct CVolumeStrip *v19; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+88h] [rbp+10h] BYREF

  v19 = 0LL;
  CAudioSession::SetVolumeAllStreams(a1, a2, a3, a4, 0, 1.0, 0, 0LL, a9);
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    VolumeStrip = CPerEndpointVolumeAudioSession::GetVolumeStrip((const void **)a1, &v19);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v12 = a1 + 408;
    VolumeStrip = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, __int64))(*(_QWORD *)v19 + 184LL))(
                    v19,
                    a5,
                    a1 + 408);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v13 = *(_QWORD *)(a1 + 1104);
    v20 = 0;
    VolumeStrip = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 88LL))(v13, &v20);
    if ( VolumeStrip < 0 )
      goto LABEL_22;
    v15 = 0;
    if ( a7 )
    {
      v16 = a8;
      v17 = WPP_GLOBAL_Control;
      do
      {
        if ( v17 != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_DWORD *)v17 + 7) & 0x200000) != 0
          && *((_BYTE *)v17 + 25) >= 4u )
        {
          WPP_SF_dg(
            *((_QWORD *)v17 + 2),
            151LL,
            &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
            v15,
            (float)(a6 * *v16));
          v17 = WPP_GLOBAL_Control;
        }
        if ( v15 >= v20 )
          goto LABEL_20;
        VolumeStrip = (*(__int64 (__fastcall **)(struct CVolumeStrip *, _QWORD, __int64, __int64))(*(_QWORD *)v19 + 136LL))(
                        v19,
                        v15,
                        v14,
                        v12);
        if ( VolumeStrip == 1 )
          VolumeStrip = 0;
        if ( VolumeStrip < 0 )
        {
          v17 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
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
      AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::UpdateAudioVolume", 5734, VolumeStrip);
  }
  if ( v19 )
    (*(void (__fastcall **)(struct CVolumeStrip *))(*(_QWORD *)v19 + 16LL))(v19);
}
