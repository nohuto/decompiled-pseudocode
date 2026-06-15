/*
 * XREFs of ?RevokeSessions@CAudioSessionManager@@QEAAJPEBG00W4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800945C4
 * Callers:
 *     ?RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z @ 0x1800956C0 (-RevokeSessions@CAudioSessionManagerProvider@@QEAAJPEBG00@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z @ 0x18008D8B8 (-MatchesParameters@CAudioSession@@QEAAH_NPEBG11@Z.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x180093D34 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180093D64 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::RevokeSessions(
        __int64 a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 *v7; // rsi
  int v8; // edi
  __int64 v9; // rdx
  CAudioSession *v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-30h] BYREF
  char v15; // [rsp+40h] [rbp-28h]
  __int64 StartPosition; // [rsp+70h] [rbp+8h] BYREF

  v7 = (__int64 *)(a1 + 64);
  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 24);
  v15 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v7);
  while ( StartPosition )
  {
    v10 = *(CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                               (__int64)v7,
                               &StartPosition);
    if ( v10 )
    {
      if ( CAudioSession::MatchesParameters(v10, v9, a2, a3, a4) )
      {
        LOBYTE(v11) = 1;
        v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*((_QWORD *)v10 + 2) + 32LL))(
                (_QWORD *)v10 + 2,
                0LL,
                v11);
        if ( v12 < 0 && v8 >= 0 )
          v8 = v12;
      }
    }
  }
  if ( v15 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v8;
}
