/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800AB760
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180005070 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_q_guid_ @ 0x1800A1B74 (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x1800A50BC (WPP_SF_qdgg.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800AD460 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     WPP_SF_q_guid__guid_ @ 0x1800AE318 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x1800AE380 (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x1800AE3D4 (WPP_SF_qgg_HEX__HEX_.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  __int64 v2; // rsi
  char v3; // r14
  char v4; // r13
  CAudioSessionManager *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  CAudioSessionManager **v10; // rdx
  int v11; // r8d
  CAudioSessionManager *v12; // rcx
  float *p_fMasterVolume; // r15
  __m128 fMasterVolume_low; // xmm0
  _DWORD *v15; // r12
  __m128 v16; // xmm1
  unsigned int v17; // eax
  SIZE_T v18; // rax
  unsigned __int64 v19; // kr00_8
  float *v20; // rax
  float *v21; // r12
  float v22; // xmm0_4
  __int64 v23; // rax
  int v24; // r14d
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  float v28; // xmm1_4
  int *v30; // [rsp+28h] [rbp-49h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v32; // [rsp+50h] [rbp-21h]
  float *v33; // [rsp+58h] [rbp-19h] BYREF
  __int16 v34; // [rsp+60h] [rbp-11h]
  char *v35; // [rsp+68h] [rbp-9h] BYREF
  __int128 v36; // [rsp+70h] [rbp-1h]
  char v37; // [rsp+D8h] [rbp+67h]
  char v38; // [rsp+E0h] [rbp+6Fh]
  float *v39; // [rsp+E8h] [rbp+77h]

  v2 = 0LL;
  v3 = 0;
  v38 = 0;
  v4 = 0;
  v37 = 0;
  v39 = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x7Bu,
      (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
      (char *)this - 984,
      a2);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = (char *)this - 648;
  v9 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 81);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 81) )
    v9 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v7 + 28) & 0x40) != 0
      && *((_BYTE *)v7 + 25) >= 4u )
    {
      WPP_SF_q_guid__guid_(
        *((_QWORD *)v7 + 2),
        (_DWORD)v8,
        (unsigned int)&WPP_GLOBAL_Control,
        (_DWORD)this - 984,
        (__int64)a2,
        (__int64)this - 648);
    }
    v32 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 176);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v11 = *((_DWORD *)this - 33);
    if ( a2->bMuted == v11 )
    {
      v12 = WPP_GLOBAL_Control;
    }
    else
    {
      v12 = WPP_GLOBAL_Control;
      v10 = &WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          126LL,
          &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
          (char *)this - 984,
          v11,
          a2->bMuted);
        v12 = WPP_GLOBAL_Control;
      }
      v4 = 1;
      v38 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    v15 = (_DWORD *)((char *)this - 136);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 34) )
    {
      if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        v16 = (__m128)(unsigned int)*v15;
        v34 = 4;
        LOWORD(v36) = 4;
        v33 = &a2->fMasterVolume;
        v35 = (char *)this - 136;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v12 + 2),
          (_DWORD)v10,
          v11,
          (_DWORD)this - 984,
          *(_OWORD *)&_mm_cvtps_pd(v16),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v35,
          (__int64)&v33);
        v12 = WPP_GLOBAL_Control;
      }
      v37 = 1;
    }
    v17 = *((_DWORD *)this - 6);
    if ( a2->nChannels == v17 )
    {
      v19 = v17;
      v18 = 4LL * v17;
      if ( !is_mul_ok(v19, 4uLL) )
        v18 = -1LL;
      v20 = (float *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
      v39 = v20;
      if ( v20 && *((_DWORD *)this - 6) )
      {
        v21 = v20;
        do
        {
          if ( *p_fMasterVolume == 0.0 )
            v22 = FLOAT_1_0;
          else
            v22 = a2->afChannelVolumes[v2] / *p_fMasterVolume;
          v21[v2] = v22;
          v23 = *((_QWORD *)this - 2);
          if ( v22 == *(float *)(v23 + 4 * v2) )
          {
            v12 = WPP_GLOBAL_Control;
          }
          else
          {
            v12 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              LODWORD(v30) = v2;
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x80u,
                (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
                (char *)this - 984,
                v30,
                *(float *)(v23 + 4 * v2),
                v22);
              v12 = WPP_GLOBAL_Control;
            }
            v3 = 1;
          }
          v2 = (unsigned int)(v2 + 1);
        }
        while ( (unsigned int)v2 < *((_DWORD *)this - 6) );
        v4 = v38;
        v15 = (_DWORD *)((char *)this - 136);
      }
      else
      {
        v12 = WPP_GLOBAL_Control;
      }
      LODWORD(v2) = 0;
    }
    if ( v32 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v4 || v37 || v3 )
    {
      if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v12 + 2), 0x81u, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v3 )
      {
        v24 = 0;
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x82u, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
        }
        v32 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 176);
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        v25 = *((_DWORD *)this - 6);
        if ( a2->nChannels == v25 )
        {
          v26 = 0LL;
          if ( v25 )
          {
            v27 = *((_QWORD *)this - 2);
            do
            {
              v28 = v39[v26];
              if ( *(float *)(v27 + 4 * v26) != v28 )
              {
                *(float *)(v27 + 4 * v26) = v28;
                v24 = v26;
              }
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < *((_DWORD *)this - 6) );
          }
          LODWORD(v2) = 1;
        }
        if ( v32 )
          LeaveCriticalSection(lpCriticalSection);
        if ( (_DWORD)v2 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 968, 1, (__int64)a2, v24, 1);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v4 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 984),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1,
          0LL);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v37 )
      {
        if ( v12 != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x83u, (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids);
        }
        v32 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 176);
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        *v15 = *(_DWORD *)p_fMasterVolume;
        if ( v32 )
          LeaveCriticalSection(lpCriticalSection);
        CAudioSession::RecalculateSessionVolume((__int64)this - 968, 0, (__int64)a2, 0, 1);
      }
    }
    operator delete(v39);
  }
  else if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
         && (*((_BYTE *)v7 + 28) & 0x40) != 0
         && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v7 + 2), 124LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, (char *)this - 984);
  }
  return 0LL;
}
