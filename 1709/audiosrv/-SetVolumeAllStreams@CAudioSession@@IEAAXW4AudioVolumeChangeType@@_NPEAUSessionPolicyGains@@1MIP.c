/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x1800185E8
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18002D020 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180076980 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x18001A83C (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x18001B064 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001B42C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x18002D5A0 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18002D6B0 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        bool a3,
        struct SessionPolicyGains *a4,
        bool a5,
        float a6,
        unsigned int a7,
        float *a8,
        __int64 a9)
{
  unsigned int v13; // r14d
  __int64 v15; // rcx
  struct CAudioStream *v17; // rbx
  float PolicyVolumeForStream; // xmm0_4
  int v19; // eax
  _BOOL8 v20; // rdx
  __int64 (__fastcall *v21)(CPerStreamVolumeAudioStream *__hidden, bool, bool); // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 (__usercall *v24)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v26; // [rsp+50h] [rbp-38h]

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 108LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 256LL))(g_PolicyManager);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 48);
  v26 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v13 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v15 = 0LL;
    while ( 1 )
    {
      v17 = *(struct CAudioStream **)(*(_QWORD *)(a1 + 96) + 8 * v15);
      PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream((CAudioSession *)a1, a4, v17);
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 109LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a1, v17);
      }
      if ( a2 == 3 )
      {
        a9 = *((_BYTE *)v17 + 400) != 0 ? 0x3D0900 : 0;
      }
      else if ( a2 == 4 )
      {
        a9 = *((_BYTE *)v17 + 400) != 0 ? 0x2710 : 0;
      }
      v19 = CAudioStream::SetPolicyVolume(v17, a3, PolicyVolumeForStream, a9, a7 == 0);
      if ( v19 < 0 )
        break;
      if ( a7 )
      {
        v21 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, bool, bool))(*(_QWORD *)v17 + 104LL);
        LOBYTE(v20) = a5;
        if ( v21 == CPerStreamVolumeAudioStream::SetSessionMute )
          v22 = CPerStreamVolumeAudioStream::SetSessionMute(v17, a5, 0);
        else
          v22 = v21(v17, v20, 0);
        if ( v22 < 0 )
          break;
        v24 = *(__int64 (__usercall **)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool))(*(_QWORD *)v17 + 96LL);
        if ( v24 == CPerStreamVolumeAudioStream::SetSessionVolume )
          v19 = CPerStreamVolumeAudioStream::SetSessionVolume(v17, a6, a7, a8, a9, 1);
        else
          v19 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *))v24)(v17, v23, a7, a8);
      }
      if ( v19 < 0 )
        break;
LABEL_20:
      if ( (int)CAudioStream::UpdateStreamPriority(v17) < 0
        && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 111LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a1, v17);
      }
      v15 = ++v13;
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_4;
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 110LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a1, v17);
    }
    goto LABEL_20;
  }
LABEL_4:
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
}
