/*
 * XREFs of ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180073BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180018810 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_q_guid_ @ 0x180067C74 (WPP_SF_q_guid_.c)
 *     WPP_SF_qdgg @ 0x18006BAB8 (WPP_SF_qdgg.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z @ 0x180076070 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@H@Z.c)
 *     WPP_SF_q_guid__guid_ @ 0x180077198 (WPP_SF_q_guid__guid_.c)
 *     WPP_SF_qdd @ 0x180077200 (WPP_SF_qdd.c)
 *     WPP_SF_qgg_HEX__HEX_ @ 0x180077254 (WPP_SF_qgg_HEX__HEX_.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::OnNotify(
        CPerEndpointVolumeAudioSession *this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  unsigned int v2; // esi
  char v4; // r14
  float *v5; // r12
  CAudioDGProcess *v7; // rcx
  char *v8; // rdx
  __int64 v9; // rax
  CAudioDGProcess **v10; // rdx
  int v11; // r8d
  CAudioDGProcess *v12; // rcx
  float *p_fMasterVolume; // r15
  __m128 fMasterVolume_low; // xmm0
  _DWORD *v15; // r13
  __m128 v16; // xmm1
  unsigned int v17; // eax
  SIZE_T v18; // rax
  unsigned __int64 v19; // kr00_8
  float v20; // xmm0_4
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // esi
  unsigned int v24; // r14d
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rdx
  float v28; // xmm1_4
  __int64 v30; // [rsp+20h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-30h] BYREF
  char v32; // [rsp+48h] [rbp-28h]
  float *v33; // [rsp+50h] [rbp-20h] BYREF
  __int16 v34; // [rsp+58h] [rbp-18h]
  char *v35; // [rsp+60h] [rbp-10h] BYREF
  __int16 v36; // [rsp+68h] [rbp-8h]
  char v37; // [rsp+B0h] [rbp+40h]
  char v38; // [rsp+B8h] [rbp+48h]

  v2 = 0;
  v4 = 0;
  v37 = 0;
  v38 = 0;
  v5 = 0LL;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x92u,
      (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
      (char *)this - 1040,
      a2);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = (char *)this - 704;
  v9 = *(_QWORD *)&a2->guidEventContext.Data1 - *((_QWORD *)this - 88);
  if ( *(_QWORD *)&a2->guidEventContext.Data1 == *((_QWORD *)this - 88) )
    v9 = *(_QWORD *)a2->guidEventContext.Data4 - *((_QWORD *)v8 + 1);
  if ( v9 )
  {
    if ( v7 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v7 + 28) & 0x40) != 0 && *((_BYTE *)v7 + 25) >= 4u )
      WPP_SF_q_guid__guid_(
        *((_QWORD *)v7 + 2),
        (_DWORD)v8,
        (unsigned int)&WPP_GLOBAL_Control,
        (_DWORD)this - 1040,
        (__int64)a2,
        (__int64)this - 704);
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
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          149LL,
          &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
          (char *)this - 1040,
          v11,
          a2->bMuted);
        v12 = WPP_GLOBAL_Control;
      }
      v37 = 1;
    }
    p_fMasterVolume = &a2->fMasterVolume;
    fMasterVolume_low = (__m128)LODWORD(a2->fMasterVolume);
    v15 = (_DWORD *)((char *)this - 136);
    if ( fMasterVolume_low.m128_f32[0] != *((float *)this - 34) )
    {
      if ( v12 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        v16 = (__m128)(unsigned int)*v15;
        v34 = 4;
        v36 = 4;
        v33 = &a2->fMasterVolume;
        v35 = (char *)this - 136;
        WPP_SF_qgg_HEX__HEX_(
          *((_QWORD *)v12 + 2),
          (_DWORD)v10,
          v11,
          (_DWORD)this - 1040,
          *(_OWORD *)&_mm_cvtps_pd(v16),
          *(_OWORD *)&_mm_cvtps_pd(fMasterVolume_low),
          (__int64)&v35,
          (__int64)&v33);
        v12 = WPP_GLOBAL_Control;
      }
      v38 = 1;
    }
    v17 = *((_DWORD *)this - 6);
    if ( a2->nChannels == v17 )
    {
      v19 = v17;
      v18 = 4LL * v17;
      if ( !is_mul_ok(v19, 4uLL) )
        v18 = -1LL;
      v5 = (float *)operator new[](v18, (const struct std::nothrow_t *)&std::nothrow);
      if ( v5 && *((_DWORD *)this - 6) )
      {
        do
        {
          if ( *p_fMasterVolume == 0.0 )
          {
            v20 = FLOAT_1_0;
            v21 = v2;
            v5[v21] = 1.0;
          }
          else
          {
            v21 = v2;
            v20 = a2->afChannelVolumes[v21] / *p_fMasterVolume;
            v5[v21] = v20;
          }
          v22 = *((_QWORD *)this - 2);
          if ( v20 == *(float *)(v21 * 4 + v22) )
          {
            v12 = WPP_GLOBAL_Control;
          }
          else
          {
            v12 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              LODWORD(v30) = v2;
              WPP_SF_qdgg(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x97u,
                (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids,
                (char *)this - 1040,
                v30,
                *(float *)(v21 * 4 + v22),
                v20);
              v12 = WPP_GLOBAL_Control;
            }
            v4 = 1;
          }
          ++v2;
        }
        while ( v2 < *((_DWORD *)this - 6) );
        v15 = (_DWORD *)((char *)this - 136);
      }
      else
      {
        v12 = WPP_GLOBAL_Control;
      }
    }
    v23 = 0;
    if ( v32 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v12 = WPP_GLOBAL_Control;
    }
    if ( v37 || v38 || v4 )
    {
      if ( v12 != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v12 + 28) & 0x40) != 0
        && *((_BYTE *)v12 + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)v12 + 2), 0x98u, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v4 )
      {
        v24 = 0;
        if ( v12 != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x99u, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
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
            do
            {
              v27 = *((_QWORD *)this - 2);
              v28 = v5[v26];
              if ( *(float *)(v27 + 4 * v26) != v28 )
              {
                *(float *)(v27 + 4 * v26) = v28;
                v24 = v26;
              }
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < *((_DWORD *)this - 6) );
          }
          v23 = 1;
        }
        if ( v32 )
          LeaveCriticalSection(lpCriticalSection);
        if ( v23 )
          CAudioSession::RecalculateSessionVolume((__int64)this - 1024, 1u, &a2->guidEventContext, v24, 1, 0LL);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v37 )
      {
        CAudioSession::SetMute(
          (CPerEndpointVolumeAudioSession *)((char *)this - 1040),
          a2->bMuted,
          &EVENTCONTEXT_AUDIOSUBSYSTEM,
          1);
        v12 = WPP_GLOBAL_Control;
      }
      if ( v38 )
      {
        if ( v12 != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)v12 + 28) & 0x40) != 0
          && *((_BYTE *)v12 + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)v12 + 2), 0x9Au, (__int64)&WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids);
        }
        v32 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 176);
        ATL::CCritSecLock::Lock(&lpCriticalSection);
        *v15 = *(_DWORD *)p_fMasterVolume;
        if ( v32 )
          LeaveCriticalSection(lpCriticalSection);
        CAudioSession::RecalculateSessionVolume((__int64)this - 1024, 0, &a2->guidEventContext, 0, 1, 0LL);
      }
    }
    operator delete(v5);
  }
  else if ( v7 != (CAudioDGProcess *)&WPP_GLOBAL_Control
         && (*((_BYTE *)v7 + 28) & 0x40) != 0
         && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)v7 + 2), 147LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, (char *)this - 1040);
  }
  return 0LL;
}
