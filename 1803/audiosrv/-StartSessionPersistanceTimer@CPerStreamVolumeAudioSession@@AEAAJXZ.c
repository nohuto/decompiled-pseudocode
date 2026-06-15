/*
 * XREFs of ?StartSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800AD93C
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800ACD60 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z @ 0x1800ACF80 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@PEAH@Z.c)
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800AD680 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z @ 0x1800AD850 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@PEAH@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180041CFC (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StartSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  signed int v1; // ebx
  __int64 v3; // rax
  __int64 v4; // rax
  signed int LastError; // eax
  signed int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  int v11; // [rsp+54h] [rbp+Ch]

  v1 = 0;
  if ( *((_BYTE *)this + 984) )
  {
    v1 = CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this);
    if ( v1 < 0 )
      goto LABEL_27;
    v9 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1040);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x75u,
        (__int64)&WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
        *((const wchar_t **)this + 91));
    }
    if ( !*((_QWORD *)this + 135) )
    {
      v3 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool
                                                                                                 + 8LL))(
             ThreadPool,
             CPerStreamVolumeAudioSession::PersistanceTimerCallback,
             this);
      *((_QWORD *)this + 135) = v3;
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(CAudioThreadPool *, _QWORD, CPerStreamVolumeAudioSession *))(*(_QWORD *)ThreadPool + 56LL))(
               ThreadPool,
               CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed,
               this);
        *((_QWORD *)this + 136) = v4;
        if ( v4 )
        {
          v10 = -50000000;
          v11 = -1;
          _InterlockedIncrement((volatile signed __int32 *)this + 10);
          (*(void (__fastcall **)(CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
            ThreadPool,
            *((_QWORD *)this + 135),
            &v10,
            0LL,
            100);
        }
        else
        {
          LastError = GetLastError();
          v1 = LastError;
          if ( LastError > 0 )
            v1 = (unsigned __int16)LastError | 0x80070000;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              118LL,
              &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
              (unsigned int)v1);
          }
          (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
            ThreadPool,
            *((_QWORD *)this + 135));
          *((_QWORD *)this + 135) = 0LL;
        }
      }
      else
      {
        v6 = GetLastError();
        v1 = v6;
        if ( v6 > 0 )
          v1 = (unsigned __int16)v6 | 0x80070000;
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            119LL,
            &WPP_b198ffa89b193e32b53cc51510916f29_Traceguids,
            (unsigned int)v1);
        }
      }
    }
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v1 < 0 )
LABEL_27:
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioSession::StartSessionPersistanceTimer", 4936, v1);
  }
  return (unsigned int)v1;
}
