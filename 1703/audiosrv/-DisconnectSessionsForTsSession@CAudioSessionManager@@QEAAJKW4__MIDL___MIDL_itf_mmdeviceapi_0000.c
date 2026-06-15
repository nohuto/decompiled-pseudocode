/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180093278
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18009501C (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180095638 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x18009360C (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x180093D34 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180093D64 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::DisconnectSessionsForTsSession(
        CAudioSessionManager *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a3)
{
  const struct _GUID *v6; // r8
  __int64 v7; // rbx
  int AudioSession; // ebx
  struct CAudioSession *v9; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-31h] BYREF
  char v12; // [rsp+48h] [rbp-29h]
  _BYTE v13[112]; // [rsp+58h] [rbp-19h] BYREF
  struct CAudioSession *v14; // [rsp+D8h] [rbp+67h] BYREF
  __int64 StartPosition; // [rsp+F0h] [rbp+7Fh] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v13);
  v14 = 0LL;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      this,
      a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((char *)this + 64);
  while ( StartPosition )
  {
    v7 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                      (char *)this + 64,
                      &StartPosition);
    v14 = (struct CAudioSession *)v7;
    if ( v7
      && *(_DWORD *)(v7 + 852) == a2
      && (a3 == eAll || a3 == eRender && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7)) )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)(v7 + 16) + 32LL))(v7 + 16, 0LL, v6);
    }
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v6, &v14);
  v9 = v14;
  if ( AudioSession >= 0 )
    AudioSession = (*(__int64 (__fastcall **)(CAudioSessionManager *, struct CAudioSession *, _QWORD, __int64))(*(_QWORD *)this + 56LL))(
                     this,
                     v14,
                     0LL,
                     2LL);
  if ( v9 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::DisconnectSessionsForTsSession", 1771, AudioSession);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v13);
  return (unsigned int)AudioSession;
}
