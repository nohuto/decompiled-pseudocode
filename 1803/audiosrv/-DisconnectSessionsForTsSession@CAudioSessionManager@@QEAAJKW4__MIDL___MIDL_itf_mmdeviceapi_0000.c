/*
 * XREFs of ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B1D94
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800B4974 (-DisconnectSessionsForTsSession@CAudioSessionManagerProvider@@QEAAXKW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800B5070 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 * Callees:
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmResourceType@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@W4RmResourceType@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x18000524C (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@W4RmR.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800052B4 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dd @ 0x1800A4FEC (WPP_SF_dd.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z @ 0x1800B2144 (-FindAudioSession@CAudioSessionManager@@IEAAJKPEBU_GUID@@PEAPEAVCAudioSession@@@Z.c)
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
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v11; // [rsp+28h] [rbp-49h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-31h] BYREF
  char v13; // [rsp+48h] [rbp-29h]
  _BYTE v14[112]; // [rsp+58h] [rbp-19h] BYREF
  struct CAudioSession *v15; // [rsp+D8h] [rbp+67h] BYREF
  __int64 StartPosition; // [rsp+F0h] [rbp+7Fh] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  v15 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v11 = a3;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, (__int64)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v13 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,enum RmResourceType,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<enum RmResourceType>>::GetStartPosition((__int64 *)this + 8);
  while ( StartPosition )
  {
    v7 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                      (__int64)this + 64,
                      &StartPosition);
    v15 = (struct CAudioSession *)v7;
    if ( v7
      && *(_DWORD *)(v7 + 716) == a2
      && (a3 == eAll || a3 == eRender && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7)) )
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(__int64, _QWORD, const struct _GUID *))(*(_QWORD *)(v7 + 16) + 32LL))(v7 + 16, 0LL, v6);
    }
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  AudioSession = CAudioSessionManager::FindAudioSession(this, a2, v6, &v15);
  v9 = v15;
  if ( AudioSession >= 0 )
    AudioSession = (*(__int64 (__fastcall **)(CAudioSessionManager *, struct CAudioSession *, _QWORD, __int64, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001))(*(_QWORD *)this + 56LL))(
                     this,
                     v15,
                     0LL,
                     2LL,
                     v11);
  if ( v9 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::DisconnectSessionsForTsSession", 1961, AudioSession);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v14);
  return (unsigned int)AudioSession;
}
