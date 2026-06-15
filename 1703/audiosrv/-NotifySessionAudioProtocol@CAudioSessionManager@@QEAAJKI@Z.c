/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180093F30
 * Callers:
 *     ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18001E588 (-NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x180093D34 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180093D64 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::NotifySessionAudioProtocol(CAudioSessionManager *this, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+20h] [rbp-88h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-70h] BYREF
  char v11; // [rsp+40h] [rbp-68h]
  _BYTE v12[80]; // [rsp+50h] [rbp-58h] BYREF
  __int64 StartPosition; // [rsp+B0h] [rbp+8h] BYREF

  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Cu,
      (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      this,
      v9);
  }
  if ( *((_DWORD *)this + 62) != a3 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
    v11 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64 *)this + 8);
    while ( StartPosition )
    {
      v6 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                        (__int64)this + 64,
                        &StartPosition);
      if ( v6 && *(_DWORD *)(v6 + 852) == a2 )
      {
        LOBYTE(v7) = 1;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v6 + 16) + 32LL))(v6 + 16, 4LL, v7);
      }
    }
    if ( v11 )
      LeaveCriticalSection(lpCriticalSection);
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v12);
  return 0LL;
}
