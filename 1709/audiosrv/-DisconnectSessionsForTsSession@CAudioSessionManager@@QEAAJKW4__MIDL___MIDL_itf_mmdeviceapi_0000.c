/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800796D0
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18007B800 (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x18007C0F4 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18001490C (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180017500 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18005B5E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x180079A80 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x18007A194 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
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
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x38u,
      (__int64)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
      this,
      a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    v7 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                      (char *)this + 64,
                      &StartPosition);
    v14 = (struct CAudioSession *)v7;
    if ( v7
      && *(_DWORD *)(v7 + 780) == a2
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
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::DisconnectSessionsForTsSession", 1743, AudioSession);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v13);
  return (unsigned int)AudioSession;
}
