/*
 * XREFs of ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18001D484
 * Callers:
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x18001D5D0 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18008AC90 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18008E330 (-OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z @ 0x18008FFD0 (-SetVolume@CPerStreamVolumeAudioSession@@EEAAJMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x18007A9E0 (-Release@CUnknown@@UEAAKXZ.c)
 *     WPP_SF_Sq @ 0x1800908E4 (WPP_SF_Sq.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::StopSessionPersistanceTimer(CPerStreamVolumeAudioSession *this)
{
  __int64 v3; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  if ( *((_BYTE *)this + 1056) )
  {
    v5 = 0;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 1112);
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        149,
        (unsigned int)&WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
        *((_QWORD *)this + 108),
        *((_QWORD *)this + 144));
    }
    if ( *((_QWORD *)this + 144) )
    {
      v3 = _InterlockedExchange64((volatile __int64 *)this + 144, 0LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        v3,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 32LL))(ThreadPool, v3, 1LL);
      (*(void (__fastcall **)(CAudioThreadPool *, __int64))(*(_QWORD *)ThreadPool + 16LL))(ThreadPool, v3);
      if ( *((_QWORD *)this + 145) )
      {
        (*(void (__fastcall **)(CAudioThreadPool *))(*(_QWORD *)ThreadPool + 64LL))(ThreadPool);
        *((_QWORD *)this + 145) = 0LL;
      }
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          150LL,
          &WPP_0c5ff841e5503cc39024c97173620901_Traceguids,
          *((_QWORD *)this + 108));
      }
      CUnknown::Release((CPerStreamVolumeAudioSession *)((char *)this + 32));
    }
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
