/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180004F90
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x180003440 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800ADC20 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x1800961DC (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18009635C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z @ 0x180096968 (-GetPolicyVolumeForStream@CAudioSession@@IEAAXPEAVCAudioStream@@PEAMPEA_J@Z.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800980C8 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v8; // ebp
  __int64 v10; // rax
  bool v11; // r12
  struct CAudioStream *v12; // rdi
  CAudioSession *v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  int updated; // eax
  int v21; // [rsp+20h] [rbp-88h]
  __int64 v22[2]; // [rsp+40h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-58h] BYREF
  char v24; // [rsp+58h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  float v26; // [rsp+B0h] [rbp+8h] BYREF
  char v27; // [rsp+C0h] [rbp+18h]

  v27 = a3;
  v22[1] = -2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 90LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 240LL))(g_PolicyManager);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 48);
  v24 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v10 = 0LL;
    v11 = a5 == 0;
    while ( 1 )
    {
      v12 = *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                       a1 + 96,
                                       v10);
      CAudioSession::GetPolicyVolumeForStream(v13, v12, &v26, v22);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 91LL, &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids, a1, v12);
      }
      if ( a2 == 3 )
        v14 = *((_BYTE *)v12 + 416) != 0 ? 0x3D0900 : 0;
      else
        v14 = a2 == 4 ? (*((_BYTE *)v12 + 416) != 0 ? 0x2710 : 0) : v22[0];
      v15 = CAudioStream::SetPolicyVolume(v12, v26, v14, v11);
      v17 = retaddr;
      if ( v15 < 0 )
        break;
      if ( a5 )
      {
        LOBYTE(v16) = v27;
        v15 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD))(*(_QWORD *)v12 + 104LL))(
                v12,
                v16,
                0LL);
        v17 = retaddr;
        if ( v15 < 0 )
        {
          v18 = 4259LL;
          goto LABEL_26;
        }
        v21 = v14;
        v15 = (*(__int64 (__fastcall **)(struct CAudioStream *, __int64, _QWORD, __int64))(*(_QWORD *)v12 + 96LL))(
                v12,
                v19,
                a5,
                a6);
        v17 = retaddr;
        if ( v15 < 0 )
        {
          v18 = 4262LL;
          goto LABEL_26;
        }
      }
LABEL_27:
      updated = CAudioStream::UpdateStreamPriority(v12);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10AC,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          v21);
      v10 = ++v8;
      if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_4;
    }
    v18 = 4254LL;
LABEL_26:
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v15,
      v21);
    goto LABEL_27;
  }
LABEL_4:
  if ( v24 )
    LeaveCriticalSection(lpCriticalSection);
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 248LL))(g_PolicyManager);
}
