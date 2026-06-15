/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013F60
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x18001D520 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPoli.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J4@Z @ 0x180090370 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAXW4AudioVolumeChangeType@@_NPEAUSessionPo.c)
 * Callees:
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z @ 0x1800023CC (-GetPolicyVolumeForStream@CAudioSession@@IEAAMPEAUSessionPolicyGains@@PEAVCAudioStream@@@Z.c)
 *     ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x180016930 (-SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z.c)
 *     ?SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z @ 0x180016950 (-SetSessionVolume@CPerStreamVolumeAudioStream@@UEAAJMKQEAM_J_N@Z.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z @ 0x180019E70 (-SetPolicyVolume@CAudioStream@@QEAAJ_NM_J0@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18001A150 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
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
  CAudioSession *v15; // rcx
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

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 115LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a1);
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
      v17 = *(struct CAudioStream **)(*(_QWORD *)(a1 + 96) + 8LL * (_QWORD)v15);
      PolicyVolumeForStream = CAudioSession::GetPolicyVolumeForStream(v15, a4, v17);
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 116LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a1, v17);
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
        v21 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, bool, bool))(*(_QWORD *)v17 + 112LL);
        LOBYTE(v20) = a5;
        if ( v21 == CPerStreamVolumeAudioStream::SetSessionMute )
          v22 = CPerStreamVolumeAudioStream::SetSessionMute(v17, a5, 0);
        else
          v22 = v21(v17, v20, 0);
        if ( v22 < 0 )
          break;
        v24 = *(__int64 (__usercall **)@<rax>(CPerStreamVolumeAudioStream *__hidden@<rcx>, float@<xmm1>, unsigned int@<r8d>, float *const@<r9>, __int64, bool))(*(_QWORD *)v17 + 104LL);
        if ( v24 == CPerStreamVolumeAudioStream::SetSessionVolume )
          v19 = CPerStreamVolumeAudioStream::SetSessionVolume(v17, a6, a7, a8, a9, 1);
        else
          v19 = ((__int64 (__fastcall *)(struct CAudioStream *, __int64, _QWORD, float *))v24)(v17, v23, a7, a8);
      }
      if ( v19 < 0 )
        break;
LABEL_24:
      if ( (int)CAudioStream::UpdateStreamPriority(v17) < 0
        && WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 118LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a1, v17);
      }
      v15 = (CAudioSession *)++v13;
      if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_6;
    }
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 117LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a1, v17);
    }
    goto LABEL_24;
  }
LABEL_6:
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 264LL))(g_PolicyManager);
}
